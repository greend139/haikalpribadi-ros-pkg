; Auto-generated. Do not edit!


(cl:in-package parallax_eddie_robot-msg)


;//! \htmlinclude ADC.msg.html

(cl:defclass <ADC> (roslisp-msg-protocol:ros-message)
  ((status
    :reader status
    :initarg :status
    :type cl:string
    :initform "")
   (value
    :reader value
    :initarg :value
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0)))
)

(cl:defclass ADC (<ADC>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ADC>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ADC)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name parallax_eddie_robot-msg:<ADC> is deprecated: use parallax_eddie_robot-msg:ADC instead.")))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <ADC>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader parallax_eddie_robot-msg:status-val is deprecated.  Use parallax_eddie_robot-msg:status instead.")
  (status m))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <ADC>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader parallax_eddie_robot-msg:value-val is deprecated.  Use parallax_eddie_robot-msg:value instead.")
  (value m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ADC>) ostream)
  "Serializes a message object of type '<ADC>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'status))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'status))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'value))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) ele) ostream))
   (cl:slot-value msg 'value))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ADC>) istream)
  "Deserializes a message object of type '<ADC>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'status) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'status) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'value) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'value)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:aref vals i)) (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ADC>)))
  "Returns string type for a message object of type '<ADC>"
  "parallax_eddie_robot/ADC")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ADC)))
  "Returns string type for a message object of type 'ADC"
  "parallax_eddie_robot/ADC")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ADC>)))
  "Returns md5sum for a message object of type '<ADC>"
  "fd06a43da03c247f617c08d65c3562e9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ADC)))
  "Returns md5sum for a message object of type 'ADC"
  "fd06a43da03c247f617c08d65c3562e9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ADC>)))
  "Returns full string definition for message of type '<ADC>"
  (cl:format cl:nil "string status~%uint16[] value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ADC)))
  "Returns full string definition for message of type 'ADC"
  (cl:format cl:nil "string status~%uint16[] value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ADC>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'status))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'value) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 2)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ADC>))
  "Converts a ROS message object to a list"
  (cl:list 'ADC
    (cl:cons ':status (status msg))
    (cl:cons ':value (value msg))
))
