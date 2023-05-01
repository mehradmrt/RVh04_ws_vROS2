// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vehicle_msg:msg/VehicleInput.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__STRUCT_HPP_
#define VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__vehicle_msg__msg__VehicleInput __attribute__((deprecated))
#else
# define DEPRECATED__vehicle_msg__msg__VehicleInput __declspec(deprecated)
#endif

namespace vehicle_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleInput_
{
  using Type = VehicleInput_<ContainerAllocator>;

  explicit VehicleInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vref = 0.0;
      this->steerangle = 0.0;
    }
  }

  explicit VehicleInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vref = 0.0;
      this->steerangle = 0.0;
    }
  }

  // field types and members
  using _vref_type =
    double;
  _vref_type vref;
  using _steerangle_type =
    double;
  _steerangle_type steerangle;

  // setters for named parameter idiom
  Type & set__vref(
    const double & _arg)
  {
    this->vref = _arg;
    return *this;
  }
  Type & set__steerangle(
    const double & _arg)
  {
    this->steerangle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vehicle_msg::msg::VehicleInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const vehicle_msg::msg::VehicleInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vehicle_msg::msg::VehicleInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vehicle_msg::msg::VehicleInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vehicle_msg::msg::VehicleInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vehicle_msg::msg::VehicleInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vehicle_msg::msg::VehicleInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vehicle_msg::msg::VehicleInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vehicle_msg::msg::VehicleInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vehicle_msg::msg::VehicleInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vehicle_msg__msg__VehicleInput
    std::shared_ptr<vehicle_msg::msg::VehicleInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vehicle_msg__msg__VehicleInput
    std::shared_ptr<vehicle_msg::msg::VehicleInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleInput_ & other) const
  {
    if (this->vref != other.vref) {
      return false;
    }
    if (this->steerangle != other.steerangle) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleInput_

// alias to use template instance with default allocator
using VehicleInput =
  vehicle_msg::msg::VehicleInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vehicle_msg

#endif  // VEHICLE_MSG__MSG__DETAIL__VEHICLE_INPUT__STRUCT_HPP_
