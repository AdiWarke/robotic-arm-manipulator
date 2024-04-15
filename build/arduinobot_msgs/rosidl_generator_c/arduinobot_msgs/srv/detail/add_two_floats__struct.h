// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arduinobot_msgs:srv/AddTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef ARDUINOBOT_MSGS__SRV__DETAIL__ADD_TWO_FLOATS__STRUCT_H_
#define ARDUINOBOT_MSGS__SRV__DETAIL__ADD_TWO_FLOATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoFloats in the package arduinobot_msgs.
typedef struct arduinobot_msgs__srv__AddTwoFloats_Request
{
  double a;
  double b;
} arduinobot_msgs__srv__AddTwoFloats_Request;

// Struct for a sequence of arduinobot_msgs__srv__AddTwoFloats_Request.
typedef struct arduinobot_msgs__srv__AddTwoFloats_Request__Sequence
{
  arduinobot_msgs__srv__AddTwoFloats_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduinobot_msgs__srv__AddTwoFloats_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddTwoFloats in the package arduinobot_msgs.
typedef struct arduinobot_msgs__srv__AddTwoFloats_Response
{
  double sum;
} arduinobot_msgs__srv__AddTwoFloats_Response;

// Struct for a sequence of arduinobot_msgs__srv__AddTwoFloats_Response.
typedef struct arduinobot_msgs__srv__AddTwoFloats_Response__Sequence
{
  arduinobot_msgs__srv__AddTwoFloats_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduinobot_msgs__srv__AddTwoFloats_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARDUINOBOT_MSGS__SRV__DETAIL__ADD_TWO_FLOATS__STRUCT_H_
