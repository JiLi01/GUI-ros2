// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:msg/OutputIPARAAPIFnct.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__OUTPUT_IPARAAPI_FNCT__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__OUTPUT_IPARAAPI_FNCT__STRUCT_HPP_

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
# define DEPRECATED__base_interfaces_demo__msg__OutputIPARAAPIFnct __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__msg__OutputIPARAAPIFnct __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OutputIPARAAPIFnct_
{
  using Type = OutputIPARAAPIFnct_<ContainerAllocator>;

  explicit OutputIPARAAPIFnct_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->driver_override_speed = 0;
      this->fahrzeug_zustand = 0;
      this->heartbeat_out = 0;
      this->gear_change_possible = 0;
      this->status_emergency_stop = 0;
      this->fehlerzustand = 0;
    }
  }

  explicit OutputIPARAAPIFnct_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->driver_override_speed = 0;
      this->fahrzeug_zustand = 0;
      this->heartbeat_out = 0;
      this->gear_change_possible = 0;
      this->status_emergency_stop = 0;
      this->fehlerzustand = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _driver_override_speed_type =
    uint8_t;
  _driver_override_speed_type driver_override_speed;
  using _fahrzeug_zustand_type =
    uint8_t;
  _fahrzeug_zustand_type fahrzeug_zustand;
  using _heartbeat_out_type =
    uint8_t;
  _heartbeat_out_type heartbeat_out;
  using _gear_change_possible_type =
    uint8_t;
  _gear_change_possible_type gear_change_possible;
  using _status_emergency_stop_type =
    uint8_t;
  _status_emergency_stop_type status_emergency_stop;
  using _fehlerzustand_type =
    uint8_t;
  _fehlerzustand_type fehlerzustand;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__driver_override_speed(
    const uint8_t & _arg)
  {
    this->driver_override_speed = _arg;
    return *this;
  }
  Type & set__fahrzeug_zustand(
    const uint8_t & _arg)
  {
    this->fahrzeug_zustand = _arg;
    return *this;
  }
  Type & set__heartbeat_out(
    const uint8_t & _arg)
  {
    this->heartbeat_out = _arg;
    return *this;
  }
  Type & set__gear_change_possible(
    const uint8_t & _arg)
  {
    this->gear_change_possible = _arg;
    return *this;
  }
  Type & set__status_emergency_stop(
    const uint8_t & _arg)
  {
    this->status_emergency_stop = _arg;
    return *this;
  }
  Type & set__fehlerzustand(
    const uint8_t & _arg)
  {
    this->fehlerzustand = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::msg::OutputIPARAAPIFnct_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::msg::OutputIPARAAPIFnct_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::OutputIPARAAPIFnct_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::msg::OutputIPARAAPIFnct_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::OutputIPARAAPIFnct_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::OutputIPARAAPIFnct_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::msg::OutputIPARAAPIFnct_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::msg::OutputIPARAAPIFnct_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::OutputIPARAAPIFnct_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::msg::OutputIPARAAPIFnct_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__msg__OutputIPARAAPIFnct
    std::shared_ptr<base_interfaces_demo::msg::OutputIPARAAPIFnct_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__msg__OutputIPARAAPIFnct
    std::shared_ptr<base_interfaces_demo::msg::OutputIPARAAPIFnct_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OutputIPARAAPIFnct_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->driver_override_speed != other.driver_override_speed) {
      return false;
    }
    if (this->fahrzeug_zustand != other.fahrzeug_zustand) {
      return false;
    }
    if (this->heartbeat_out != other.heartbeat_out) {
      return false;
    }
    if (this->gear_change_possible != other.gear_change_possible) {
      return false;
    }
    if (this->status_emergency_stop != other.status_emergency_stop) {
      return false;
    }
    if (this->fehlerzustand != other.fehlerzustand) {
      return false;
    }
    return true;
  }
  bool operator!=(const OutputIPARAAPIFnct_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OutputIPARAAPIFnct_

// alias to use template instance with default allocator
using OutputIPARAAPIFnct =
  base_interfaces_demo::msg::OutputIPARAAPIFnct_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__OUTPUT_IPARAAPI_FNCT__STRUCT_HPP_
