// Generated by gencpp from file graspit_interface/SetRobotDesiredDOFResponse.msg
// DO NOT EDIT!


#ifndef GRASPIT_INTERFACE_MESSAGE_SETROBOTDESIREDDOFRESPONSE_H
#define GRASPIT_INTERFACE_MESSAGE_SETROBOTDESIREDDOFRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace graspit_interface
{
template <class ContainerAllocator>
struct SetRobotDesiredDOFResponse_
{
  typedef SetRobotDesiredDOFResponse_<ContainerAllocator> Type;

  SetRobotDesiredDOFResponse_()
    : result(0)  {
    }
  SetRobotDesiredDOFResponse_(const ContainerAllocator& _alloc)
    : result(0)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;



  enum {
    RESULT_SUCCESS = 0u,
    RESULT_INVALID_ID = 1u,
    RESULT_DOF_OUT_OF_RANGE = 2u,
    RESULT_DOF_COUNT_MISMATCH = 3u,
    RESULT_DYNAMICS_MODE_DISABLED = 4u,
  };


  typedef boost::shared_ptr< ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetRobotDesiredDOFResponse_

typedef ::graspit_interface::SetRobotDesiredDOFResponse_<std::allocator<void> > SetRobotDesiredDOFResponse;

typedef boost::shared_ptr< ::graspit_interface::SetRobotDesiredDOFResponse > SetRobotDesiredDOFResponsePtr;
typedef boost::shared_ptr< ::graspit_interface::SetRobotDesiredDOFResponse const> SetRobotDesiredDOFResponseConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace graspit_interface

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'graspit_interface': ['/home/mamad/Graspit/src/graspit_interface/msg', '/home/mamad/Graspit/devel/share/graspit_interface/msg'], 'actionlib': ['/opt/ros/kinetic/share/actionlib/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f204b64fe1b55637af64a69fcacb31bd";
  }

  static const char* value(const ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf204b64fe1b55637ULL;
  static const uint64_t static_value2 = 0xaf64a69fcacb31bdULL;
};

template<class ContainerAllocator>
struct DataType< ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "graspit_interface/SetRobotDesiredDOFResponse";
  }

  static const char* value(const ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 RESULT_SUCCESS                = 0\n\
uint8 RESULT_INVALID_ID             = 1\n\
uint8 RESULT_DOF_OUT_OF_RANGE       = 2\n\
uint8 RESULT_DOF_COUNT_MISMATCH     = 3\n\
uint8 RESULT_DYNAMICS_MODE_DISABLED = 4\n\
\n\
uint8 result\n\
\n\
";
  }

  static const char* value(const ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetRobotDesiredDOFResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::graspit_interface::SetRobotDesiredDOFResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRASPIT_INTERFACE_MESSAGE_SETROBOTDESIREDDOFRESPONSE_H
