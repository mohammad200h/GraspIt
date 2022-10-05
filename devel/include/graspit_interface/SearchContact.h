// Generated by gencpp from file graspit_interface/SearchContact.msg
// DO NOT EDIT!


#ifndef GRASPIT_INTERFACE_MESSAGE_SEARCHCONTACT_H
#define GRASPIT_INTERFACE_MESSAGE_SEARCHCONTACT_H


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
struct SearchContact_
{
  typedef SearchContact_<ContainerAllocator> Type;

  SearchContact_()
    : type(0)  {
    }
  SearchContact_(const ContainerAllocator& _alloc)
    : type(0)  {
  (void)_alloc;
    }



   typedef uint8_t _type_type;
  _type_type type;



  enum {
    CONTACT_PRESET = 0u,
    CONTACT_LIVE = 1u,
  };


  typedef boost::shared_ptr< ::graspit_interface::SearchContact_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::graspit_interface::SearchContact_<ContainerAllocator> const> ConstPtr;

}; // struct SearchContact_

typedef ::graspit_interface::SearchContact_<std::allocator<void> > SearchContact;

typedef boost::shared_ptr< ::graspit_interface::SearchContact > SearchContactPtr;
typedef boost::shared_ptr< ::graspit_interface::SearchContact const> SearchContactConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::graspit_interface::SearchContact_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::graspit_interface::SearchContact_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::graspit_interface::SearchContact_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::graspit_interface::SearchContact_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::graspit_interface::SearchContact_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::graspit_interface::SearchContact_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::graspit_interface::SearchContact_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::graspit_interface::SearchContact_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::graspit_interface::SearchContact_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d1cef05e14e66e23bf62986bc999ef96";
  }

  static const char* value(const ::graspit_interface::SearchContact_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd1cef05e14e66e23ULL;
  static const uint64_t static_value2 = 0xbf62986bc999ef96ULL;
};

template<class ContainerAllocator>
struct DataType< ::graspit_interface::SearchContact_<ContainerAllocator> >
{
  static const char* value()
  {
    return "graspit_interface/SearchContact";
  }

  static const char* value(const ::graspit_interface::SearchContact_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::graspit_interface::SearchContact_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 CONTACT_PRESET    = 0\n\
uint8 CONTACT_LIVE      = 1\n\
\n\
uint8 type	\n\
";
  }

  static const char* value(const ::graspit_interface::SearchContact_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::graspit_interface::SearchContact_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SearchContact_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::graspit_interface::SearchContact_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::graspit_interface::SearchContact_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRASPIT_INTERFACE_MESSAGE_SEARCHCONTACT_H
