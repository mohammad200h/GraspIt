// Generated by gencpp from file graspit_interface/ForceRobotDOFRequest.msg
// DO NOT EDIT!


#ifndef GRASPIT_INTERFACE_MESSAGE_FORCEROBOTDOFREQUEST_H
#define GRASPIT_INTERFACE_MESSAGE_FORCEROBOTDOFREQUEST_H


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
struct ForceRobotDOFRequest_
{
  typedef ForceRobotDOFRequest_<ContainerAllocator> Type;

  ForceRobotDOFRequest_()
    : id(0)
    , dofs()  {
    }
  ForceRobotDOFRequest_(const ContainerAllocator& _alloc)
    : id(0)
    , dofs(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _id_type;
  _id_type id;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _dofs_type;
  _dofs_type dofs;





  typedef boost::shared_ptr< ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ForceRobotDOFRequest_

typedef ::graspit_interface::ForceRobotDOFRequest_<std::allocator<void> > ForceRobotDOFRequest;

typedef boost::shared_ptr< ::graspit_interface::ForceRobotDOFRequest > ForceRobotDOFRequestPtr;
typedef boost::shared_ptr< ::graspit_interface::ForceRobotDOFRequest const> ForceRobotDOFRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5e91b96fcf9e1846de157f193c2dfb0e";
  }

  static const char* value(const ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5e91b96fcf9e1846ULL;
  static const uint64_t static_value2 = 0xde157f193c2dfb0eULL;
};

template<class ContainerAllocator>
struct DataType< ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "graspit_interface/ForceRobotDOFRequest";
  }

  static const char* value(const ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 id\n\
float64[] dofs\n\
";
  }

  static const char* value(const ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.dofs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ForceRobotDOFRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::graspit_interface::ForceRobotDOFRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "dofs[]" << std::endl;
    for (size_t i = 0; i < v.dofs.size(); ++i)
    {
      s << indent << "  dofs[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.dofs[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRASPIT_INTERFACE_MESSAGE_FORCEROBOTDOFREQUEST_H