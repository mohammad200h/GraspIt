// Generated by gencpp from file sr_robot_msgs/Biotac.msg
// DO NOT EDIT!


#ifndef SR_ROBOT_MSGS_MESSAGE_BIOTAC_H
#define SR_ROBOT_MSGS_MESSAGE_BIOTAC_H


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
struct Biotac_
{
  typedef Biotac_<ContainerAllocator> Type;

  Biotac_()
    : pac0(0)
    , pac1(0)
    , pdc(0)
    , tac(0)
    , tdc(0)
    , electrodes()  {
    }
  Biotac_(const ContainerAllocator& _alloc)
    : pac0(0)
    , pac1(0)
    , pdc(0)
    , tac(0)
    , tdc(0)
    , electrodes(_alloc)  {
  (void)_alloc;
    }



   typedef int16_t _pac0_type;
  _pac0_type pac0;

   typedef int16_t _pac1_type;
  _pac1_type pac1;

   typedef int16_t _pdc_type;
  _pdc_type pdc;

   typedef int16_t _tac_type;
  _tac_type tac;

   typedef int16_t _tdc_type;
  _tdc_type tdc;

   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _electrodes_type;
  _electrodes_type electrodes;





  typedef boost::shared_ptr< ::sr_robot_msgs::Biotac_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sr_robot_msgs::Biotac_<ContainerAllocator> const> ConstPtr;

}; // struct Biotac_

typedef ::sr_robot_msgs::Biotac_<std::allocator<void> > Biotac;

typedef boost::shared_ptr< ::sr_robot_msgs::Biotac > BiotacPtr;
typedef boost::shared_ptr< ::sr_robot_msgs::Biotac const> BiotacConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sr_robot_msgs::Biotac_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sr_robot_msgs::Biotac_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::sr_robot_msgs::Biotac_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sr_robot_msgs::Biotac_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::Biotac_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::Biotac_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::Biotac_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::Biotac_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sr_robot_msgs::Biotac_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8b5e6266fcf2902d0393e32e002093df";
  }

  static const char* value(const ::sr_robot_msgs::Biotac_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8b5e6266fcf2902dULL;
  static const uint64_t static_value2 = 0x0393e32e002093dfULL;
};

template<class ContainerAllocator>
struct DataType< ::sr_robot_msgs::Biotac_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sr_robot_msgs/Biotac";
  }

  static const char* value(const ::sr_robot_msgs::Biotac_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sr_robot_msgs::Biotac_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 pac0\n\
int16 pac1\n\
int16 pdc\n\
\n\
int16 tac\n\
int16 tdc\n\
\n\
int16[] electrodes\n\
";
  }

  static const char* value(const ::sr_robot_msgs::Biotac_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sr_robot_msgs::Biotac_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pac0);
      stream.next(m.pac1);
      stream.next(m.pdc);
      stream.next(m.tac);
      stream.next(m.tdc);
      stream.next(m.electrodes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Biotac_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sr_robot_msgs::Biotac_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sr_robot_msgs::Biotac_<ContainerAllocator>& v)
  {
    s << indent << "pac0: ";
    Printer<int16_t>::stream(s, indent + "  ", v.pac0);
    s << indent << "pac1: ";
    Printer<int16_t>::stream(s, indent + "  ", v.pac1);
    s << indent << "pdc: ";
    Printer<int16_t>::stream(s, indent + "  ", v.pdc);
    s << indent << "tac: ";
    Printer<int16_t>::stream(s, indent + "  ", v.tac);
    s << indent << "tdc: ";
    Printer<int16_t>::stream(s, indent + "  ", v.tdc);
    s << indent << "electrodes[]" << std::endl;
    for (size_t i = 0; i < v.electrodes.size(); ++i)
    {
      s << indent << "  electrodes[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.electrodes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SR_ROBOT_MSGS_MESSAGE_BIOTAC_H
