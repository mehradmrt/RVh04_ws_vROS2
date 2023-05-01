// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vehicle_msg:msg/VehicleInput.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__TRAITS_HPP_
#define VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__TRAITS_HPP_

#include "vehicle_msg/msg/detail/vehicle_input__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vehicle_msg::msg::VehicleInput>()
{
  return "vehicle_msg::msg::VehicleInput";
}

template<>
inline const char * name<vehicle_msg::msg::VehicleInput>()
{
  return "vehicle_msg/msg/VehicleInput";
}

template<>
struct has_fixed_size<vehicle_msg::msg::VehicleInput>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vehicle_msg::msg::VehicleInput>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vehicle_msg::msg::VehicleInput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__TRAITS_HPP_
