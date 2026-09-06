// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/ExtendedVector3.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__EXTENDED_VECTOR3__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__EXTENDED_VECTOR3__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vector'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__ExtendedVector3 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__ExtendedVector3 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExtendedVector3_
{
  using Type = ExtendedVector3_<ContainerAllocator>;

  explicit ExtendedVector3_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vector(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->freq = 0l;
    }
  }

  explicit ExtendedVector3_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vector(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->freq = 0l;
    }
  }

  // field types and members
  using _vector_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _vector_type vector;
  using _freq_type =
    int32_t;
  _freq_type freq;

  // setters for named parameter idiom
  Type & set__vector(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->vector = _arg;
    return *this;
  }
  Type & set__freq(
    const int32_t & _arg)
  {
    this->freq = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::ExtendedVector3_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::ExtendedVector3_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::ExtendedVector3_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::ExtendedVector3_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::ExtendedVector3_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::ExtendedVector3_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::ExtendedVector3_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::ExtendedVector3_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::ExtendedVector3_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::ExtendedVector3_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__ExtendedVector3
    std::shared_ptr<custom_msgs::msg::ExtendedVector3_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__ExtendedVector3
    std::shared_ptr<custom_msgs::msg::ExtendedVector3_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExtendedVector3_ & other) const
  {
    if (this->vector != other.vector) {
      return false;
    }
    if (this->freq != other.freq) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExtendedVector3_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExtendedVector3_

// alias to use template instance with default allocator
using ExtendedVector3 =
  custom_msgs::msg::ExtendedVector3_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__EXTENDED_VECTOR3__STRUCT_HPP_
