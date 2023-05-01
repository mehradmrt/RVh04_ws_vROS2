// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vehicle_msg:msg/Vehiclepose.idl
// generated code does not contain a copyright notice
#include "vehicle_msg/msg/detail/vehiclepose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
vehicle_msg__msg__Vehiclepose__init(vehicle_msg__msg__Vehiclepose * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
vehicle_msg__msg__Vehiclepose__fini(vehicle_msg__msg__Vehiclepose * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
}

bool
vehicle_msg__msg__Vehiclepose__are_equal(const vehicle_msg__msg__Vehiclepose * lhs, const vehicle_msg__msg__Vehiclepose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
vehicle_msg__msg__Vehiclepose__copy(
  const vehicle_msg__msg__Vehiclepose * input,
  vehicle_msg__msg__Vehiclepose * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  return true;
}

vehicle_msg__msg__Vehiclepose *
vehicle_msg__msg__Vehiclepose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vehicle_msg__msg__Vehiclepose * msg = (vehicle_msg__msg__Vehiclepose *)allocator.allocate(sizeof(vehicle_msg__msg__Vehiclepose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vehicle_msg__msg__Vehiclepose));
  bool success = vehicle_msg__msg__Vehiclepose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vehicle_msg__msg__Vehiclepose__destroy(vehicle_msg__msg__Vehiclepose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vehicle_msg__msg__Vehiclepose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vehicle_msg__msg__Vehiclepose__Sequence__init(vehicle_msg__msg__Vehiclepose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vehicle_msg__msg__Vehiclepose * data = NULL;

  if (size) {
    data = (vehicle_msg__msg__Vehiclepose *)allocator.zero_allocate(size, sizeof(vehicle_msg__msg__Vehiclepose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vehicle_msg__msg__Vehiclepose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vehicle_msg__msg__Vehiclepose__fini(&data[i - 1]);
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
vehicle_msg__msg__Vehiclepose__Sequence__fini(vehicle_msg__msg__Vehiclepose__Sequence * array)
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
      vehicle_msg__msg__Vehiclepose__fini(&array->data[i]);
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

vehicle_msg__msg__Vehiclepose__Sequence *
vehicle_msg__msg__Vehiclepose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vehicle_msg__msg__Vehiclepose__Sequence * array = (vehicle_msg__msg__Vehiclepose__Sequence *)allocator.allocate(sizeof(vehicle_msg__msg__Vehiclepose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vehicle_msg__msg__Vehiclepose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vehicle_msg__msg__Vehiclepose__Sequence__destroy(vehicle_msg__msg__Vehiclepose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vehicle_msg__msg__Vehiclepose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vehicle_msg__msg__Vehiclepose__Sequence__are_equal(const vehicle_msg__msg__Vehiclepose__Sequence * lhs, const vehicle_msg__msg__Vehiclepose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vehicle_msg__msg__Vehiclepose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vehicle_msg__msg__Vehiclepose__Sequence__copy(
  const vehicle_msg__msg__Vehiclepose__Sequence * input,
  vehicle_msg__msg__Vehiclepose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vehicle_msg__msg__Vehiclepose);
    vehicle_msg__msg__Vehiclepose * data =
      (vehicle_msg__msg__Vehiclepose *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vehicle_msg__msg__Vehiclepose__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vehicle_msg__msg__Vehiclepose__fini(&data[i]);
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
    if (!vehicle_msg__msg__Vehiclepose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
