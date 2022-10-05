// Generated by gencpp from file grasp_planning_graspit_msgs/LoadDatabaseModelRequest.msg
// DO NOT EDIT!


#ifndef GRASP_PLANNING_GRASPIT_MSGS_MESSAGE_LOADDATABASEMODELREQUEST_H
#define GRASP_PLANNING_GRASPIT_MSGS_MESSAGE_LOADDATABASEMODELREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace grasp_planning_graspit_msgs
{
template <class ContainerAllocator>
struct LoadDatabaseModelRequest_
{
  typedef LoadDatabaseModelRequest_<ContainerAllocator> Type;

  LoadDatabaseModelRequest_()
    : model_id(0)
    , model_pose()
    , clear_other_models(false)  {
    }
  LoadDatabaseModelRequest_(const ContainerAllocator& _alloc)
    : model_id(0)
    , model_pose(_alloc)
    , clear_other_models(false)  {
  (void)_alloc;
    }



   typedef int32_t _model_id_type;
  _model_id_type model_id;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _model_pose_type;
  _model_pose_type model_pose;

   typedef uint8_t _clear_other_models_type;
  _clear_other_models_type clear_other_models;





  typedef boost::shared_ptr< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LoadDatabaseModelRequest_

typedef ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<std::allocator<void> > LoadDatabaseModelRequest;

typedef boost::shared_ptr< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest > LoadDatabaseModelRequestPtr;
typedef boost::shared_ptr< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest const> LoadDatabaseModelRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace grasp_planning_graspit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e0142126fa25500956c0574c8caa1798";
  }

  static const char* value(const ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe0142126fa255009ULL;
  static const uint64_t static_value2 = 0x56c0574c8caa1798ULL;
};

template<class ContainerAllocator>
struct DataType< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "grasp_planning_graspit_msgs/LoadDatabaseModelRequest";
  }

  static const char* value(const ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
\n\
int32 model_id\n\
\n\
\n\
geometry_msgs/Pose model_pose\n\
\n\
\n\
\n\
bool clear_other_models\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_id);
      stream.next(m.model_pose);
      stream.next(m.clear_other_models);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LoadDatabaseModelRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::grasp_planning_graspit_msgs::LoadDatabaseModelRequest_<ContainerAllocator>& v)
  {
    s << indent << "model_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.model_id);
    s << indent << "model_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.model_pose);
    s << indent << "clear_other_models: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clear_other_models);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRASP_PLANNING_GRASPIT_MSGS_MESSAGE_LOADDATABASEMODELREQUEST_H
