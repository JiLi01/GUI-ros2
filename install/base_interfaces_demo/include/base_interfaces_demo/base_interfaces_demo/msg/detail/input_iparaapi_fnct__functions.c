// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/InputIPARAAPIFnct.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/input_iparaapi_fnct__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
base_interfaces_demo__msg__InputIPARAAPIFnct__init(base_interfaces_demo__msg__InputIPARAAPIFnct * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    base_interfaces_demo__msg__InputIPARAAPIFnct__fini(msg);
    return false;
  }
  // change_gear_position
  // accel_des
  // steering_angle
  // turn_signal
  // emergency_break
  // heartbeat_in
  // startabfrage
  return true;
}

void
base_interfaces_demo__msg__InputIPARAAPIFnct__fini(base_interfaces_demo__msg__InputIPARAAPIFnct * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // change_gear_position
  // accel_des
  // steering_angle
  // turn_signal
  // emergency_break
  // heartbeat_in
  // startabfrage
}

bool
base_interfaces_demo__msg__InputIPARAAPIFnct__are_equal(const base_interfaces_demo__msg__InputIPARAAPIFnct * lhs, const base_interfaces_demo__msg__InputIPARAAPIFnct * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // change_gear_position
  if (lhs->change_gear_position != rhs->change_gear_position) {
    return false;
  }
  // accel_des
  if (lhs->accel_des != rhs->accel_des) {
    return false;
  }
  // steering_angle
  if (lhs->steering_angle != rhs->steering_angle) {
    return false;
  }
  // turn_signal
  if (lhs->turn_signal != rhs->turn_signal) {
    return false;
  }
  // emergency_break
  if (lhs->emergency_break != rhs->emergency_break) {
    return false;
  }
  // heartbeat_in
  if (lhs->heartbeat_in != rhs->heartbeat_in) {
    return false;
  }
  // startabfrage
  if (lhs->startabfrage != rhs->startabfrage) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__InputIPARAAPIFnct__copy(
  const base_interfaces_demo__msg__InputIPARAAPIFnct * input,
  base_interfaces_demo__msg__InputIPARAAPIFnct * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // change_gear_position
  output->change_gear_position = input->change_gear_position;
  // accel_des
  output->accel_des = input->accel_des;
  // steering_angle
  output->steering_angle = input->steering_angle;
  // turn_signal
  output->turn_signal = input->turn_signal;
  // emergency_break
  output->emergency_break = input->emergency_break;
  // heartbeat_in
  output->heartbeat_in = input->heartbeat_in;
  // startabfrage
  output->startabfrage = input->startabfrage;
  return true;
}

base_interfaces_demo__msg__InputIPARAAPIFnct *
base_interfaces_demo__msg__InputIPARAAPIFnct__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__InputIPARAAPIFnct * msg = (base_interfaces_demo__msg__InputIPARAAPIFnct *)allocator.allocate(sizeof(base_interfaces_demo__msg__InputIPARAAPIFnct), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__InputIPARAAPIFnct));
  bool success = base_interfaces_demo__msg__InputIPARAAPIFnct__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__InputIPARAAPIFnct__destroy(base_interfaces_demo__msg__InputIPARAAPIFnct * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__InputIPARAAPIFnct__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence__init(base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__InputIPARAAPIFnct * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__InputIPARAAPIFnct *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__InputIPARAAPIFnct), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__InputIPARAAPIFnct__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__InputIPARAAPIFnct__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence__fini(base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__msg__InputIPARAAPIFnct__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence *
base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence * array = (base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence__destroy(base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence__are_equal(const base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence * lhs, const base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__InputIPARAAPIFnct__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence__copy(
  const base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence * input,
  base_interfaces_demo__msg__InputIPARAAPIFnct__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__InputIPARAAPIFnct);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces_demo__msg__InputIPARAAPIFnct * data =
      (base_interfaces_demo__msg__InputIPARAAPIFnct *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__InputIPARAAPIFnct__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__InputIPARAAPIFnct__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces_demo__msg__InputIPARAAPIFnct__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
