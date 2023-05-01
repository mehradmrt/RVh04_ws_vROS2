// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vehicle_msg:msg/VehicleInput.idl
// generated code does not contain a copyright notice
#include "vehicle_msg/msg/detail/vehicle_input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
vehicle_msg__msg__VehicleInput__init(vehicle_msg__msg__VehicleInput * msg)
{
  if (!msg) {
    return false;
  }
  // vref
  // steerangle
  return true;
}

void
vehicle_msg__msg__VehicleInput__fini(vehicle_msg__msg__VehicleInput * msg)
{
  if (!msg) {
    return;
  }
  // vref
  // steerangle
}

bool
vehicle_msg__msg__VehicleInput__are_equal(const vehicle_msg__msg__VehicleInput * lhs, const vehicle_msg__msg__VehicleInput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vref
  if (lhs->vref != rhs->vref) {
    return false;
  }
  // steerangle
  if (lhs->steerangle != rhs->steerangle) {
    return false;
  }
  return true;
}

bool
vehicle_msg__msg__VehicleInput__copy(
  const vehicle_msg__msg__VehicleInput * input,
  vehicle_msg__msg__VehicleInput * output)
{
  if (!input || !output) {
    return false;
  }
  // vref
  output->vref = input->vref;
  // steerangle
  output->steerangle = input->steerangle;
  return true;
}

vehicle_msg__msg__VehicleInput *
vehicle_msg__msg__VehicleInput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vehicle_msg__msg__VehicleInput * msg = (vehicle_msg__msg__VehicleInput *)allocator.allocate(sizeof(vehicle_msg__msg__VehicleInput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vehicle_msg__msg__VehicleInput));
  bool success = vehicle_msg__msg__VehicleInput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vehicle_msg__msg__VehicleInput__destroy(vehicle_msg__msg__VehicleInput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vehicle_msg__msg__VehicleInput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vehicle_msg__msg__VehicleInput__Sequence__init(vehicle_msg__msg__VehicleInput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vehicle_msg__msg__VehicleInput * data = NULL;

  if (size) {
    data = (vehicle_msg__msg__VehicleInput *)allocator.zero_allocate(size, sizeof(vehicle_msg__msg__VehicleInput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vehicle_msg__msg__VehicleInput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vehicle_msg__msg__VehicleInput__fini(&data[i - 1]);
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
vehicle_msg__msg__VehicleInput__Sequence__fini(vehicle_msg__msg__VehicleInput__Sequence * array)
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
      vehicle_msg__msg__VehicleInput__fini(&array->data[i]);
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

vehicle_msg__msg__VehicleInput__Sequence *
vehicle_msg__msg__VehicleInput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vehicle_msg__msg__VehicleInput__Sequence * array = (vehicle_msg__msg__VehicleInput__Sequence *)allocator.allocate(sizeof(vehicle_msg__msg__VehicleInput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vehicle_msg__msg__VehicleInput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vehicle_msg__msg__VehicleInput__Sequence__destroy(vehicle_msg__msg__VehicleInput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vehicle_msg__msg__VehicleInput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vehicle_msg__msg__VehicleInput__Sequence__are_equal(const vehicle_msg__msg__VehicleInput__Sequence * lhs, const vehicle_msg__msg__VehicleInput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vehicle_msg__msg__VehicleInput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vehicle_msg__msg__VehicleInput__Sequence__copy(
  const vehicle_msg__msg__VehicleInput__Sequence * input,
  vehicle_msg__msg__VehicleInput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vehicle_msg__msg__VehicleInput);
    vehicle_msg__msg__VehicleInput * data =
      (vehicle_msg__msg__VehicleInput *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vehicle_msg__msg__VehicleInput__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vehicle_msg__msg__VehicleInput__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vehicle_msg__msg__VehicleInput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
