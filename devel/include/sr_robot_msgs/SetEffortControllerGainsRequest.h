// Generated by gencpp from file sr_robot_msgs/SetEffortControllerGainsRequest.msg
// DO NOT EDIT!


#ifndef SR_ROBOT_MSGS_MESSAGE_SETEFFORTCONTROLLERGAINSREQUEST_H
#define SR_ROBOT_MSGS_MESSAGE_SETEFFORTCONTROLLERGAINSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sr_robot_msgs
{
template <class ContainerAllocator>
struct SetEffortControllerGainsRequest_
{
  typedef SetEffortControllerGainsRequest_<ContainerAllocator> Type;

  SetEffortControllerGainsRequest_()
    : max_force(0.0)
    , friction_deadband(0)  {
    }
  SetEffortControllerGainsRequest_(const ContainerAllocator& _alloc)
    : max_force(0.0)
    , friction_deadband(0)  {
  (void)_alloc;
    }



   typedef double _max_force_type;
  _max_force_type max_force;

   typedef int32_t _friction_deadband_type;
  _friction_deadband_type friction_deadband;





  typedef boost::shared_ptr< ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetEffortControllerGainsRequest_

typedef ::sr_robot_msgs::SetEffortControllerGainsRequest_<std::allocator<void> > SetEffortControllerGainsRequest;

typedef boost::shared_ptr< ::sr_robot_msgs::SetEffortControllerGainsRequest > SetEffortControllerGainsRequestPtr;
typedef boost::shared_ptr< ::sr_robot_msgs::SetEffortControllerGainsRequest const> SetEffortControllerGainsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "96397d148b84b1d0a8fe84ee1744fece";
  }

  static const char* value(const ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x96397d148b84b1d0ULL;
  static const uint64_t static_value2 = 0xa8fe84ee1744feceULL;
};

template<class ContainerAllocator>
struct DataType< ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sr_robot_msgs/SetEffortControllerGainsRequest";
  }

  static const char* value(const ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 max_force\n\
int32 friction_deadband\n\
";
  }

  static const char* value(const ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.max_force);
      stream.next(m.friction_deadband);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetEffortControllerGainsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sr_robot_msgs::SetEffortControllerGainsRequest_<ContainerAllocator>& v)
  {
    s << indent << "max_force: ";
    Printer<double>::stream(s, indent + "  ", v.max_force);
    s << indent << "friction_deadband: ";
    Printer<int32_t>::stream(s, indent + "  ", v.friction_deadband);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SR_ROBOT_MSGS_MESSAGE_SETEFFORTCONTROLLERGAINSREQUEST_H
