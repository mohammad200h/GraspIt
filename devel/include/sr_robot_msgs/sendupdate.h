// Generated by gencpp from file sr_robot_msgs/sendupdate.msg
// DO NOT EDIT!


#ifndef SR_ROBOT_MSGS_MESSAGE_SENDUPDATE_H
#define SR_ROBOT_MSGS_MESSAGE_SENDUPDATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sr_robot_msgs/joint.h>

namespace sr_robot_msgs
{
template <class ContainerAllocator>
struct sendupdate_
{
  typedef sendupdate_<ContainerAllocator> Type;

  sendupdate_()
    : sendupdate_length(0)
    , sendupdate_list()  {
    }
  sendupdate_(const ContainerAllocator& _alloc)
    : sendupdate_length(0)
    , sendupdate_list(_alloc)  {
  (void)_alloc;
    }



   typedef int8_t _sendupdate_length_type;
  _sendupdate_length_type sendupdate_length;

   typedef std::vector< ::sr_robot_msgs::joint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sr_robot_msgs::joint_<ContainerAllocator> >::other >  _sendupdate_list_type;
  _sendupdate_list_type sendupdate_list;





  typedef boost::shared_ptr< ::sr_robot_msgs::sendupdate_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sr_robot_msgs::sendupdate_<ContainerAllocator> const> ConstPtr;

}; // struct sendupdate_

typedef ::sr_robot_msgs::sendupdate_<std::allocator<void> > sendupdate;

typedef boost::shared_ptr< ::sr_robot_msgs::sendupdate > sendupdatePtr;
typedef boost::shared_ptr< ::sr_robot_msgs::sendupdate const> sendupdateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sr_robot_msgs::sendupdate_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sr_robot_msgs::sendupdate_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sr_robot_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/kinetic/share/shape_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/opt/ros/kinetic/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/kinetic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'sr_robot_msgs': ['/home/mamad/Graspit/src/shadow_dep/sr_common/sr_robot_msgs/msg', '/home/mamad/Graspit/devel/share/sr_robot_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sr_robot_msgs::sendupdate_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sr_robot_msgs::sendupdate_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::sendupdate_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::sendupdate_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::sendupdate_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::sendupdate_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sr_robot_msgs::sendupdate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "43a45fe046127fe123dc7e38e3ffdc36";
  }

  static const char* value(const ::sr_robot_msgs::sendupdate_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x43a45fe046127fe1ULL;
  static const uint64_t static_value2 = 0x23dc7e38e3ffdc36ULL;
};

template<class ContainerAllocator>
struct DataType< ::sr_robot_msgs::sendupdate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sr_robot_msgs/sendupdate";
  }

  static const char* value(const ::sr_robot_msgs::sendupdate_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sr_robot_msgs::sendupdate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 sendupdate_length\n\
joint[] sendupdate_list\n\
\n\
\n\
================================================================================\n\
MSG: sr_robot_msgs/joint\n\
string  joint_name\n\
float64 joint_position\n\
float64 joint_target\n\
float64 joint_torque\n\
float64 joint_temperature\n\
float64 joint_current\n\
string  error_flag\n\
";
  }

  static const char* value(const ::sr_robot_msgs::sendupdate_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sr_robot_msgs::sendupdate_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sendupdate_length);
      stream.next(m.sendupdate_list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct sendupdate_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sr_robot_msgs::sendupdate_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sr_robot_msgs::sendupdate_<ContainerAllocator>& v)
  {
    s << indent << "sendupdate_length: ";
    Printer<int8_t>::stream(s, indent + "  ", v.sendupdate_length);
    s << indent << "sendupdate_list[]" << std::endl;
    for (size_t i = 0; i < v.sendupdate_list.size(); ++i)
    {
      s << indent << "  sendupdate_list[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sr_robot_msgs::joint_<ContainerAllocator> >::stream(s, indent + "    ", v.sendupdate_list[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SR_ROBOT_MSGS_MESSAGE_SENDUPDATE_H
