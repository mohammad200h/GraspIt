// Generated by gencpp from file grasp_planning_graspit_msgs/AddToDatabaseResponse.msg
// DO NOT EDIT!


#ifndef GRASP_PLANNING_GRASPIT_MSGS_MESSAGE_ADDTODATABASERESPONSE_H
#define GRASP_PLANNING_GRASPIT_MSGS_MESSAGE_ADDTODATABASERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace grasp_planning_graspit_msgs
{
template <class ContainerAllocator>
struct AddToDatabaseResponse_
{
  typedef AddToDatabaseResponse_<ContainerAllocator> Type;

  AddToDatabaseResponse_()
    : returnCode(0)
    , modelID(0)  {
    }
  AddToDatabaseResponse_(const ContainerAllocator& _alloc)
    : returnCode(0)
    , modelID(0)  {
  (void)_alloc;
    }



   typedef int32_t _returnCode_type;
  _returnCode_type returnCode;

   typedef int32_t _modelID_type;
  _modelID_type modelID;



  enum {
    SUCCESS = 0,
    MODEL_EXISTS = 1,
    FILE_NOT_FOUND = 2,
    NOT_READY = 3,
    NO_NAME = 4,
    OTHER_ERROR = 5,
  };


  typedef boost::shared_ptr< ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AddToDatabaseResponse_

typedef ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<std::allocator<void> > AddToDatabaseResponse;

typedef boost::shared_ptr< ::grasp_planning_graspit_msgs::AddToDatabaseResponse > AddToDatabaseResponsePtr;
typedef boost::shared_ptr< ::grasp_planning_graspit_msgs::AddToDatabaseResponse const> AddToDatabaseResponseConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fce6766e0f7863d40768bb95aba1132d";
  }

  static const char* value(const ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfce6766e0f7863d4ULL;
  static const uint64_t static_value2 = 0x0768bb95aba1132dULL;
};

template<class ContainerAllocator>
struct DataType< ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "grasp_planning_graspit_msgs/AddToDatabaseResponse";
  }

  static const char* value(const ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
int32 returnCode\n\
\n\
\n\
\n\
int32 modelID\n\
\n\
\n\
\n\
\n\
\n\
int32 SUCCESS = 0\n\
\n\
\n\
int32 MODEL_EXISTS = 1\n\
\n\
\n\
int32 FILE_NOT_FOUND = 2\n\
\n\
\n\
int32 NOT_READY = 3\n\
\n\
\n\
int32 NO_NAME = 4\n\
\n\
\n\
int32 OTHER_ERROR = 5\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
";
  }

  static const char* value(const ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.returnCode);
      stream.next(m.modelID);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddToDatabaseResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::grasp_planning_graspit_msgs::AddToDatabaseResponse_<ContainerAllocator>& v)
  {
    s << indent << "returnCode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.returnCode);
    s << indent << "modelID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.modelID);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRASP_PLANNING_GRASPIT_MSGS_MESSAGE_ADDTODATABASERESPONSE_H
