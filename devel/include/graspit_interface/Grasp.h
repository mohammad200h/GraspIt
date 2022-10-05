// Generated by gencpp from file graspit_interface/Grasp.msg
// DO NOT EDIT!


#ifndef GRASPIT_INTERFACE_MESSAGE_GRASP_H
#define GRASPIT_INTERFACE_MESSAGE_GRASP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Vector3Stamped.h>

namespace graspit_interface
{
template <class ContainerAllocator>
struct Grasp_
{
  typedef Grasp_<ContainerAllocator> Type;

  Grasp_()
    : graspable_body_id(0)
    , pose()
    , dofs()
    , epsilon_quality(0.0)
    , volume_quality(0.0)
    , approach_direction()  {
    }
  Grasp_(const ContainerAllocator& _alloc)
    : graspable_body_id(0)
    , pose(_alloc)
    , dofs(_alloc)
    , epsilon_quality(0.0)
    , volume_quality(0.0)
    , approach_direction(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _graspable_body_id_type;
  _graspable_body_id_type graspable_body_id;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _dofs_type;
  _dofs_type dofs;

   typedef double _epsilon_quality_type;
  _epsilon_quality_type epsilon_quality;

   typedef double _volume_quality_type;
  _volume_quality_type volume_quality;

   typedef  ::geometry_msgs::Vector3Stamped_<ContainerAllocator>  _approach_direction_type;
  _approach_direction_type approach_direction;





  typedef boost::shared_ptr< ::graspit_interface::Grasp_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::graspit_interface::Grasp_<ContainerAllocator> const> ConstPtr;

}; // struct Grasp_

typedef ::graspit_interface::Grasp_<std::allocator<void> > Grasp;

typedef boost::shared_ptr< ::graspit_interface::Grasp > GraspPtr;
typedef boost::shared_ptr< ::graspit_interface::Grasp const> GraspConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::graspit_interface::Grasp_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::graspit_interface::Grasp_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace graspit_interface

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'graspit_interface': ['/home/mamad/Graspit/src/graspit_interface/msg', '/home/mamad/Graspit/devel/share/graspit_interface/msg'], 'actionlib': ['/opt/ros/kinetic/share/actionlib/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::graspit_interface::Grasp_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::graspit_interface::Grasp_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::graspit_interface::Grasp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::graspit_interface::Grasp_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::graspit_interface::Grasp_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::graspit_interface::Grasp_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::graspit_interface::Grasp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dd74168be3b3320990979febf7f5265d";
  }

  static const char* value(const ::graspit_interface::Grasp_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdd74168be3b33209ULL;
  static const uint64_t static_value2 = 0x90979febf7f5265dULL;
};

template<class ContainerAllocator>
struct DataType< ::graspit_interface::Grasp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "graspit_interface/Grasp";
  }

  static const char* value(const ::graspit_interface::Grasp_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::graspit_interface::Grasp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# id for the body the grasp was planned on.\n\
int32 graspable_body_id\n\
\n\
# pose of the hand with respect to the object \n\
# the grasp was planned on\n\
geometry_msgs/Pose pose\n\
\n\
float64[] dofs\n\
\n\
float64 epsilon_quality\n\
float64 volume_quality\n\
\n\
\n\
# The approach direction to take before picking an object\n\
geometry_msgs/Vector3Stamped approach_direction\n\
\n\
\n\
\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3Stamped\n\
# This represents a Vector3 with reference coordinate frame and timestamp\n\
Header header\n\
Vector3 vector\n\
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
";
  }

  static const char* value(const ::graspit_interface::Grasp_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::graspit_interface::Grasp_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.graspable_body_id);
      stream.next(m.pose);
      stream.next(m.dofs);
      stream.next(m.epsilon_quality);
      stream.next(m.volume_quality);
      stream.next(m.approach_direction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Grasp_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::graspit_interface::Grasp_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::graspit_interface::Grasp_<ContainerAllocator>& v)
  {
    s << indent << "graspable_body_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.graspable_body_id);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "dofs[]" << std::endl;
    for (size_t i = 0; i < v.dofs.size(); ++i)
    {
      s << indent << "  dofs[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.dofs[i]);
    }
    s << indent << "epsilon_quality: ";
    Printer<double>::stream(s, indent + "  ", v.epsilon_quality);
    s << indent << "volume_quality: ";
    Printer<double>::stream(s, indent + "  ", v.volume_quality);
    s << indent << "approach_direction: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> >::stream(s, indent + "  ", v.approach_direction);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRASPIT_INTERFACE_MESSAGE_GRASP_H
