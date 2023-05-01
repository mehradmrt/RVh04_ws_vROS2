// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vehicle_msg:msg/Vehiclepose.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_MSG__MSG__DETAIL__VEHICLEPOSE__FUNCTIONS_H_
#define VEHICLE_MSG__MSG__DETAIL__VEHICLEPOSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vehicle_msg/msg/rosidl_generator_c__visibility_control.h"

#include "vehicle_msg/msg/detail/vehiclepose__struct.h"

/// Initialize msg/Vehiclepose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vehicle_msg__msg__Vehiclepose
 * )) before or use
 * vehicle_msg__msg__Vehiclepose__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
bool
vehicle_msg__msg__Vehiclepose__init(vehicle_msg__msg__Vehiclepose * msg);

/// Finalize msg/Vehiclepose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
void
vehicle_msg__msg__Vehiclepose__fini(vehicle_msg__msg__Vehiclepose * msg);

/// Create msg/Vehiclepose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vehicle_msg__msg__Vehiclepose__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
vehicle_msg__msg__Vehiclepose *
vehicle_msg__msg__Vehiclepose__create();

/// Destroy msg/Vehiclepose message.
/**
 * It calls
 * vehicle_msg__msg__Vehiclepose__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
void
vehicle_msg__msg__Vehiclepose__destroy(vehicle_msg__msg__Vehiclepose * msg);

/// Check for msg/Vehiclepose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
bool
vehicle_msg__msg__Vehiclepose__are_equal(const vehicle_msg__msg__Vehiclepose * lhs, const vehicle_msg__msg__Vehiclepose * rhs);

/// Copy a msg/Vehiclepose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
bool
vehicle_msg__msg__Vehiclepose__copy(
  const vehicle_msg__msg__Vehiclepose * input,
  vehicle_msg__msg__Vehiclepose * output);

/// Initialize array of msg/Vehiclepose messages.
/**
 * It allocates the memory for the number of elements and calls
 * vehicle_msg__msg__Vehiclepose__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
bool
vehicle_msg__msg__Vehiclepose__Sequence__init(vehicle_msg__msg__Vehiclepose__Sequence * array, size_t size);

/// Finalize array of msg/Vehiclepose messages.
/**
 * It calls
 * vehicle_msg__msg__Vehiclepose__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
void
vehicle_msg__msg__Vehiclepose__Sequence__fini(vehicle_msg__msg__Vehiclepose__Sequence * array);

/// Create array of msg/Vehiclepose messages.
/**
 * It allocates the memory for the array and calls
 * vehicle_msg__msg__Vehiclepose__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
vehicle_msg__msg__Vehiclepose__Sequence *
vehicle_msg__msg__Vehiclepose__Sequence__create(size_t size);

/// Destroy array of msg/Vehiclepose messages.
/**
 * It calls
 * vehicle_msg__msg__Vehiclepose__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
void
vehicle_msg__msg__Vehiclepose__Sequence__destroy(vehicle_msg__msg__Vehiclepose__Sequence * array);

/// Check for msg/Vehiclepose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
bool
vehicle_msg__msg__Vehiclepose__Sequence__are_equal(const vehicle_msg__msg__Vehiclepose__Sequence * lhs, const vehicle_msg__msg__Vehiclepose__Sequence * rhs);

/// Copy an array of msg/Vehiclepose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
bool
vehicle_msg__msg__Vehiclepose__Sequence__copy(
  const vehicle_msg__msg__Vehiclepose__Sequence * input,
  vehicle_msg__msg__Vehiclepose__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VEHICLE_MSG__MSG__DETAIL__VEHICLEPOSE__FUNCTIONS_H_
