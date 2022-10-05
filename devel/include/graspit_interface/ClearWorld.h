// Generated by gencpp from file graspit_interface/ClearWorld.msg
// DO NOT EDIT!


#ifndef GRASPIT_INTERFACE_MESSAGE_CLEARWORLD_H
#define GRASPIT_INTERFACE_MESSAGE_CLEARWORLD_H

#include <ros/service_traits.h>


#include <graspit_interface/ClearWorldRequest.h>
#include <graspit_interface/ClearWorldResponse.h>


namespace graspit_interface
{

struct ClearWorld
{

typedef ClearWorldRequest Request;
typedef ClearWorldResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ClearWorld
} // namespace graspit_interface


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::graspit_interface::ClearWorld > {
  static const char* value()
  {
    return "97cab54dd6dbe9e837f2d3a5a24e81f8";
  }

  static const char* value(const ::graspit_interface::ClearWorld&) { return value(); }
};

template<>
struct DataType< ::graspit_interface::ClearWorld > {
  static const char* value()
  {
    return "graspit_interface/ClearWorld";
  }

  static const char* value(const ::graspit_interface::ClearWorld&) { return value(); }
};


// service_traits::MD5Sum< ::graspit_interface::ClearWorldRequest> should match 
// service_traits::MD5Sum< ::graspit_interface::ClearWorld > 
template<>
struct MD5Sum< ::graspit_interface::ClearWorldRequest>
{
  static const char* value()
  {
    return MD5Sum< ::graspit_interface::ClearWorld >::value();
  }
  static const char* value(const ::graspit_interface::ClearWorldRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::graspit_interface::ClearWorldRequest> should match 
// service_traits::DataType< ::graspit_interface::ClearWorld > 
template<>
struct DataType< ::graspit_interface::ClearWorldRequest>
{
  static const char* value()
  {
    return DataType< ::graspit_interface::ClearWorld >::value();
  }
  static const char* value(const ::graspit_interface::ClearWorldRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::graspit_interface::ClearWorldResponse> should match 
// service_traits::MD5Sum< ::graspit_interface::ClearWorld > 
template<>
struct MD5Sum< ::graspit_interface::ClearWorldResponse>
{
  static const char* value()
  {
    return MD5Sum< ::graspit_interface::ClearWorld >::value();
  }
  static const char* value(const ::graspit_interface::ClearWorldResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::graspit_interface::ClearWorldResponse> should match 
// service_traits::DataType< ::graspit_interface::ClearWorld > 
template<>
struct DataType< ::graspit_interface::ClearWorldResponse>
{
  static const char* value()
  {
    return DataType< ::graspit_interface::ClearWorld >::value();
  }
  static const char* value(const ::graspit_interface::ClearWorldResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GRASPIT_INTERFACE_MESSAGE_CLEARWORLD_H