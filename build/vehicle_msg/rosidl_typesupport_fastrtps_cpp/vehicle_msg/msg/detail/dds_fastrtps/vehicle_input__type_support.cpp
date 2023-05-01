// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from vehicle_msg:msg/VehicleInput.idl
// generated code does not contain a copyright notice
#include "vehicle_msg/msg/detail/vehicle_input__rosidl_typesupport_fastrtps_cpp.hpp"
#include "vehicle_msg/msg/detail/vehicle_input__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace vehicle_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehicle_msg
cdr_serialize(
  const vehicle_msg::msg::VehicleInput & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vref
  cdr << ros_message.vref;
  // Member: steerangle
  cdr << ros_message.steerangle;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehicle_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vehicle_msg::msg::VehicleInput & ros_message)
{
  // Member: vref
  cdr >> ros_message.vref;

  // Member: steerangle
  cdr >> ros_message.steerangle;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehicle_msg
get_serialized_size(
  const vehicle_msg::msg::VehicleInput & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vref
  {
    size_t item_size = sizeof(ros_message.vref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steerangle
  {
    size_t item_size = sizeof(ros_message.steerangle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehicle_msg
max_serialized_size_VehicleInput(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: vref
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steerangle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleInput__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const vehicle_msg::msg::VehicleInput *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleInput__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<vehicle_msg::msg::VehicleInput *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleInput__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const vehicle_msg::msg::VehicleInput *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleInput__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleInput(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleInput__callbacks = {
  "vehicle_msg::msg",
  "VehicleInput",
  _VehicleInput__cdr_serialize,
  _VehicleInput__cdr_deserialize,
  _VehicleInput__get_serialized_size,
  _VehicleInput__max_serialized_size
};

static rosidl_message_type_support_t _VehicleInput__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleInput__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace vehicle_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_vehicle_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<vehicle_msg::msg::VehicleInput>()
{
  return &vehicle_msg::msg::typesupport_fastrtps_cpp::_VehicleInput__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vehicle_msg, msg, VehicleInput)() {
  return &vehicle_msg::msg::typesupport_fastrtps_cpp::_VehicleInput__handle;
}

#ifdef __cplusplus
}
#endif
