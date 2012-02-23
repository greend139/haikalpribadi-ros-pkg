/* Auto-generated by genmsg_cpp for file /home/haikalpribadi/Workspaces/ROS/parallax_eddie_robot/msg/ADC.msg */
#ifndef PARALLAX_EDDIE_ROBOT_MESSAGE_ADC_H
#define PARALLAX_EDDIE_ROBOT_MESSAGE_ADC_H
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


namespace parallax_eddie_robot
{
template <class ContainerAllocator>
struct ADC_ {
  typedef ADC_<ContainerAllocator> Type;

  ADC_()
  : status()
  , value()
  {
  }

  ADC_(const ContainerAllocator& _alloc)
  : status(_alloc)
  , value(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  status;

  typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _value_type;
  std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  value;


  ROS_DEPRECATED uint32_t get_value_size() const { return (uint32_t)value.size(); }
  ROS_DEPRECATED void set_value_size(uint32_t size) { value.resize((size_t)size); }
  ROS_DEPRECATED void get_value_vec(std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other > & vec) const { vec = this->value; }
  ROS_DEPRECATED void set_value_vec(const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other > & vec) { this->value = vec; }
private:
  static const char* __s_getDataType_() { return "parallax_eddie_robot/ADC"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "fd06a43da03c247f617c08d65c3562e9"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "string status\n\
uint16[] value\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, status);
    ros::serialization::serialize(stream, value);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, status);
    ros::serialization::deserialize(stream, value);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(status);
    size += ros::serialization::serializationLength(value);
    return size;
  }

  typedef boost::shared_ptr< ::parallax_eddie_robot::ADC_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::parallax_eddie_robot::ADC_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ADC
typedef  ::parallax_eddie_robot::ADC_<std::allocator<void> > ADC;

typedef boost::shared_ptr< ::parallax_eddie_robot::ADC> ADCPtr;
typedef boost::shared_ptr< ::parallax_eddie_robot::ADC const> ADCConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::parallax_eddie_robot::ADC_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::parallax_eddie_robot::ADC_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace parallax_eddie_robot

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::parallax_eddie_robot::ADC_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::parallax_eddie_robot::ADC_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::parallax_eddie_robot::ADC_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fd06a43da03c247f617c08d65c3562e9";
  }

  static const char* value(const  ::parallax_eddie_robot::ADC_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xfd06a43da03c247fULL;
  static const uint64_t static_value2 = 0x617c08d65c3562e9ULL;
};

template<class ContainerAllocator>
struct DataType< ::parallax_eddie_robot::ADC_<ContainerAllocator> > {
  static const char* value() 
  {
    return "parallax_eddie_robot/ADC";
  }

  static const char* value(const  ::parallax_eddie_robot::ADC_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::parallax_eddie_robot::ADC_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string status\n\
uint16[] value\n\
\n\
";
  }

  static const char* value(const  ::parallax_eddie_robot::ADC_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::parallax_eddie_robot::ADC_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.status);
    stream.next(m.value);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ADC_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::parallax_eddie_robot::ADC_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::parallax_eddie_robot::ADC_<ContainerAllocator> & v) 
  {
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status);
    s << indent << "value[]" << std::endl;
    for (size_t i = 0; i < v.value.size(); ++i)
    {
      s << indent << "  value[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.value[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // PARALLAX_EDDIE_ROBOT_MESSAGE_ADC_H

