// Generated by gencpp from file graspit_interface/ApproachToContactRequest.msg
// DO NOT EDIT!


#ifndef GRASPIT_INTERFACE_MESSAGE_APPROACHTOCONTACTREQUEST_H
#define GRASPIT_INTERFACE_MESSAGE_APPROACHTOCONTACTREQUEST_H


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
struct ApproachToContactRequest_
{
  typedef ApproachToContactRequest_<ContainerAllocator> Type;

  ApproachToContactRequest_()
    : moveDist(0.0)
    , oneStep(false)
    , id(0)  {
    }
  ApproachToContactRequest_(const ContainerAllocator& _alloc)
    : moveDist(0.0)
    , oneStep(false)
    , id(0)  {
  (void)_alloc;
    }



   typedef double _moveDist_type;
  _moveDist_type moveDist;

   typedef uint8_t _oneStep_type;
  _oneStep_type oneStep;

   typedef uint32_t _id_type;
  _id_type id;





  typedef boost::shared_ptr< ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ApproachToContactRequest_

typedef ::graspit_interface::ApproachToContactRequest_<std::allocator<void> > ApproachToContactRequest;

typedef boost::shared_ptr< ::graspit_interface::ApproachToContactRequest > ApproachToContactRequestPtr;
typedef boost::shared_ptr< ::graspit_interface::ApproachToContactRequest const> ApproachToContactRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "437cb5a9806e882a589532f86b6d8e6c";
  }

  static const char* value(const ::graspit_interface::ApproachToContactRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x437cb5a9806e882aULL;
  static const uint64_t static_value2 = 0x589532f86b6d8e6cULL;
};

template<class ContainerAllocator>
struct DataType< ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "graspit_interface/ApproachToContactRequest";
  }

  static const char* value(const ::graspit_interface::ApproachToContactRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 moveDist\n\
bool oneStep\n\
uint32 id\n\
";
  }

  static const char* value(const ::graspit_interface::ApproachToContactRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.moveDist);
      stream.next(m.oneStep);
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ApproachToContactRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::graspit_interface::ApproachToContactRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::graspit_interface::ApproachToContactRequest_<ContainerAllocator>& v)
  {
    s << indent << "moveDist: ";
    Printer<double>::stream(s, indent + "  ", v.moveDist);
    s << indent << "oneStep: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.oneStep);
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRASPIT_INTERFACE_MESSAGE_APPROACHTOCONTACTREQUEST_H