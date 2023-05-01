// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vehicle_msg:msg/VehicleInput.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vehicle_msg/msg/detail/vehicle_input__rosidl_typesupport_introspection_c.h"
#include "vehicle_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vehicle_msg/msg/detail/vehicle_input__functions.h"
#include "vehicle_msg/msg/detail/vehicle_input__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void VehicleInput__rosidl_typesupport_introspection_c__VehicleInput_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vehicle_msg__msg__VehicleInput__init(message_memory);
}

void VehicleInput__rosidl_typesupport_introspection_c__VehicleInput_fini_function(void * message_memory)
{
  vehicle_msg__msg__VehicleInput__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleInput__rosidl_typesupport_introspection_c__VehicleInput_message_member_array[2] = {
  {
    "vref",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vehicle_msg__msg__VehicleInput, vref),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steerangle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vehicle_msg__msg__VehicleInput, steerangle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleInput__rosidl_typesupport_introspection_c__VehicleInput_message_members = {
  "vehicle_msg__msg",  // message namespace
  "VehicleInput",  // message name
  2,  // number of fields
  sizeof(vehicle_msg__msg__VehicleInput),
  VehicleInput__rosidl_typesupport_introspection_c__VehicleInput_message_member_array,  // message members
  VehicleInput__rosidl_typesupport_introspection_c__VehicleInput_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleInput__rosidl_typesupport_introspection_c__VehicleInput_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleInput__rosidl_typesupport_introspection_c__VehicleInput_message_type_support_handle = {
  0,
  &VehicleInput__rosidl_typesupport_introspection_c__VehicleInput_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vehicle_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vehicle_msg, msg, VehicleInput)() {
  if (!VehicleInput__rosidl_typesupport_introspection_c__VehicleInput_message_type_support_handle.typesupport_identifier) {
    VehicleInput__rosidl_typesupport_introspection_c__VehicleInput_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleInput__rosidl_typesupport_introspection_c__VehicleInput_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
