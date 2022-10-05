// Generated by gencpp from file sr_robot_msgs/PlanTrajectoryFromPrefixRequest.msg
// DO NOT EDIT!


#ifndef SR_ROBOT_MSGS_MESSAGE_PLANTRAJECTORYFROMPREFIXREQUEST_H
#define SR_ROBOT_MSGS_MESSAGE_PLANTRAJECTORYFROMPREFIXREQUEST_H


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
struct PlanTrajectoryFromPrefixRequest_
{
  typedef PlanTrajectoryFromPrefixRequest_<ContainerAllocator> Type;

  PlanTrajectoryFromPrefixRequest_()
    : prefix()  {
    }
  PlanTrajectoryFromPrefixRequest_(const ContainerAllocator& _alloc)
    : prefix(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _prefix_type;
  _prefix_type prefix;





  typedef boost::shared_ptr< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PlanTrajectoryFromPrefixRequest_

typedef ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<std::allocator<void> > PlanTrajectoryFromPrefixRequest;

typedef boost::shared_ptr< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest > PlanTrajectoryFromPrefixRequestPtr;
typedef boost::shared_ptr< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest const> PlanTrajectoryFromPrefixRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8a471f61d96890d8f43bc26d6b147ee7";
  }

  static const char* value(const ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8a471f61d96890d8ULL;
  static const uint64_t static_value2 = 0xf43bc26d6b147ee7ULL;
};

template<class ContainerAllocator>
struct DataType< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sr_robot_msgs/PlanTrajectoryFromPrefixRequest";
  }

  static const char* value(const ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string prefix\n\
\n\
";
  }

  static const char* value(const ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.prefix);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanTrajectoryFromPrefixRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sr_robot_msgs::PlanTrajectoryFromPrefixRequest_<ContainerAllocator>& v)
  {
    s << indent << "prefix: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.prefix);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SR_ROBOT_MSGS_MESSAGE_PLANTRAJECTORYFROMPREFIXREQUEST_H
