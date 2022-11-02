// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/InputIPARAAPIFnct.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__INPUT_IPARAAPI_FNCT__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__INPUT_IPARAAPI_FNCT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces_demo/msg/detail/input_iparaapi_fnct__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_InputIPARAAPIFnct_startabfrage
{
public:
  explicit Init_InputIPARAAPIFnct_startabfrage(::base_interfaces_demo::msg::InputIPARAAPIFnct & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::InputIPARAAPIFnct startabfrage(::base_interfaces_demo::msg::InputIPARAAPIFnct::_startabfrage_type arg)
  {
    msg_.startabfrage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::InputIPARAAPIFnct msg_;
};

class Init_InputIPARAAPIFnct_heartbeat_in
{
public:
  explicit Init_InputIPARAAPIFnct_heartbeat_in(::base_interfaces_demo::msg::InputIPARAAPIFnct & msg)
  : msg_(msg)
  {}
  Init_InputIPARAAPIFnct_startabfrage heartbeat_in(::base_interfaces_demo::msg::InputIPARAAPIFnct::_heartbeat_in_type arg)
  {
    msg_.heartbeat_in = std::move(arg);
    return Init_InputIPARAAPIFnct_startabfrage(msg_);
  }

private:
  ::base_interfaces_demo::msg::InputIPARAAPIFnct msg_;
};

class Init_InputIPARAAPIFnct_emergency_break
{
public:
  explicit Init_InputIPARAAPIFnct_emergency_break(::base_interfaces_demo::msg::InputIPARAAPIFnct & msg)
  : msg_(msg)
  {}
  Init_InputIPARAAPIFnct_heartbeat_in emergency_break(::base_interfaces_demo::msg::InputIPARAAPIFnct::_emergency_break_type arg)
  {
    msg_.emergency_break = std::move(arg);
    return Init_InputIPARAAPIFnct_heartbeat_in(msg_);
  }

private:
  ::base_interfaces_demo::msg::InputIPARAAPIFnct msg_;
};

class Init_InputIPARAAPIFnct_turn_signal
{
public:
  explicit Init_InputIPARAAPIFnct_turn_signal(::base_interfaces_demo::msg::InputIPARAAPIFnct & msg)
  : msg_(msg)
  {}
  Init_InputIPARAAPIFnct_emergency_break turn_signal(::base_interfaces_demo::msg::InputIPARAAPIFnct::_turn_signal_type arg)
  {
    msg_.turn_signal = std::move(arg);
    return Init_InputIPARAAPIFnct_emergency_break(msg_);
  }

private:
  ::base_interfaces_demo::msg::InputIPARAAPIFnct msg_;
};

class Init_InputIPARAAPIFnct_steering_angle
{
public:
  explicit Init_InputIPARAAPIFnct_steering_angle(::base_interfaces_demo::msg::InputIPARAAPIFnct & msg)
  : msg_(msg)
  {}
  Init_InputIPARAAPIFnct_turn_signal steering_angle(::base_interfaces_demo::msg::InputIPARAAPIFnct::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return Init_InputIPARAAPIFnct_turn_signal(msg_);
  }

private:
  ::base_interfaces_demo::msg::InputIPARAAPIFnct msg_;
};

class Init_InputIPARAAPIFnct_accel_des
{
public:
  explicit Init_InputIPARAAPIFnct_accel_des(::base_interfaces_demo::msg::InputIPARAAPIFnct & msg)
  : msg_(msg)
  {}
  Init_InputIPARAAPIFnct_steering_angle accel_des(::base_interfaces_demo::msg::InputIPARAAPIFnct::_accel_des_type arg)
  {
    msg_.accel_des = std::move(arg);
    return Init_InputIPARAAPIFnct_steering_angle(msg_);
  }

private:
  ::base_interfaces_demo::msg::InputIPARAAPIFnct msg_;
};

class Init_InputIPARAAPIFnct_change_gear_position
{
public:
  explicit Init_InputIPARAAPIFnct_change_gear_position(::base_interfaces_demo::msg::InputIPARAAPIFnct & msg)
  : msg_(msg)
  {}
  Init_InputIPARAAPIFnct_accel_des change_gear_position(::base_interfaces_demo::msg::InputIPARAAPIFnct::_change_gear_position_type arg)
  {
    msg_.change_gear_position = std::move(arg);
    return Init_InputIPARAAPIFnct_accel_des(msg_);
  }

private:
  ::base_interfaces_demo::msg::InputIPARAAPIFnct msg_;
};

class Init_InputIPARAAPIFnct_header
{
public:
  Init_InputIPARAAPIFnct_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InputIPARAAPIFnct_change_gear_position header(::base_interfaces_demo::msg::InputIPARAAPIFnct::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InputIPARAAPIFnct_change_gear_position(msg_);
  }

private:
  ::base_interfaces_demo::msg::InputIPARAAPIFnct msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::InputIPARAAPIFnct>()
{
  return base_interfaces_demo::msg::builder::Init_InputIPARAAPIFnct_header();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__INPUT_IPARAAPI_FNCT__BUILDER_HPP_
