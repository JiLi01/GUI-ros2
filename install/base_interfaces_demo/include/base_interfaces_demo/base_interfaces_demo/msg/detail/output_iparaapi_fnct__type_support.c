// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from base_interfaces_demo:msg/OutputIPARAAPIFnct.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "base_interfaces_demo/msg/detail/output_iparaapi_fnct__rosidl_typesupport_introspection_c.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "base_interfaces_demo/msg/detail/output_iparaapi_fnct__functions.h"
#include "base_interfaces_demo/msg/detail/output_iparaapi_fnct__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void base_interfaces_demo__msg__OutputIPARAAPIFnct__rosidl_typesupport_introspection_c__OutputIPARAAPIFnct_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__msg__OutputIPARAAPIFnct__init(message_memory);
}

void base_interfaces_demo__msg__OutputIPARAAPIFnct__rosidl_typesupport_introspection_c__OutputIPARAAPIFnct_fini_function(void * message_memory)
{
  base_interfaces_demo__msg__OutputIPARAAPIFnct__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember base_interfaces_demo__msg__OutputIPARAAPIFnct__rosidl_typesupport_introspection_c__OutputIPARAAPIFnct_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__OutputIPARAAPIFnct, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "driver_override_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__OutputIPARAAPIFnct, driver_override_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fahrzeug_zustand",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__OutputIPARAAPIFnct, fahrzeug_zustand),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heartbeat_out",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__OutputIPARAAPIFnct, heartbeat_out),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gear_change_possible",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__OutputIPARAAPIFnct, gear_change_possible),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_emergency_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__OutputIPARAAPIFnct, status_emergency_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fehlerzustand",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__msg__OutputIPARAAPIFnct, fehlerzustand),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers base_interfaces_demo__msg__OutputIPARAAPIFnct__rosidl_typesupport_introspection_c__OutputIPARAAPIFnct_message_members = {
  "base_interfaces_demo__msg",  // message namespace
  "OutputIPARAAPIFnct",  // message name
  7,  // number of fields
  sizeof(base_interfaces_demo__msg__OutputIPARAAPIFnct),
  base_interfaces_demo__msg__OutputIPARAAPIFnct__rosidl_typesupport_introspection_c__OutputIPARAAPIFnct_message_member_array,  // message members
  base_interfaces_demo__msg__OutputIPARAAPIFnct__rosidl_typesupport_introspection_c__OutputIPARAAPIFnct_init_function,  // function to initialize message memory (memory has to be allocated)
  base_interfaces_demo__msg__OutputIPARAAPIFnct__rosidl_typesupport_introspection_c__OutputIPARAAPIFnct_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t base_interfaces_demo__msg__OutputIPARAAPIFnct__rosidl_typesupport_introspection_c__OutputIPARAAPIFnct_message_type_support_handle = {
  0,
  &base_interfaces_demo__msg__OutputIPARAAPIFnct__rosidl_typesupport_introspection_c__OutputIPARAAPIFnct_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, msg, OutputIPARAAPIFnct)() {
  base_interfaces_demo__msg__OutputIPARAAPIFnct__rosidl_typesupport_introspection_c__OutputIPARAAPIFnct_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!base_interfaces_demo__msg__OutputIPARAAPIFnct__rosidl_typesupport_introspection_c__OutputIPARAAPIFnct_message_type_support_handle.typesupport_identifier) {
    base_interfaces_demo__msg__OutputIPARAAPIFnct__rosidl_typesupport_introspection_c__OutputIPARAAPIFnct_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &base_interfaces_demo__msg__OutputIPARAAPIFnct__rosidl_typesupport_introspection_c__OutputIPARAAPIFnct_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
