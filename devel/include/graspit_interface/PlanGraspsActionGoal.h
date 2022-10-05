// Generated by gencpp from file graspit_interface/PlanGraspsActionGoal.msg
// DO NOT EDIT!


#ifndef GRASPIT_INTERFACE_MESSAGE_PLANGRASPSACTIONGOAL_H
#define GRASPIT_INTERFACE_MESSAGE_PLANGRASPSACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <graspit_interface/PlanGraspsGoal.h>

namespace graspit_interface
{
template <class ContainerAllocator>
struct PlanGraspsActionGoal_
{
  typedef PlanGraspsActionGoal_<ContainerAllocator> Type;

  PlanGraspsActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  PlanGraspsActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::graspit_interface::PlanGraspsGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct PlanGraspsActionGoal_

typedef ::graspit_interface::PlanGraspsActionGoal_<std::allocator<void> > PlanGraspsActionGoal;

typedef boost::shared_ptr< ::graspit_interface::PlanGraspsActionGoal > PlanGraspsActionGoalPtr;
typedef boost::shared_ptr< ::graspit_interface::PlanGraspsActionGoal const> PlanGraspsActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace graspit_interface

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'graspit_interface': ['/home/mamad/Graspit/src/graspit_interface/msg', '/home/mamad/Graspit/devel/share/graspit_interface/msg'], 'actionlib': ['/opt/ros/kinetic/share/actionlib/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b10b6a88ddea4a4579b092e6c787f844";
  }

  static const char* value(const ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb10b6a88ddea4a45ULL;
  static const uint64_t static_value2 = 0x79b092e6c787f844ULL;
};

template<class ContainerAllocator>
struct DataType< ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "graspit_interface/PlanGraspsActionGoal";
  }

  static const char* value(const ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
PlanGraspsGoal goal\n\
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
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: graspit_interface/PlanGraspsGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Goal\n\
int32 graspable_body_id\n\
\n\
Planner planner\n\
string search_energy\n\
SearchSpace search_space\n\
SearchContact search_contact\n\
SimAnnParams sim_ann_params\n\
\n\
int32 max_steps\n\
int32 feedback_num_steps\n\
\n\
================================================================================\n\
MSG: graspit_interface/Planner\n\
uint8 SIM_ANN                      = 0\n\
uint8 MULTI_THREADED               = 1\n\
\n\
uint8 type\n\
================================================================================\n\
MSG: graspit_interface/SearchSpace\n\
uint8 SPACE_AXIS_ANGLE    = 0\n\
uint8 SPACE_COMPLETE      = 1\n\
uint8 SPACE_ELLIPSOID     = 2\n\
uint8 SPACE_APPROACH      = 3\n\
\n\
uint8 type\n\
================================================================================\n\
MSG: graspit_interface/SearchContact\n\
uint8 CONTACT_PRESET    = 0\n\
uint8 CONTACT_LIVE      = 1\n\
\n\
uint8 type	\n\
================================================================================\n\
MSG: graspit_interface/SimAnnParams\n\
\n\
# flag to switch to custom params defined in this message. If not set, GraspIt's default settings are kept\n\
bool set_custom_params\n\
\n\
\n\
# //Annealing parameters\n\
# //! Annealing constant for neighbor generation schedule\n\
float64 YC	 	#	GraspIt! default: 7.0\n\
# //! Annealing constant for error acceptance schedule\n\
float64 HC	 	#	GraspIt! default: 7.0\n\
# //! Number of dimensions for neighbor generation schedule\n\
float64 YDIMS	#	GraspIt! default: 8.0\n\
# //! Number of dimensions for error acceptance schedule\n\
float64 HDIMS	#	GraspIt! default: 8.0\n\
# //! Adjust factor for neighbor generation schedule\n\
float64 NBR_ADJ	#	GraspIt! default: 1.0\n\
# //! Adjust raw errors reported by states to be in the relevant range of the annealing schedule\n\
float64 ERR_ADJ	#	GraspIt! default: 1.0e-6\n\
# //! Starting temperatue\n\
float64 DEF_T0	#	GraspIt! default: 1e6\n\
# //! Starting step\n\
float64 DEF_K0	#	GraspIt! default: 30000\n\
";
  }

  static const char* value(const ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanGraspsActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::graspit_interface::PlanGraspsActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::graspit_interface::PlanGraspsGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRASPIT_INTERFACE_MESSAGE_PLANGRASPSACTIONGOAL_H
