// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/OutputIPARAAPIFnct.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__OUTPUT_IPARAAPI_FNCT__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__OUTPUT_IPARAAPI_FNCT__STRUCT_H_

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

/// Struct defined in msg/OutputIPARAAPIFnct in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__OutputIPARAAPIFnct
{
  std_msgs__msg__Header header;
  uint8_t driver_override_speed;
  uint8_t fahrzeug_zustand;
  uint8_t heartbeat_out;
  uint8_t gear_change_possible;
  uint8_t status_emergency_stop;
  uint8_t fehlerzustand;
} base_interfaces_demo__msg__OutputIPARAAPIFnct;

// Struct for a sequence of base_interfaces_demo__msg__OutputIPARAAPIFnct.
typedef struct base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence
{
  base_interfaces_demo__msg__OutputIPARAAPIFnct * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__OUTPUT_IPARAAPI_FNCT__STRUCT_H_
