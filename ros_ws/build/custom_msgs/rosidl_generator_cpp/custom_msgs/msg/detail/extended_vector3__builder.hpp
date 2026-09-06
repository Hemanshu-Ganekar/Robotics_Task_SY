// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/ExtendedVector3.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__EXTENDED_VECTOR3__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__EXTENDED_VECTOR3__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/extended_vector3__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_ExtendedVector3_freq
{
public:
  explicit Init_ExtendedVector3_freq(::custom_msgs::msg::ExtendedVector3 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::ExtendedVector3 freq(::custom_msgs::msg::ExtendedVector3::_freq_type arg)
  {
    msg_.freq = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::ExtendedVector3 msg_;
};

class Init_ExtendedVector3_vector
{
public:
  Init_ExtendedVector3_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExtendedVector3_freq vector(::custom_msgs::msg::ExtendedVector3::_vector_type arg)
  {
    msg_.vector = std::move(arg);
    return Init_ExtendedVector3_freq(msg_);
  }

private:
  ::custom_msgs::msg::ExtendedVector3 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::ExtendedVector3>()
{
  return custom_msgs::msg::builder::Init_ExtendedVector3_vector();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__EXTENDED_VECTOR3__BUILDER_HPP_
