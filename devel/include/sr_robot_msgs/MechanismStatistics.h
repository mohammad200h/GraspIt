// Generated by gencpp from file sr_robot_msgs/MechanismStatistics.msg
// DO NOT EDIT!


#ifndef SR_ROBOT_MSGS_MESSAGE_MECHANISMSTATISTICS_H
#define SR_ROBOT_MSGS_MESSAGE_MECHANISMSTATISTICS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sr_robot_msgs/ActuatorStatistics.h>
#include <sr_robot_msgs/JointStatistics.h>
#include <sr_robot_msgs/ControllerStatistics.h>

namespace sr_robot_msgs
{
template <class ContainerAllocator>
struct MechanismStatistics_
{
  typedef MechanismStatistics_<ContainerAllocator> Type;

  MechanismStatistics_()
    : header()
    , actuator_statistics()
    , joint_statistics()
    , controller_statistics()  {
    }
  MechanismStatistics_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , actuator_statistics(_alloc)
    , joint_statistics(_alloc)
    , controller_statistics(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::sr_robot_msgs::ActuatorStatistics_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sr_robot_msgs::ActuatorStatistics_<ContainerAllocator> >::other >  _actuator_statistics_type;
  _actuator_statistics_type actuator_statistics;

   typedef std::vector< ::sr_robot_msgs::JointStatistics_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sr_robot_msgs::JointStatistics_<ContainerAllocator> >::other >  _joint_statistics_type;
  _joint_statistics_type joint_statistics;

   typedef std::vector< ::sr_robot_msgs::ControllerStatistics_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sr_robot_msgs::ControllerStatistics_<ContainerAllocator> >::other >  _controller_statistics_type;
  _controller_statistics_type controller_statistics;





  typedef boost::shared_ptr< ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> const> ConstPtr;

}; // struct MechanismStatistics_

typedef ::sr_robot_msgs::MechanismStatistics_<std::allocator<void> > MechanismStatistics;

typedef boost::shared_ptr< ::sr_robot_msgs::MechanismStatistics > MechanismStatisticsPtr;
typedef boost::shared_ptr< ::sr_robot_msgs::MechanismStatistics const> MechanismStatisticsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b4a99069393681672c01f8c823458e04";
  }

