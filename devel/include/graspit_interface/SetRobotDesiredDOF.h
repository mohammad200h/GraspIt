// Generated by gencpp from file graspit_interface/SetRobotDesiredDOF.msg
// DO NOT EDIT!


#ifndef GRASPIT_INTERFACE_MESSAGE_SETROBOTDESIREDDOF_H
#define GRASPIT_INTERFACE_MESSAGE_SETROBOTDESIREDDOF_H

#include <ros/service_traits.h>


#include <graspit_interface/SetRobotDesiredDOFRequest.h>
#include <graspit_interface/SetRobotDesiredDOFResponse.h>


namespace graspit_interface
{

struct SetRobotDesiredDOF
{

typedef SetRobotDesiredDOFRequest Request;
typedef SetRobotDesiredDOFResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetRobotDesiredDOF
} // namespace graspit_interface


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::graspit_interface::SetRobotDesiredDOF > {
  static const char* value()
  {
    return "9c4727cc016ebb1f76651d8e34c53cc0";
  }

  static const char* value(const ::graspit_interface::SetRobotDesiredDOF&) { return value(); }
};

template<>
struct DataType< ::graspit_interface::SetRobotDesiredDOF > {
  static const char* value()
  {
    return "graspit_interface/SetRobotDesiredDOF";
  }

  static const char* value(const ::graspit_interface::SetRobotDesiredDOF&) { return value(); }
};


// service_traits::MD5Sum< ::graspit_interface::SetRobotDesiredDOFRequest> should match 
// service_traits::MD5Sum< ::graspit_interface::SetRobotDesiredDOF > 
template<>
struct MD5Sum< ::graspit_interface::SetRobotDesiredDOFRequest>
{
  static const char* value()
  {
    return MD5Sum< ::graspit_interface::SetRobotDesiredDOF >::value();
  }
  static const char* value(const ::graspit_interface::SetRobotDesiredDOFRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::graspit_interface::SetRobotDesiredDOFRequest> should match 
// service_traits::DataType< ::graspit_interface::SetRobotDesiredDOF > 
template<>
struct DataType< ::graspit_interface::SetRobotDesiredDOFRequest>
{
  static const char* value()
  {
    return DataType< ::graspit_interface::SetRobotDesiredDOF >::value();
  }
  static const char* value(const ::graspit_interface::SetRobotDesiredDOFRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::graspit_interface::SetRobotDesiredDOFResponse> should match 
// service_traits::MD5Sum< ::graspit_interface::SetRobotDesiredDOF > 
template<>
struct MD5Sum< ::graspit_interface::SetRobotDesiredDOFResponse>
{
  static const char* value()
  {
    return MD5Sum< ::graspit_interface::SetRobotDesiredDOF >::value();
  }
  static const char* value(const ::graspit_interface::SetRobotDesiredDOFResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::graspit_interface::SetRobotDesiredDOFResponse> should match 
// service_traits::DataType< ::graspit_interface::SetRobotDesiredDOF > 
template<>
struct DataType< ::graspit_interface::SetRobotDesiredDOFResponse>
{
  static const char* value()
  {
    return DataType< ::graspit_interface::SetRobotDesiredDOF >::value();
  }
  static const char* value(const ::graspit_interface::SetRobotDesiredDOFResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GRASPIT_INTERFACE_MESSAGE_SETROBOTDESIREDDOF_H
