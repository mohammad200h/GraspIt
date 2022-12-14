// Generated by gencpp from file sr_robot_msgs/GetSegmentedLine.msg
// DO NOT EDIT!


#ifndef SR_ROBOT_MSGS_MESSAGE_GETSEGMENTEDLINE_H
#define SR_ROBOT_MSGS_MESSAGE_GETSEGMENTEDLINE_H

#include <ros/service_traits.h>


#include <sr_robot_msgs/GetSegmentedLineRequest.h>
#include <sr_robot_msgs/GetSegmentedLineResponse.h>


namespace sr_robot_msgs
{

struct GetSegmentedLine
{

typedef GetSegmentedLineRequest Request;
typedef GetSegmentedLineResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetSegmentedLine
} // namespace sr_robot_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sr_robot_msgs::GetSegmentedLine > {
  static const char* value()
  {
    return "e52f6bd605c2394bdcc68a7000875e0c";
  }

  static const char* value(const ::sr_robot_msgs::GetSegmentedLine&) { return value(); }
};

template<>
struct DataType< ::sr_robot_msgs::GetSegmentedLine > {
  static const char* value()
  {
    return "sr_robot_msgs/GetSegmentedLine";
  }

  static const char* value(const ::sr_robot_msgs::GetSegmentedLine&) { return value(); }
};


// service_traits::MD5Sum< ::sr_robot_msgs::GetSegmentedLineRequest> should match 
// service_traits::MD5Sum< ::sr_robot_msgs::GetSegmentedLine > 
template<>
struct MD5Sum< ::sr_robot_msgs::GetSegmentedLineRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sr_robot_msgs::GetSegmentedLine >::value();
  }
  static const char* value(const ::sr_robot_msgs::GetSegmentedLineRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sr_robot_msgs::GetSegmentedLineRequest> should match 
// service_traits::DataType< ::sr_robot_msgs::GetSegmentedLine > 
template<>
struct DataType< ::sr_robot_msgs::GetSegmentedLineRequest>
{
  static const char* value()
  {
    return DataType< ::sr_robot_msgs::GetSegmentedLine >::value();
  }
  static const char* value(const ::sr_robot_msgs::GetSegmentedLineRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sr_robot_msgs::GetSegmentedLineResponse> should match 
// service_traits::MD5Sum< ::sr_robot_msgs::GetSegmentedLine > 
template<>
struct MD5Sum< ::sr_robot_msgs::GetSegmentedLineResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sr_robot_msgs::GetSegmentedLine >::value();
  }
  static const char* value(const ::sr_robot_msgs::GetSegmentedLineResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sr_robot_msgs::GetSegmentedLineResponse> should match 
// service_traits::DataType< ::sr_robot_msgs::GetSegmentedLine > 
template<>
struct DataType< ::sr_robot_msgs::GetSegmentedLineResponse>
{
  static const char* value()
  {
    return DataType< ::sr_robot_msgs::GetSegmentedLine >::value();
  }
  static const char* value(const ::sr_robot_msgs::GetSegmentedLineResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SR_ROBOT_MSGS_MESSAGE_GETSEGMENTEDLINE_H
