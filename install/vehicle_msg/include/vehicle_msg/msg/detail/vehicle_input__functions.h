// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vehicle_msg:msg/VehicleInput.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__FUNCTIONS_H_
#define VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vehicle_msg/msg/rosidl_generator_c__visibility_control.h"

#include "vehicle_msg/msg/detail/vehicle_input__struct.h"

/// Initialize msg/VehicleInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vehicle_msg__msg__VehicleInput
 * )) before or use
 * vehicle_msg__msg__VehicleInput__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
bool
vehicle_msg__msg__VehicleInput__init(vehicle_msg__msg__VehicleInput * msg);

/// Finalize msg/VehicleInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
void
vehicle_msg__msg__VehicleInput__fini(vehicle_msg__msg__VehicleInput * msg);

/// Create msg/VehicleInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vehicle_msg__msg__VehicleInput__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
vehicle_msg__msg__VehicleInput *
vehicle_msg__msg__VehicleInput__create();

/// Destroy msg/VehicleInput message.
/**
 * It calls
 * vehicle_msg__msg__VehicleInput__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
void
vehicle_msg__msg__VehicleInput__destroy(vehicle_msg__msg__VehicleInput * msg);

/// Check for msg/VehicleInput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
bool
vehicle_msg__msg__VehicleInput__are_equal(const vehicle_msg__msg__VehicleInput * lhs, const vehicle_msg__msg__VehicleInput * rhs);

/// Copy a msg/VehicleInput message.
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
vehicle_msg__msg__VehicleInput__copy(
  const vehicle_msg__msg__VehicleInput * input,
  vehicle_msg__msg__VehicleInput * output);

/// Initialize array of msg/VehicleInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * vehicle_msg__msg__VehicleInput__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
bool
vehicle_msg__msg__VehicleInput__Sequence__init(vehicle_msg__msg__VehicleInput__Sequence * array, size_t size);

/// Finalize array of msg/VehicleInput messages.
/**
 * It calls
 * vehicle_msg__msg__VehicleInput__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
void
vehicle_msg__msg__VehicleInput__Sequence__fini(vehicle_msg__msg__VehicleInput__Sequence * array);

/// Create array of msg/VehicleInput messages.
/**
 * It allocates the memory for the array and calls
 * vehicle_msg__msg__VehicleInput__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
vehicle_msg__msg__VehicleInput__Sequence *
vehicle_msg__msg__VehicleInput__Sequence__create(size_t size);

/// Destroy array of msg/VehicleInput messages.
/**
 * It calls
 * vehicle_msg__msg__VehicleInput__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
void
vehicle_msg__msg__VehicleInput__Sequence__destroy(vehicle_msg__msg__VehicleInput__Sequence * array);

/// Check for msg/VehicleInput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_msg
bool
vehicle_msg__msg__VehicleInput__Sequence__are_equal(const vehicle_msg__msg__VehicleInput__Sequence * lhs, const vehicle_msg__msg__VehicleInput__Sequence * rhs);

/// Copy an array of msg/VehicleInput messages.
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
vehicle_msg__msg__VehicleInput__Sequence__copy(
  const vehicle_msg__msg__VehicleInput__Sequence * input,
  vehicle_msg__msg__VehicleInput__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__FUNCTIONS_H_
