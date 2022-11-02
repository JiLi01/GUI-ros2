// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_interfaces_demo:msg/OutputIPARAAPIFnct.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/output_iparaapi_fnct__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces_demo/msg/detail/output_iparaapi_fnct__struct.h"
#include "base_interfaces_demo/msg/detail/output_iparaapi_fnct__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces_demo
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces_demo
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_interfaces_demo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _OutputIPARAAPIFnct__ros_msg_type = base_interfaces_demo__msg__OutputIPARAAPIFnct;

static bool _OutputIPARAAPIFnct__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OutputIPARAAPIFnct__ros_msg_type * ros_message = static_cast<const _OutputIPARAAPIFnct__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: driver_override_speed
  {
    cdr << ros_message->driver_override_speed;
  }

  // Field name: fahrzeug_zustand
  {
    cdr << ros_message->fahrzeug_zustand;
  }

  // Field name: heartbeat_out
  {
    cdr << ros_message->heartbeat_out;
  }

  // Field name: gear_change_possible
  {
    cdr << ros_message->gear_change_possible;
  }

  // Field name: status_emergency_stop
  {
    cdr << ros_message->status_emergency_stop;
  }

  // Field name: fehlerzustand
  {
    cdr << ros_message->fehlerzustand;
  }

  return true;
}

static bool _OutputIPARAAPIFnct__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OutputIPARAAPIFnct__ros_msg_type * ros_message = static_cast<_OutputIPARAAPIFnct__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: driver_override_speed
  {
    cdr >> ros_message->driver_override_speed;
  }

  // Field name: fahrzeug_zustand
  {
    cdr >> ros_message->fahrzeug_zustand;
  }

  // Field name: heartbeat_out
  {
    cdr >> ros_message->heartbeat_out;
  }

  // Field name: gear_change_possible
  {
    cdr >> ros_message->gear_change_possible;
  }

  // Field name: status_emergency_stop
  {
    cdr >> ros_message->status_emergency_stop;
  }

  // Field name: fehlerzustand
  {
    cdr >> ros_message->fehlerzustand;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t get_serialized_size_base_interfaces_demo__msg__OutputIPARAAPIFnct(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OutputIPARAAPIFnct__ros_msg_type * ros_message = static_cast<const _OutputIPARAAPIFnct__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name driver_override_speed
  {
    size_t item_size = sizeof(ros_message->driver_override_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fahrzeug_zustand
  {
    size_t item_size = sizeof(ros_message->fahrzeug_zustand);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_out
  {
    size_t item_size = sizeof(ros_message->heartbeat_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_change_possible
  {
    size_t item_size = sizeof(ros_message->gear_change_possible);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_emergency_stop
  {
    size_t item_size = sizeof(ros_message->status_emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fehlerzustand
  {
    size_t item_size = sizeof(ros_message->fehlerzustand);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OutputIPARAAPIFnct__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces_demo__msg__OutputIPARAAPIFnct(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t max_serialized_size_base_interfaces_demo__msg__OutputIPARAAPIFnct(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: driver_override_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fahrzeug_zustand
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_out
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_change_possible
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_emergency_stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fehlerzustand
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _OutputIPARAAPIFnct__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_base_interfaces_demo__msg__OutputIPARAAPIFnct(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OutputIPARAAPIFnct = {
  "base_interfaces_demo::msg",
  "OutputIPARAAPIFnct",
  _OutputIPARAAPIFnct__cdr_serialize,
  _OutputIPARAAPIFnct__cdr_deserialize,
  _OutputIPARAAPIFnct__get_serialized_size,
  _OutputIPARAAPIFnct__max_serialized_size
};

static rosidl_message_type_support_t _OutputIPARAAPIFnct__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OutputIPARAAPIFnct,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, msg, OutputIPARAAPIFnct)() {
  return &_OutputIPARAAPIFnct__type_support;
}

#if defined(__cplusplus)
}
#endif
