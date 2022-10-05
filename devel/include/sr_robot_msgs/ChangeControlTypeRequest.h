// Generated by gencpp from file sr_robot_msgs/ChangeControlTypeRequest.msg
// DO NOT EDIT!


#ifndef SR_ROBOT_MSGS_MESSAGE_CHANGECONTROLTYPEREQUEST_H
#define SR_ROBOT_MSGS_MESSAGE_CHANGECONTROLTYPEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sr_robot_msgs/ControlType.h>

namespace sr_robot_msgs
{
template <class ContainerAllocator>
struct ChangeControlTypeRequest_
{
  typedef ChangeControlTypeRequest_<ContainerAllocator> Type;

  ChangeControlTypeRequest_()
    : control_type()  {
    }
  ChangeControlTypeRequest_(const ContainerAllocator& _alloc)
    : control_type(_alloc)  {
  (void)_alloc;
    }



   typedef  ::sr_robot_msgs::ControlType_<ContainerAllocator>  _control_type_type;
  _control_type_type control_type;





  typedef boost::shared_ptr< ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ChangeControlTypeRequest_

typedef ::sr_robot_msgs::ChangeControlTypeRequest_<std::allocator<void> > ChangeControlTypeRequest;

typedef boost::shared_ptr< ::sr_robot_msgs::ChangeControlTypeRequest > ChangeControlTypeRequestPtr;
typedef boost::shared_ptr< ::sr_robot_msgs::ChangeControlTypeRequest const> ChangeControlTypeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sr_robot_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/kinetic/share/shape_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/opt/ros/kinetic/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/kinetic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'sr_robot_msgs': ['/home/mamad/Graspit/src/shadow_dep/sr_common/sr_robot_msgs/msg', '/home/mamad/Graspit/devel/share/sr_robot_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "36741247c0d6032654e8e0ef56e7670f";
  }

  static const char* value(const ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x36741247c0d60326ULL;
  static const uint64_t static_value2 = 0x54e8e0ef56e7670fULL;
};

template<class ContainerAllocator>
struct DataType< ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sr_robot_msgs/ChangeControlTypeRequest";
  }

  static const char* value(const ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ControlType control_type\n\
\n\
================================================================================\n\
MSG: sr_robot_msgs/ControlType\n\
int16 control_type\n\
\n\
int16 PWM=0\n\
int16 FORCE=1\n\
\n\
#used to query which control type we're using. won't change the control type\n\
int16 QUERY=-1\n\
";
  }

  static const char* value(const ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.control_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChangeControlTypeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sr_robot_msgs::ChangeControlTypeRequest_<ContainerAllocator>& v)
  {
    s << indent << "control_type: ";
    s << std::endl;
    Printer< ::sr_robot_msgs::ControlType_<ContainerAllocator> >::stream(s, indent + "  ", v.control_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SR_ROBOT_MSGS_MESSAGE_CHANGECONTROLTYPEREQUEST_H
