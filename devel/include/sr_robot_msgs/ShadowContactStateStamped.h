// Generated by gencpp from file sr_robot_msgs/ShadowContactStateStamped.msg
// DO NOT EDIT!


#ifndef SR_ROBOT_MSGS_MESSAGE_SHADOWCONTACTSTATESTAMPED_H
#define SR_ROBOT_MSGS_MESSAGE_SHADOWCONTACTSTATESTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Vector3.h>

namespace sr_robot_msgs
{
template <class ContainerAllocator>
struct ShadowContactStateStamped_
{
  typedef ShadowContactStateStamped_<ContainerAllocator> Type;

  ShadowContactStateStamped_()
    : header()
    , tangential_force()
    , contact_position()
    , contact_normal()
    , Fnormal(0.0)
    , Ltorque(0.0)  {
    }
  ShadowContactStateStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tangential_force(_alloc)
    , contact_position(_alloc)
    , contact_normal(_alloc)
    , Fnormal(0.0)
    , Ltorque(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _tangential_force_type;
  _tangential_force_type tangential_force;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _contact_position_type;
  _contact_position_type contact_position;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _contact_normal_type;
  _contact_normal_type contact_normal;

   typedef double _Fnormal_type;
  _Fnormal_type Fnormal;

   typedef double _Ltorque_type;
  _Ltorque_type Ltorque;





  typedef boost::shared_ptr< ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> const> ConstPtr;

}; // struct ShadowContactStateStamped_

typedef ::sr_robot_msgs::ShadowContactStateStamped_<std::allocator<void> > ShadowContactStateStamped;

typedef boost::shared_ptr< ::sr_robot_msgs::ShadowContactStateStamped > ShadowContactStateStampedPtr;
typedef boost::shared_ptr< ::sr_robot_msgs::ShadowContactStateStamped const> ShadowContactStateStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sr_robot_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'shape_msgs': ['/opt/ros/kinetic/share/shape_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/opt/ros/kinetic/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/kinetic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'sr_robot_msgs': ['/home/mamad/Graspit/src/shadow_dep/sr_common/sr_robot_msgs/msg', '/home/mamad/Graspit/devel/share/sr_robot_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a0f0d461efe98dfada1d88584c069890";
  }

  static const char* value(const ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa0f0d461efe98dfaULL;
  static const uint64_t static_value2 = 0xda1d88584c069890ULL;
};

template<class ContainerAllocator>
struct DataType< ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sr_robot_msgs/ShadowContactStateStamped";
  }

  static const char* value(const ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# All 3D vectors are referenced in the fingertip core center\n\
\n\
Header header					# stamp\n\
geometry_msgs/Vector3 tangential_force  	# tangential force (local shear force)\n\
geometry_msgs/Point  contact_position		# contact position\n\
geometry_msgs/Vector3 contact_normal      	# contact normal\n\
float64 Fnormal					# amplitude of normal force (along normal)\n\
float64 Ltorque					# amplitude of local torque (around normal)\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tangential_force);
      stream.next(m.contact_position);
      stream.next(m.contact_normal);
      stream.next(m.Fnormal);
      stream.next(m.Ltorque);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ShadowContactStateStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sr_robot_msgs::ShadowContactStateStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tangential_force: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.tangential_force);
    s << indent << "contact_position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.contact_position);
    s << indent << "contact_normal: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.contact_normal);
    s << indent << "Fnormal: ";
    Printer<double>::stream(s, indent + "  ", v.Fnormal);
    s << indent << "Ltorque: ";
    Printer<double>::stream(s, indent + "  ", v.Ltorque);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SR_ROBOT_MSGS_MESSAGE_SHADOWCONTACTSTATESTAMPED_H