  static const char* value(const ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb4a9906939368167ULL;
  static const uint64_t static_value2 = 0x2c01f8c823458e04ULL;
};

template<class ContainerAllocator>
struct DataType< ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sr_robot_msgs/MechanismStatistics";
  }

  static const char* value(const ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message describes the state of the pr2 mechanism. It contains the state of\n\
# each actuator, each joint, and each controller that is spawned in pr2_mechanism_control.\n\
\n\
Header header\n\
ActuatorStatistics[] actuator_statistics\n\
JointStatistics[] joint_statistics\n\
ControllerStatistics[] controller_statistics\n\
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
MSG: sr_robot_msgs/ActuatorStatistics\n\
# This message contains the state of an actuator on the pr2 robot.\n\
# An actuator contains a motor and an encoder, and is connected\n\
# to a joint by a transmission\n\
\n\
# the name of the actuator\n\
string name\n\
\n\
# the sequence number of the MCB in the ethercat chain. \n\
# the first device in the chain gets deviced_id zero\n\
int32 device_id\n\
\n\
# the time at which this actuator state was measured\n\
time timestamp\n\
\n\
# the encoder position, represented by the number of encoder ticks\n\
int32 encoder_count\n\
\n\
# The angular offset (in radians) that is added to the encoder reading, \n\
# to get to the position of the actuator. This number is computed when the referece\n\
# sensor is triggered during the calibration phase\n\
float64 encoder_offset\n\
\n\
# the encoder position in radians\n\
float64 position\n\
\n\
# the encoder velocity in encoder ticks per second\n\
float64 encoder_velocity\n\
\n\
# the encoder velocity in radians per second\n\
float64 velocity\n\
\n\
# the value of the calibration reading: low (false) or high (true)\n\
bool calibration_reading\n\
\n\
# bool to indicate if the joint already triggered the rising/falling edge of the reference sensor\n\
bool calibration_rising_edge_valid\n\
bool calibration_falling_edge_valid\n\
\n\
# the encoder position when the last rising/falling edge was observed. \n\
# only read this value when the calibration_rising/falling_edge_valid is true\n\
float64 last_calibration_rising_edge\n\
float64 last_calibration_falling_edge\n\
\n\
# flag to indicate if this actuator is enabled or not. \n\
# An actuator can only be commanded when it is enabled.\n\
bool is_enabled\n\
\n\
# indicates if the motor is halted. A motor can be halted because of a voltage or communication problem\n\
bool halted\n\
\n\
# the last current/effort command that was requested\n\
float64 last_commanded_current\n\
float64 last_commanded_effort\n\
\n\
# the last current/effort command that was executed by the actuator\n\
float64 last_executed_current\n\
float64 last_executed_effort\n\
\n\
# the last current/effort that was measured by the actuator\n\
float64 last_measured_current\n\
float64 last_measured_effort\n\
\n\
# the motor voltate\n\
float64 motor_voltage\n\
\n\
# the number of detected encoder problems \n\
int32 num_encoder_errors\n\
\n\
\n\
================================================================================\n\
MSG: sr_robot_msgs/JointStatistics\n\
# This message contains the state of one joint of the pr2 robot.\n\
# This message is specificly designed for the pr2 robot. \n\
# A generic joint state message can be found in sensor_msgs::JointState\n\
\n\
# the name of the joint\n\
string name\n\
\n\
# the time at which these joint statistics were measured\n\
time timestamp\n\
\n\
# the position of the joint in radians\n\
float64 position\n\
\n\
# the velocity of the joint in radians per second\n\
float64 velocity\n\
\n\
# the measured joint effort \n\
float64 measured_effort\n\
\n\
# the effort that was commanded to the joint.\n\
# the actual applied effort might be different\n\
# because the safety code can limit the effort\n\
# a joint can apply\n\
float64 commanded_effort\n\
\n\
# a flag indicating if the joint is calibrated or not\n\
bool is_calibrated\n\
\n\
# a flag inidcating if the joint violated one of its position/velocity/effort limits\n\
# in the last publish cycle\n\
bool violated_limits\n\
\n\
# the total distance travelled by the joint, measured in radians.\n\
float64 odometer\n\
\n\
# the lowest position reached by the joint in the last publish cycle\n\
float64 min_position\n\
\n\
# the highest position reached by the joint in the last publish cycle\n\
float64 max_position\n\
\n\
# the maximum absolute velocity reached by the joint in the last publish cycle\n\
float64 max_abs_velocity\n\
\n\
# the maximum absolute effort applied by the joint in the last publish cycle\n\
float64 max_abs_effort\n\
\n\
================================================================================\n\
MSG: sr_robot_msgs/ControllerStatistics\n\
# This message contains the state of one realtime controller\n\
# that was spawned in pr2_mechanism_control\n\
\n\
# the name of the controller\n\
string name\n\
\n\
# the time at which these controller statistics were measured\n\
time timestamp\n\
\n\
# bool that indicates if the controller is currently\n\
# in a running or a stopped state\n\
bool running\n\
\n\
# the maximum time the update loop of the controller ever needed to complete\n\
duration max_time\n\
\n\
# the average time the update loop of the controller needs to complete. \n\
# the average is computed in a sliding time window.\n\
duration mean_time\n\
\n\
# the variance on the time the update loop of the controller needs to complete.\n\
# the variance applies to a sliding time window.\n\
duration variance_time\n\
\n\
# the number of times this controller broke the realtime loop\n\
int32 num_control_loop_overruns\n\
\n\
# the timestamp of the last time this controller broke the realtime loop\n\
time time_last_control_loop_overrun\n\
";
  }

  static const char* value(const ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.actuator_statistics);
      stream.next(m.joint_statistics);
      stream.next(m.controller_statistics);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MechanismStatistics_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sr_robot_msgs::MechanismStatistics_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "actuator_statistics[]" << std::endl;
    for (size_t i = 0; i < v.actuator_statistics.size(); ++i)
    {
      s << indent << "  actuator_statistics[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sr_robot_msgs::ActuatorStatistics_<ContainerAllocator> >::stream(s, indent + "    ", v.actuator_statistics[i]);
    }
    s << indent << "joint_statistics[]" << std::endl;
    for (size_t i = 0; i < v.joint_statistics.size(); ++i)
    {
      s << indent << "  joint_statistics[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sr_robot_msgs::JointStatistics_<ContainerAllocator> >::stream(s, indent + "    ", v.joint_statistics[i]);
    }
    s << indent << "controller_statistics[]" << std::endl;
    for (size_t i = 0; i < v.controller_statistics.size(); ++i)
    {
      s << indent << "  controller_statistics[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sr_robot_msgs::ControllerStatistics_<ContainerAllocator> >::stream(s, indent + "    ", v.controller_statistics[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SR_ROBOT_MSGS_MESSAGE_MECHANISMSTATISTICS_H
