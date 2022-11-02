// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces_demo:msg/OutputIPARAAPIFnct.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__OUTPUT_IPARAAPI_FNCT__TRAITS_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__OUTPUT_IPARAAPI_FNCT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "base_interfaces_demo/msg/detail/output_iparaapi_fnct__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace base_interfaces_demo
{

namespace msg
{

inline void to_flow_style_yaml(
  const OutputIPARAAPIFnct & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: driver_override_speed
  {
    out << "driver_override_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_override_speed, out);
    out << ", ";
  }

  // member: fahrzeug_zustand
  {
    out << "fahrzeug_zustand: ";
    rosidl_generator_traits::value_to_yaml(msg.fahrzeug_zustand, out);
    out << ", ";
  }

  // member: heartbeat_out
  {
    out << "heartbeat_out: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_out, out);
    out << ", ";
  }

  // member: gear_change_possible
  {
    out << "gear_change_possible: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_change_possible, out);
    out << ", ";
  }

  // member: status_emergency_stop
  {
    out << "status_emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.status_emergency_stop, out);
    out << ", ";
  }

  // member: fehlerzustand
  {
    out << "fehlerzustand: ";
    rosidl_generator_traits::value_to_yaml(msg.fehlerzustand, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OutputIPARAAPIFnct & msg,
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

  // member: driver_override_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_override_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_override_speed, out);
    out << "\n";
  }

  // member: fahrzeug_zustand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fahrzeug_zustand: ";
    rosidl_generator_traits::value_to_yaml(msg.fahrzeug_zustand, out);
    out << "\n";
  }

  // member: heartbeat_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_out: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_out, out);
    out << "\n";
  }

  // member: gear_change_possible
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_change_possible: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_change_possible, out);
    out << "\n";
  }

  // member: status_emergency_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.status_emergency_stop, out);
    out << "\n";
  }

  // member: fehlerzustand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fehlerzustand: ";
    rosidl_generator_traits::value_to_yaml(msg.fehlerzustand, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OutputIPARAAPIFnct & msg, bool use_flow_style = false)
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
  const base_interfaces_demo::msg::OutputIPARAAPIFnct & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces_demo::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces_demo::msg::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces_demo::msg::OutputIPARAAPIFnct & msg)
{
  return base_interfaces_demo::msg::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces_demo::msg::OutputIPARAAPIFnct>()
{
  return "base_interfaces_demo::msg::OutputIPARAAPIFnct";
}

template<>
inline const char * name<base_interfaces_demo::msg::OutputIPARAAPIFnct>()
{
  return "base_interfaces_demo/msg/OutputIPARAAPIFnct";
}

template<>
struct has_fixed_size<base_interfaces_demo::msg::OutputIPARAAPIFnct>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<base_interfaces_demo::msg::OutputIPARAAPIFnct>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<base_interfaces_demo::msg::OutputIPARAAPIFnct>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__OUTPUT_IPARAAPI_FNCT__TRAITS_HPP_
