// Generated by gencpp from file sr_robot_msgs/SetTeachMode.msg
// DO NOT EDIT!


#ifndef SR_ROBOT_MSGS_MESSAGE_SETTEACHMODE_H
#define SR_ROBOT_MSGS_MESSAGE_SETTEACHMODE_H

#include <ros/service_traits.h>


#include <sr_robot_msgs/SetTeachModeRequest.h>
#include <sr_robot_msgs/SetTeachModeResponse.h>


namespace sr_robot_msgs
{

struct SetTeachMode
{

typedef SetTeachModeRequest Request;
typedef SetTeachModeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetTeachMode
} // namespace sr_robot_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sr_robot_msgs::SetTeachMode > {
  static const char* value()
  {
    return "f1d4dfab21529bcec06249bcf0db7d58";
  }

  static const char* value(const ::sr_robot_msgs::SetTeachMode&) { return value(); }
};

template<>
struct DataType< ::sr_robot_msgs::SetTeachMode > {
  static const char* value()
  {
    return "sr_robot_msgs/SetTeachMode";
  }

  static const char* value(const ::sr_robot_msgs::SetTeachMode&) { return value(); }
};


// service_traits::MD5Sum< ::sr_robot_msgs::SetTeachModeRequest> should match 
// service_traits::MD5Sum< ::sr_robot_msgs::SetTeachMode > 
template<>
struct MD5Sum< ::sr_robot_msgs::SetTeachModeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sr_robot_msgs::SetTeachMode >::value();
  }
  static const char* value(const ::sr_robot_msgs::SetTeachModeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sr_robot_msgs::SetTeachModeRequest> should match 
// service_traits::DataType< ::sr_robot_msgs::SetTeachMode > 
template<>
struct DataType< ::sr_robot_msgs::SetTeachModeRequest>
{
  static const char* value()
  {
    return DataType< ::sr_robot_msgs::SetTeachMode >::value();
  }
  static const char* value(const ::sr_robot_msgs::SetTeachModeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sr_robot_msgs::SetTeachModeResponse> should match 
// service_traits::MD5Sum< ::sr_robot_msgs::SetTeachMode > 
template<>
struct MD5Sum< ::sr_robot_msgs::SetTeachModeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sr_robot_msgs::SetTeachMode >::value();
  }
  static const char* value(const ::sr_robot_msgs::SetTeachModeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sr_robot_msgs::SetTeachModeResponse> should match 
// service_traits::DataType< ::sr_robot_msgs::SetTeachMode > 
template<>
struct DataType< ::sr_robot_msgs::SetTeachModeResponse>
{
  static const char* value()
  {
    return DataType< ::sr_robot_msgs::SetTeachMode >::value();
  }
  static const char* value(const ::sr_robot_msgs::SetTeachModeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SR_ROBOT_MSGS_MESSAGE_SETTEACHMODE_H
