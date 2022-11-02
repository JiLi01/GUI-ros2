// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/OutputIPARAAPIFnct.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__OUTPUT_IPARAAPI_FNCT__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__OUTPUT_IPARAAPI_FNCT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces_demo/msg/detail/output_iparaapi_fnct__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_OutputIPARAAPIFnct_fehlerzustand
{
public:
  explicit Init_OutputIPARAAPIFnct_fehlerzustand(::base_interfaces_demo::msg::OutputIPARAAPIFnct & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::OutputIPARAAPIFnct fehlerzustand(::base_interfaces_demo::msg::OutputIPARAAPIFnct::_fehlerzustand_type arg)
  {
    msg_.fehlerzustand = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::OutputIPARAAPIFnct msg_;
};

class Init_OutputIPARAAPIFnct_status_emergency_stop
{
public:
  explicit Init_OutputIPARAAPIFnct_status_emergency_stop(::base_interfaces_demo::msg::OutputIPARAAPIFnct & msg)
  : msg_(msg)
  {}
  Init_OutputIPARAAPIFnct_fehlerzustand status_emergency_stop(::base_interfaces_demo::msg::OutputIPARAAPIFnct::_status_emergency_stop_type arg)
  {
    msg_.status_emergency_stop = std::move(arg);
    return Init_OutputIPARAAPIFnct_fehlerzustand(msg_);
  }

private:
  ::base_interfaces_demo::msg::OutputIPARAAPIFnct msg_;
};

class Init_OutputIPARAAPIFnct_gear_change_possible
{
public:
  explicit Init_OutputIPARAAPIFnct_gear_change_possible(::base_interfaces_demo::msg::OutputIPARAAPIFnct & msg)
  : msg_(msg)
  {}
  Init_OutputIPARAAPIFnct_status_emergency_stop gear_change_possible(::base_interfaces_demo::msg::OutputIPARAAPIFnct::_gear_change_possible_type arg)
  {
    msg_.gear_change_possible = std::move(arg);
    return Init_OutputIPARAAPIFnct_status_emergency_stop(msg_);
  }

private:
  ::base_interfaces_demo::msg::OutputIPARAAPIFnct msg_;
};

class Init_OutputIPARAAPIFnct_heartbeat_out
{
public:
  explicit Init_OutputIPARAAPIFnct_heartbeat_out(::base_interfaces_demo::msg::OutputIPARAAPIFnct & msg)
  : msg_(msg)
  {}
  Init_OutputIPARAAPIFnct_gear_change_possible heartbeat_out(::base_interfaces_demo::msg::OutputIPARAAPIFnct::_heartbeat_out_type arg)
  {
    msg_.heartbeat_out = std::move(arg);
    return Init_OutputIPARAAPIFnct_gear_change_possible(msg_);
  }

private:
  ::base_interfaces_demo::msg::OutputIPARAAPIFnct msg_;
};

class Init_OutputIPARAAPIFnct_fahrzeug_zustand
{
public:
  explicit Init_OutputIPARAAPIFnct_fahrzeug_zustand(::base_interfaces_demo::msg::OutputIPARAAPIFnct & msg)
  : msg_(msg)
  {}
  Init_OutputIPARAAPIFnct_heartbeat_out fahrzeug_zustand(::base_interfaces_demo::msg::OutputIPARAAPIFnct::_fahrzeug_zustand_type arg)
  {
    msg_.fahrzeug_zustand = std::move(arg);
    return Init_OutputIPARAAPIFnct_heartbeat_out(msg_);
  }

private:
  ::base_interfaces_demo::msg::OutputIPARAAPIFnct msg_;
};

class Init_OutputIPARAAPIFnct_driver_override_speed
{
public:
  explicit Init_OutputIPARAAPIFnct_driver_override_speed(::base_interfaces_demo::msg::OutputIPARAAPIFnct & msg)
  : msg_(msg)
  {}
  Init_OutputIPARAAPIFnct_fahrzeug_zustand driver_override_speed(::base_interfaces_demo::msg::OutputIPARAAPIFnct::_driver_override_speed_type arg)
  {
    msg_.driver_override_speed = std::move(arg);
    return Init_OutputIPARAAPIFnct_fahrzeug_zustand(msg_);
  }

private:
  ::base_interfaces_demo::msg::OutputIPARAAPIFnct msg_;
};

class Init_OutputIPARAAPIFnct_header
{
public:
  Init_OutputIPARAAPIFnct_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OutputIPARAAPIFnct_driver_override_speed header(::base_interfaces_demo::msg::OutputIPARAAPIFnct::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OutputIPARAAPIFnct_driver_override_speed(msg_);
  }

private:
  ::base_interfaces_demo::msg::OutputIPARAAPIFnct msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::OutputIPARAAPIFnct>()
{
  return base_interfaces_demo::msg::builder::Init_OutputIPARAAPIFnct_header();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__OUTPUT_IPARAAPI_FNCT__BUILDER_HPP_
