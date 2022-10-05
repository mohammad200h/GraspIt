// Generated by gencpp from file sr_edc_ethercat_drivers/MotorTraceSample.msg
// DO NOT EDIT!


#ifndef SR_EDC_ETHERCAT_DRIVERS_MESSAGE_MOTORTRACESAMPLE_H
#define SR_EDC_ETHERCAT_DRIVERS_MESSAGE_MOTORTRACESAMPLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sr_edc_ethercat_drivers
{
template <class ContainerAllocator>
struct MotorTraceSample_
{
  typedef MotorTraceSample_<ContainerAllocator> Type;

  MotorTraceSample_()
    : commanded_effort(0.0)
    , slow_effort_limit(0.0)
    , quick_effort_limit(0.0)
    , motor_current(0.0)
    , motor_supply_voltage(0.0)
    , hbridge_duty(0.0)
    , temperature(0.0)
    , force_sensor_1(0.0)
    , force_sensor_2(0.0)
    , force_sensor_3(0.0)
    , motor_velocity(0.0)
    , velocity(0.0)
    , position(0.0)  {
    }
  MotorTraceSample_(const ContainerAllocator& _alloc)
    : commanded_effort(0.0)
    , slow_effort_limit(0.0)
    , quick_effort_limit(0.0)
    , motor_current(0.0)
    , motor_supply_voltage(0.0)
    , hbridge_duty(0.0)
    , temperature(0.0)
    , force_sensor_1(0.0)
    , force_sensor_2(0.0)
    , force_sensor_3(0.0)
    , motor_velocity(0.0)
    , velocity(0.0)
    , position(0.0)  {
  (void)_alloc;
    }



   typedef double _commanded_effort_type;
  _commanded_effort_type commanded_effort;

   typedef double _slow_effort_limit_type;
  _slow_effort_limit_type slow_effort_limit;

   typedef double _quick_effort_limit_type;
  _quick_effort_limit_type quick_effort_limit;

   typedef double _motor_current_type;
  _motor_current_type motor_current;

   typedef double _motor_supply_voltage_type;
  _motor_supply_voltage_type motor_supply_voltage;

   typedef double _hbridge_duty_type;
  _hbridge_duty_type hbridge_duty;

   typedef double _temperature_type;
  _temperature_type temperature;

   typedef double _force_sensor_1_type;
  _force_sensor_1_type force_sensor_1;

   typedef double _force_sensor_2_type;
  _force_sensor_2_type force_sensor_2;

   typedef double _force_sensor_3_type;
  _force_sensor_3_type force_sensor_3;

   typedef double _motor_velocity_type;
  _motor_velocity_type motor_velocity;

   typedef double _velocity_type;
  _velocity_type velocity;

   typedef double _position_type;
  _position_type position;





  typedef boost::shared_ptr< ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> const> ConstPtr;

}; // struct MotorTraceSample_

typedef ::sr_edc_ethercat_drivers::MotorTraceSample_<std::allocator<void> > MotorTraceSample;

typedef boost::shared_ptr< ::sr_edc_ethercat_drivers::MotorTraceSample > MotorTraceSamplePtr;
typedef boost::shared_ptr< ::sr_edc_ethercat_drivers::MotorTraceSample const> MotorTraceSampleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sr_edc_ethercat_drivers

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sr_edc_ethercat_drivers': ['/home/mamad/Graspit/src/shadow_dep/shadow_robot_ethercat/sr_edc_ethercat_drivers/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f5faf420d7c29e68b1c6bfdff440ffb8";
  }

  static const char* value(const ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf5faf420d7c29e68ULL;
  static const uint64_t static_value2 = 0xb1c6bfdff440ffb8ULL;
};

template<class ContainerAllocator>
struct DataType< ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sr_edc_ethercat_drivers/MotorTraceSample";
  }

  static const char* value(const ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 commanded_effort\n\
float64 slow_effort_limit\n\
float64 quick_effort_limit\n\
float64 motor_current\n\
float64 motor_supply_voltage\n\
float64 hbridge_duty\n\
float64 temperature\n\
float64 force_sensor_1\n\
float64 force_sensor_2\n\
float64 force_sensor_3\n\
float64 motor_velocity\n\
float64 velocity\n\
float64 position\n\
";
  }

  static const char* value(const ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.commanded_effort);
      stream.next(m.slow_effort_limit);
      stream.next(m.quick_effort_limit);
      stream.next(m.motor_current);
      stream.next(m.motor_supply_voltage);
      stream.next(m.hbridge_duty);
      stream.next(m.temperature);
      stream.next(m.force_sensor_1);
      stream.next(m.force_sensor_2);
      stream.next(m.force_sensor_3);
      stream.next(m.motor_velocity);
      stream.next(m.velocity);
      stream.next(m.position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorTraceSample_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sr_edc_ethercat_drivers::MotorTraceSample_<ContainerAllocator>& v)
  {
    s << indent << "commanded_effort: ";
    Printer<double>::stream(s, indent + "  ", v.commanded_effort);
    s << indent << "slow_effort_limit: ";
    Printer<double>::stream(s, indent + "  ", v.slow_effort_limit);
    s << indent << "quick_effort_limit: ";
    Printer<double>::stream(s, indent + "  ", v.quick_effort_limit);
    s << indent << "motor_current: ";
    Printer<double>::stream(s, indent + "  ", v.motor_current);
    s << indent << "motor_supply_voltage: ";
    Printer<double>::stream(s, indent + "  ", v.motor_supply_voltage);
    s << indent << "hbridge_duty: ";
    Printer<double>::stream(s, indent + "  ", v.hbridge_duty);
    s << indent << "temperature: ";
    Printer<double>::stream(s, indent + "  ", v.temperature);
    s << indent << "force_sensor_1: ";
    Printer<double>::stream(s, indent + "  ", v.force_sensor_1);
    s << indent << "force_sensor_2: ";
    Printer<double>::stream(s, indent + "  ", v.force_sensor_2);
    s << indent << "force_sensor_3: ";
    Printer<double>::stream(s, indent + "  ", v.force_sensor_3);
    s << indent << "motor_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.motor_velocity);
    s << indent << "velocity: ";
    Printer<double>::stream(s, indent + "  ", v.velocity);
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SR_EDC_ETHERCAT_DRIVERS_MESSAGE_MOTORTRACESAMPLE_H