// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces_demo:msg/InputIPARAAPIFnct.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__INPUT_IPARAAPI_FNCT__TRAITS_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__INPUT_IPARAAPI_FNCT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "base_interfaces_demo/msg/detail/input_iparaapi_fnct__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace base_interfaces_demo
{

namespace msg
{

inline void to_flow_style_yaml(
  const InputIPARAAPIFnct & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: change_gear_position
  {
    out << "change_gear_position: ";
    rosidl_generator_traits::value_to_yaml(msg.change_gear_position, out);
    out << ", ";
  }

  // member: accel_des
  {
    out << "accel_des: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_des, out);
    out << ", ";
  }

  // member: steering_angle
  {
    out << "steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle, out);
    out << ", ";
  }

  // member: turn_signal
  {
    out << "turn_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_signal, out);
    out << ", ";
  }

  // member: emergency_break
  {
    out << "emergency_break: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_break, out);
    out << ", ";
  }

  // member: heartbeat_in
  {
    out << "heartbeat_in: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_in, out);
    out << ", ";
  }

  // member: startabfrage
  {
    out << "startabfrage: ";
    rosidl_generator_traits::value_to_yaml(msg.startabfrage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InputIPARAAPIFnct & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: change_gear_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_gear_position: ";
    rosidl_generator_traits::value_to_yaml(msg.change_gear_position, out);
    out << "\n";
  }

  // member: accel_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_des: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_des, out);
    out << "\n";
  }

  // member: steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle, out);
    out << "\n";
  }

  // member: turn_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_signal, out);
    out << "\n";
  }

  // member: emergency_break
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_break: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_break, out);
    out << "\n";
  }

  // member: heartbeat_in
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_in: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_in, out);
    out << "\n";
  }

  // member: startabfrage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "startabfrage: ";
    rosidl_generator_traits::value_to_yaml(msg.startabfrage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InputIPARAAPIFnct & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace base_interfaces_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces_demo::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces_demo::msg::InputIPARAAPIFnct & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces_demo::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces_demo::msg::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces_demo::msg::InputIPARAAPIFnct & msg)
{
  return base_interfaces_demo::msg::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces_demo::msg::InputIPARAAPIFnct>()
{
  return "base_interfaces_demo::msg::InputIPARAAPIFnct";
}

template<>
inline const char * name<base_interfaces_demo::msg::InputIPARAAPIFnct>()
{
  return "base_interfaces_demo/msg/InputIPARAAPIFnct";
}

template<>
struct has_fixed_size<base_interfaces_demo::msg::InputIPARAAPIFnct>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<base_interfaces_demo::msg::InputIPARAAPIFnct>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<base_interfaces_demo::msg::InputIPARAAPIFnct>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__INPUT_IPARAAPI_FNCT__TRAITS_HPP_
