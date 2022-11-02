// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/OutputIPARAAPIFnct.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/output_iparaapi_fnct__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
base_interfaces_demo__msg__OutputIPARAAPIFnct__init(base_interfaces_demo__msg__OutputIPARAAPIFnct * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    base_interfaces_demo__msg__OutputIPARAAPIFnct__fini(msg);
    return false;
  }
  // driver_override_speed
  // fahrzeug_zustand
  // heartbeat_out
  // gear_change_possible
  // status_emergency_stop
  // fehlerzustand
  return true;
}

void
base_interfaces_demo__msg__OutputIPARAAPIFnct__fini(base_interfaces_demo__msg__OutputIPARAAPIFnct * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // driver_override_speed
  // fahrzeug_zustand
  // heartbeat_out
  // gear_change_possible
  // status_emergency_stop
  // fehlerzustand
}

bool
base_interfaces_demo__msg__OutputIPARAAPIFnct__are_equal(const base_interfaces_demo__msg__OutputIPARAAPIFnct * lhs, const base_interfaces_demo__msg__OutputIPARAAPIFnct * rhs)
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
  // driver_override_speed
  if (lhs->driver_override_speed != rhs->driver_override_speed) {
    return false;
  }
  // fahrzeug_zustand
  if (lhs->fahrzeug_zustand != rhs->fahrzeug_zustand) {
    return false;
  }
  // heartbeat_out
  if (lhs->heartbeat_out != rhs->heartbeat_out) {
    return false;
  }
  // gear_change_possible
  if (lhs->gear_change_possible != rhs->gear_change_possible) {
    return false;
  }
  // status_emergency_stop
  if (lhs->status_emergency_stop != rhs->status_emergency_stop) {
    return false;
  }
  // fehlerzustand
  if (lhs->fehlerzustand != rhs->fehlerzustand) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__OutputIPARAAPIFnct__copy(
  const base_interfaces_demo__msg__OutputIPARAAPIFnct * input,
  base_interfaces_demo__msg__OutputIPARAAPIFnct * output)
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
  // driver_override_speed
  output->driver_override_speed = input->driver_override_speed;
  // fahrzeug_zustand
  output->fahrzeug_zustand = input->fahrzeug_zustand;
  // heartbeat_out
  output->heartbeat_out = input->heartbeat_out;
  // gear_change_possible
  output->gear_change_possible = input->gear_change_possible;
  // status_emergency_stop
  output->status_emergency_stop = input->status_emergency_stop;
  // fehlerzustand
  output->fehlerzustand = input->fehlerzustand;
  return true;
}

base_interfaces_demo__msg__OutputIPARAAPIFnct *
base_interfaces_demo__msg__OutputIPARAAPIFnct__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__OutputIPARAAPIFnct * msg = (base_interfaces_demo__msg__OutputIPARAAPIFnct *)allocator.allocate(sizeof(base_interfaces_demo__msg__OutputIPARAAPIFnct), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__OutputIPARAAPIFnct));
  bool success = base_interfaces_demo__msg__OutputIPARAAPIFnct__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__OutputIPARAAPIFnct__destroy(base_interfaces_demo__msg__OutputIPARAAPIFnct * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__OutputIPARAAPIFnct__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence__init(base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__OutputIPARAAPIFnct * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__OutputIPARAAPIFnct *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__OutputIPARAAPIFnct), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__OutputIPARAAPIFnct__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__OutputIPARAAPIFnct__fini(&data[i - 1]);
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
base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence__fini(base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence * array)
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
      base_interfaces_demo__msg__OutputIPARAAPIFnct__fini(&array->data[i]);
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

base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence *
base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence * array = (base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence__destroy(base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence__are_equal(const base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence * lhs, const base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__OutputIPARAAPIFnct__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence__copy(
  const base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence * input,
  base_interfaces_demo__msg__OutputIPARAAPIFnct__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__OutputIPARAAPIFnct);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces_demo__msg__OutputIPARAAPIFnct * data =
      (base_interfaces_demo__msg__OutputIPARAAPIFnct *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__OutputIPARAAPIFnct__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__OutputIPARAAPIFnct__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces_demo__msg__OutputIPARAAPIFnct__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
