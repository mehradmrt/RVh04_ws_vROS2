// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vehicle_msg:msg/Vehiclepose.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_MSG__MSG__DETAIL__VEHICLEPOSE__TRAITS_HPP_
#define VEHICLE_MSG__MSG__DETAIL__VEHICLEPOSE__TRAITS_HPP_

#include "vehicle_msg/msg/detail/vehiclepose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vehicle_msg::msg::Vehiclepose>()
{
  return "vehicle_msg::msg::Vehiclepose";
}

template<>
inline const char * name<vehicle_msg::msg::Vehiclepose>()
{
  return "vehicle_msg/msg/Vehiclepose";
}

template<>
struct has_fixed_size<vehicle_msg::msg::Vehiclepose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vehicle_msg::msg::Vehiclepose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vehicle_msg::msg::Vehiclepose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VEHICLE_MSG__MSG__DETAIL__VEHICLEPOSE__TRAITS_HPP_
