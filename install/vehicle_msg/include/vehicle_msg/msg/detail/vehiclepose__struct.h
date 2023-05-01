// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vehicle_msg:msg/Vehiclepose.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_MSG__MSG__DETAIL__VEHICLEPOSE__STRUCT_H_
#define VEHICLE_MSG__MSG__DETAIL__VEHICLEPOSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Vehiclepose in the package vehicle_msg.
typedef struct vehicle_msg__msg__Vehiclepose
{
  double x;
  double y;
  double theta;
} vehicle_msg__msg__Vehiclepose;

// Struct for a sequence of vehicle_msg__msg__Vehiclepose.
typedef struct vehicle_msg__msg__Vehiclepose__Sequence
{
  vehicle_msg__msg__Vehiclepose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vehicle_msg__msg__Vehiclepose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VEHICLE_MSG__MSG__DETAIL__VEHICLEPOSE__STRUCT_H_
