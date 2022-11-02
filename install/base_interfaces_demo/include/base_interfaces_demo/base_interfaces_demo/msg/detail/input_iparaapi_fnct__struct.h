// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/InputIPARAAPIFnct.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__INPUT_IPARAAPI_FNCT__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__INPUT_IPARAAPI_FNCT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/InputIPARAAPIFnct in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__InputIPARAAPIFnct
{
  std_msgs__msg__Header header;
  uint8_t change_gear_position;
  float accel_des;
  float steering_angle;
  uint8_t turn_signal;
  uint8_t emergency_break;
  uint8_t heartbeat_in;
  uint8_t startabfrage;
} base_interfaces_demo__msg__InputIPARAAPIFnct;

// Struct for a sequence of base_interfaces_demo__msg__InputIPARAAPIFnct.
typedef struct base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence
{
  base_interfaces_demo__msg__InputIPARAAPIFnct * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__INPUT_IPARAAPI_FNCT__STRUCT_H_
