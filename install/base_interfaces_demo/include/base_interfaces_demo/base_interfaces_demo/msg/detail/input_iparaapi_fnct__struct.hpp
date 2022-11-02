// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/InputIPARAAPIFnct.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__INPUT_IPARAAPI_FNCT__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__INPUT_IPARAAPI_FNCT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__msg__InputIPARAAPIFnct __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__InputIPARAAPIFnct __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InputIPARAAPIFnct_
{
  using Type = InputIPARAAPIFnct_<ContainerAllocator>;

  explicit InputIPARAAPIFnct_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->change_gear_position = 0;
      this->accel_des = 0.0f;
      this->steering_angle = 0.0f;
      this->turn_signal = 0;
      this->emergency_break = 0;
      this->heartbeat_in = 0;
      this->startabfrage = 0;
    }
  }

  explicit InputIPARAAPIFnct_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->change_gear_position = 0;
      this->accel_des = 0.0f;
      this->steering_angle = 0.0f;
      this->turn_signal = 0;
      this->emergency_break = 0;
      this->heartbeat_in = 0;
      this->startabfrage = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _change_gear_position_type =
    uint8_t;
  _change_gear_position_type change_gear_position;
  using _accel_des_type =
    float;
  _accel_des_type accel_des;
  using _steering_angle_type =
    float;
  _steering_angle_type steering_angle;
  using _turn_signal_type =
    uint8_t;
  _turn_signal_type turn_signal;
  using _emergency_break_type =
    uint8_t;
  _emergency_break_type emergency_break;
  using _heartbeat_in_type =
    uint8_t;
  _heartbeat_in_type heartbeat_in;
  using _startabfrage_type =
    uint8_t;
  _startabfrage_type startabfrage;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__change_gear_position(
    const uint8_t & _arg)
  {
    this->change_gear_position = _arg;
    return *this;
  }
  Type & set__accel_des(
    const float & _arg)
  {
    this->accel_des = _arg;
    return *this;
  }
  Type & set__steering_angle(
    const float & _arg)
  {
    this->steering_angle = _arg;
    return *this;
  }
  Type & set__turn_signal(
    const uint8_t & _arg)
  {
    this->turn_signal = _arg;
    return *this;
  }
  Type & set__emergency_break(
    const uint8_t & _arg)
  {
    this->emergency_break = _arg;
    return *this;
  }
  Type & set__heartbeat_in(
    const uint8_t & _arg)
  {
    this->heartbeat_in = _arg;
    return *this;
  }
  Type & set__startabfrage(
    const uint8_t & _arg)
  {
    this->startabfrage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::InputIPARAAPIFnct_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::InputIPARAAPIFnct_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::InputIPARAAPIFnct_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::InputIPARAAPIFnct_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::InputIPARAAPIFnct_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::InputIPARAAPIFnct_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::InputIPARAAPIFnct_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::InputIPARAAPIFnct_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::InputIPARAAPIFnct_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::InputIPARAAPIFnct_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__InputIPARAAPIFnct
    std::shared_ptr<base_interfaces_demo::msg::InputIPARAAPIFnct_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__InputIPARAAPIFnct
    std::shared_ptr<base_interfaces_demo::msg::InputIPARAAPIFnct_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InputIPARAAPIFnct_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->change_gear_position != other.change_gear_position) {
      return false;
    }
    if (this->accel_des != other.accel_des) {
      return false;
    }
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    if (this->turn_signal != other.turn_signal) {
      return false;
    }
    if (this->emergency_break != other.emergency_break) {
      return false;
    }
    if (this->heartbeat_in != other.heartbeat_in) {
      return false;
    }
    if (this->startabfrage != other.startabfrage) {
      return false;
    }
    return true;
  }
  bool operator!=(const InputIPARAAPIFnct_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InputIPARAAPIFnct_

// alias to use template instance with default allocator
using InputIPARAAPIFnct =
  base_interfaces_demo::msg::InputIPARAAPIFnct_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__INPUT_IPARAAPI_FNCT__STRUCT_HPP_
