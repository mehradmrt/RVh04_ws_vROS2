// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vehicle_msg:msg/Vehiclepose.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_MSG__MSG__DETAIL__VEHICLEPOSE__BUILDER_HPP_
#define VEHICLE_MSG__MSG__DETAIL__VEHICLEPOSE__BUILDER_HPP_

#include "vehicle_msg/msg/detail/vehiclepose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vehicle_msg
{

namespace msg
{

namespace builder
{

class Init_Vehiclepose_theta
{
public:
  explicit Init_Vehiclepose_theta(::vehicle_msg::msg::Vehiclepose & msg)
  : msg_(msg)
  {}
  ::vehicle_msg::msg::Vehiclepose theta(::vehicle_msg::msg::Vehiclepose::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vehicle_msg::msg::Vehiclepose msg_;
};

class Init_Vehiclepose_y
{
public:
  explicit Init_Vehiclepose_y(::vehicle_msg::msg::Vehiclepose & msg)
  : msg_(msg)
  {}
  Init_Vehiclepose_theta y(::vehicle_msg::msg::Vehiclepose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Vehiclepose_theta(msg_);
  }

private:
  ::vehicle_msg::msg::Vehiclepose msg_;
};

class Init_Vehiclepose_x
{
public:
  Init_Vehiclepose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vehiclepose_y x(::vehicle_msg::msg::Vehiclepose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vehiclepose_y(msg_);
  }

private:
  ::vehicle_msg::msg::Vehiclepose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vehicle_msg::msg::Vehiclepose>()
{
  return vehicle_msg::msg::builder::Init_Vehiclepose_x();
}

}  // namespace vehicle_msg

#endif  // VEHICLE_MSG__MSG__DETAIL__VEHICLEPOSE__BUILDER_HPP_
