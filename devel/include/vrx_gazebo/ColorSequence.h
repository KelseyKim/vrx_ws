// Generated by gencpp from file vrx_gazebo/ColorSequence.msg
// DO NOT EDIT!


#ifndef VRX_GAZEBO_MESSAGE_COLORSEQUENCE_H
#define VRX_GAZEBO_MESSAGE_COLORSEQUENCE_H

#include <ros/service_traits.h>


#include <vrx_gazebo/ColorSequenceRequest.h>
#include <vrx_gazebo/ColorSequenceResponse.h>


namespace vrx_gazebo
{

struct ColorSequence
{

typedef ColorSequenceRequest Request;
typedef ColorSequenceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ColorSequence
} // namespace vrx_gazebo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrx_gazebo::ColorSequence > {
  static const char* value()
  {
    return "3969b5fd7ff15f6de27340edae0cd056";
  }

  static const char* value(const ::vrx_gazebo::ColorSequence&) { return value(); }
};

template<>
struct DataType< ::vrx_gazebo::ColorSequence > {
  static const char* value()
  {
    return "vrx_gazebo/ColorSequence";
  }

  static const char* value(const ::vrx_gazebo::ColorSequence&) { return value(); }
};


// service_traits::MD5Sum< ::vrx_gazebo::ColorSequenceRequest> should match
// service_traits::MD5Sum< ::vrx_gazebo::ColorSequence >
template<>
struct MD5Sum< ::vrx_gazebo::ColorSequenceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrx_gazebo::ColorSequence >::value();
  }
  static const char* value(const ::vrx_gazebo::ColorSequenceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrx_gazebo::ColorSequenceRequest> should match
// service_traits::DataType< ::vrx_gazebo::ColorSequence >
template<>
struct DataType< ::vrx_gazebo::ColorSequenceRequest>
{
  static const char* value()
  {
    return DataType< ::vrx_gazebo::ColorSequence >::value();
  }
  static const char* value(const ::vrx_gazebo::ColorSequenceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrx_gazebo::ColorSequenceResponse> should match
// service_traits::MD5Sum< ::vrx_gazebo::ColorSequence >
template<>
struct MD5Sum< ::vrx_gazebo::ColorSequenceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrx_gazebo::ColorSequence >::value();
  }
  static const char* value(const ::vrx_gazebo::ColorSequenceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrx_gazebo::ColorSequenceResponse> should match
// service_traits::DataType< ::vrx_gazebo::ColorSequence >
template<>
struct DataType< ::vrx_gazebo::ColorSequenceResponse>
{
  static const char* value()
  {
    return DataType< ::vrx_gazebo::ColorSequence >::value();
  }
  static const char* value(const ::vrx_gazebo::ColorSequenceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VRX_GAZEBO_MESSAGE_COLORSEQUENCE_H