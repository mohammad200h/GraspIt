// Generated by gencpp from file gazebo_msgs/SetModelConfigurationRequest.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_SETMODELCONFIGURATIONREQUEST_H
#define GAZEBO_MSGS_MESSAGE_SETMODELCONFIGURATIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_msgs
{
template <class ContainerAllocator>
struct SetModelConfigurationRequest_
{
  typedef SetModelConfigurationRequest_<ContainerAllocator> Type;

  SetModelConfigurationRequest_()
    : model_name()
    , urdf_param_name()
    , joint_names()
    , joint_positions()  {
    }
  SetModelConfigurationRequest_(const ContainerAllocator& _alloc)
    : model_name(_alloc)
    , urdf_param_name(_alloc)
    , joint_names(_alloc)
    , joint_positions(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _model_name_type;
  _model_name_type model_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _urdf_param_name_type;
  _urdf_param_name_type urdf_param_name;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _joint_positions_type;
  _joint_positions_type joint_positions;





  typedef boost::shared_ptr< ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetModelConfigurationRequest_

typedef ::gazebo_msgs::SetModelConfigurationRequest_<std::allocator<void> > SetModelConfigurationRequest;

typedef boost::shared_ptr< ::gazebo_msgs::SetModelConfigurationRequest > SetModelConfigurationRequestPtr;
typedef boost::shared_ptr< ::gazebo_msgs::SetModelConfigurationRequest const> SetModelConfigurationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'gazebo_msgs': ['/home/mamad/Graspit/src/shadow_dep/gazebo_ros_pkgs/gazebo_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "160eae60f51fabff255480c70afa289f";
  }

  static const char* value(const ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x160eae60f51fabffULL;
  static const uint64_t static_value2 = 0x255480c70afa289fULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/SetModelConfigurationRequest";
  }

  static const char* value(const ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string model_name\n\
string urdf_param_name\n\
\n\
string[] joint_names\n\
float64[] joint_positions\n\
";
  }

  static const char* value(const ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_name);
      stream.next(m.urdf_param_name);
      stream.next(m.joint_names);
      stream.next(m.joint_positions);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetModelConfigurationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::SetModelConfigurationRequest_<ContainerAllocator>& v)
  {
    s << indent << "model_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.model_name);
    s << indent << "urdf_param_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.urdf_param_name);
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "joint_positions[]" << std::endl;
    for (size_t i = 0; i < v.joint_positions.size(); ++i)
    {
      s << indent << "  joint_positions[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.joint_positions[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_SETMODELCONFIGURATIONREQUEST_H
