// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vehicle_msg:msg/VehicleInput.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__STRUCT_H_
#define VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VehicleInput in the package vehicle_msg.
typedef struct vehicle_msg__msg__VehicleInput
{
  double vref;
  double steerangle;
} vehicle_msg__msg__VehicleInput;

// Struct for a sequence of vehicle_msg__msg__VehicleInput.
typedef struct vehicle_msg__msg__VehicleInput__Sequence
{
  vehicle_msg__msg__VehicleInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vehicle_msg__msg__VehicleInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__STRUCT_H_
