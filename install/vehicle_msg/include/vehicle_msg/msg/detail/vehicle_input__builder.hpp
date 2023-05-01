// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vehicle_msg:msg/VehicleInput.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__BUILDER_HPP_
#define VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__BUILDER_HPP_

#include "vehicle_msg/msg/detail/vehicle_input__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vehicle_msg
{

namespace msg
{

namespace builder
{

class Init_VehicleInput_steerangle
{
public:
  explicit Init_VehicleInput_steerangle(::vehicle_msg::msg::VehicleInput & msg)
  : msg_(msg)
  {}
  ::vehicle_msg::msg::VehicleInput steerangle(::vehicle_msg::msg::VehicleInput::_steerangle_type arg)
  {
    msg_.steerangle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vehicle_msg::msg::VehicleInput msg_;
};

class Init_VehicleInput_vref
{
public:
  Init_VehicleInput_vref()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleInput_steerangle vref(::vehicle_msg::msg::VehicleInput::_vref_type arg)
  {
    msg_.vref = std::move(arg);
    return Init_VehicleInput_steerangle(msg_);
  }

private:
  ::vehicle_msg::msg::VehicleInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vehicle_msg::msg::VehicleInput>()
{
  return vehicle_msg::msg::builder::Init_VehicleInput_vref();
}

}  // namespace vehicle_msg

#endif  // VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__BUILDER_HPP_
