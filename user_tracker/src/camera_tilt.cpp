/*
 * Software License Agreement (BSD License)
 *
 * Copyright (c) 2012, Haikal Pribadi <haikal.pribadi@gmail.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of the Haikal Pribadi nor the names of other
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include "camera_tilt.h"

CameraTilt::CameraTilt(): tilt_angle_(0.0)
{
  target_angle_sub_ = node_handle_.subscribe("/camera_target", 1, &CameraTilt::cameraTargetCallback, this);
  current_angle_sub_ = node_handle_.subscribe("/cur_tilt_angle", 1, &CameraTilt::currentAngleCallback, this);
  set_angle_sub_ = node_handle_.subscribe("/camera_angle", 1, &CameraTilt::setAngleCallback, this);
  set_angle_pub_ = node_handle_.advertise<std_msgs::Float64>("/tilt_angle", 1);
  get_angle_srv_ = node_handle_.advertiseService("get_camera_angle", &CameraTilt::getAngle, this);
  sem_init(&mutex_, 0, 1);
}

void CameraTilt::cameraTargetCallback(const user_tracker::Coordinate::ConstPtr& message)
{
  int x, y, z;
  x = message->x;
  y = message->y;
  z = message->z;

  double diff_angle;
  diff_angle = atan2(z, x) * 180 / PI;
  diff_angle = diff_angle>180 ? diff_angle-360 : diff_angle;

  if((tilt_angle_>=30 && diff_angle>0) || (tilt_angle_<=-30 && diff_angle<0))
    return;
  std_msgs::Float64 angle;
  sem_wait(&mutex_);
  angle.data = tilt_angle_ + diff_angle;
  sem_post(&mutex_);
  set_angle_pub_.publish(angle);
}

void CameraTilt::currentAngleCallback(const std_msgs::Float64::ConstPtr& message)
{
  sem_wait(&mutex_);
  tilt_angle_ = message->data;
  sem_post(&mutex_);
}

void CameraTilt::setAngleCallback(const std_msgs::Float64::ConstPtr& message)
{
  std_msgs::Float64 angle;
  angle.data = message->data > 31.0 ? 31.0 : message->data;
  angle.data = angle.data < -31.0 ? -31.0 : angle.data;
  set_angle_pub_.publish(angle);
}

bool CameraTilt::getAngle(user_tracker::GetCameraAngle::Request& req,
  user_tracker::GetCameraAngle::Response& res)
{
  res.angle = tilt_angle_;
  return true;
}

/*
 * 
 */
int main(int argc, char** argv)
{
  ros::init(argc, argv, "camera_tilt");
  CameraTilt tilt;
  ros::spin();
  
  return (EXIT_SUCCESS);
}

