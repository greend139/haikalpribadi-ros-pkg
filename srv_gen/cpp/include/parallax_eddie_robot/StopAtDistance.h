/* Auto-generated by genmsg_cpp for file /home/haikalpribadi/Workspaces/ROS/parallax_eddie_robot/srv/StopAtDistance.srv */
#ifndef PARALLAX_EDDIE_ROBOT_SERVICE_STOPATDISTANCE_H
#define PARALLAX_EDDIE_ROBOT_SERVICE_STOPATDISTANCE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace parallax_eddie_robot
{
template <class ContainerAllocator>
struct StopAtDistanceRequest_ {
  typedef StopAtDistanceRequest_<ContainerAllocator> Type;

  StopAtDistanceRequest_()
  : distance(0)
  {
  }

  StopAtDistanceRequest_(const ContainerAllocator& _alloc)
  : distance(0)
  {
  }

  typedef uint16_t _distance_type;
  uint16_t distance;


private:
  static const char* __s_getDataType_() { return "parallax_eddie_robot/StopAtDistanceRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "4db6e4febd2342355b86e2b5ee754faf"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "4db6e4febd2342355b86e2b5ee754faf"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "uint16 distance\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, distance);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, distance);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(distance);
    return size;
  }

  typedef boost::shared_ptr< ::parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct StopAtDistanceRequest
typedef  ::parallax_eddie_robot::StopAtDistanceRequest_<std::allocator<void> > StopAtDistanceRequest;

typedef boost::shared_ptr< ::parallax_eddie_robot::StopAtDistanceRequest> StopAtDistanceRequestPtr;
typedef boost::shared_ptr< ::parallax_eddie_robot::StopAtDistanceRequest const> StopAtDistanceRequestConstPtr;


template <class ContainerAllocator>
struct StopAtDistanceResponse_ {
  typedef StopAtDistanceResponse_<ContainerAllocator> Type;

  StopAtDistanceResponse_()
  {
  }

  StopAtDistanceResponse_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "parallax_eddie_robot/StopAtDistanceResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "4db6e4febd2342355b86e2b5ee754faf"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    return size;
  }

  typedef boost::shared_ptr< ::parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct StopAtDistanceResponse
typedef  ::parallax_eddie_robot::StopAtDistanceResponse_<std::allocator<void> > StopAtDistanceResponse;

typedef boost::shared_ptr< ::parallax_eddie_robot::StopAtDistanceResponse> StopAtDistanceResponsePtr;
typedef boost::shared_ptr< ::parallax_eddie_robot::StopAtDistanceResponse const> StopAtDistanceResponseConstPtr;

struct StopAtDistance
{

typedef StopAtDistanceRequest Request;
typedef StopAtDistanceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct StopAtDistance
} // namespace parallax_eddie_robot

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4db6e4febd2342355b86e2b5ee754faf";
  }

  static const char* value(const  ::parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4db6e4febd234235ULL;
  static const uint64_t static_value2 = 0x5b86e2b5ee754fafULL;
};

template<class ContainerAllocator>
struct DataType< ::parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "parallax_eddie_robot/StopAtDistanceRequest";
  }

  static const char* value(const  ::parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint16 distance\n\
\n\
";
  }

  static const char* value(const  ::parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "parallax_eddie_robot/StopAtDistanceResponse";
  }

  static const char* value(const  ::parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
";
  }

  static const char* value(const  ::parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.distance);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct StopAtDistanceRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct StopAtDistanceResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<parallax_eddie_robot::StopAtDistance> {
  static const char* value() 
  {
    return "4db6e4febd2342355b86e2b5ee754faf";
  }

  static const char* value(const parallax_eddie_robot::StopAtDistance&) { return value(); } 
};

template<>
struct DataType<parallax_eddie_robot::StopAtDistance> {
  static const char* value() 
  {
    return "parallax_eddie_robot/StopAtDistance";
  }

  static const char* value(const parallax_eddie_robot::StopAtDistance&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4db6e4febd2342355b86e2b5ee754faf";
  }

  static const char* value(const parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "parallax_eddie_robot/StopAtDistance";
  }

  static const char* value(const parallax_eddie_robot::StopAtDistanceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4db6e4febd2342355b86e2b5ee754faf";
  }

  static const char* value(const parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "parallax_eddie_robot/StopAtDistance";
  }

  static const char* value(const parallax_eddie_robot::StopAtDistanceResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // PARALLAX_EDDIE_ROBOT_SERVICE_STOPATDISTANCE_H

