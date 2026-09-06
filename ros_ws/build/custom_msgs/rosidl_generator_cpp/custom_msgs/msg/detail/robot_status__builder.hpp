// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_error_code
{
public:
  explicit Init_RobotStatus_error_code(::custom_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::RobotStatus error_code(::custom_msgs::msg::RobotStatus::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_is_moving
{
public:
  explicit Init_RobotStatus_is_moving(::custom_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_error_code is_moving(::custom_msgs::msg::RobotStatus::_is_moving_type arg)
  {
    msg_.is_moving = std::move(arg);
    return Init_RobotStatus_error_code(msg_);
  }

private:
  ::custom_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_battery_level
{
public:
  explicit Init_RobotStatus_battery_level(::custom_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_is_moving battery_level(::custom_msgs::msg::RobotStatus::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return Init_RobotStatus_is_moving(msg_);
  }

private:
  ::custom_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_name
{
public:
  Init_RobotStatus_robot_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_battery_level robot_name(::custom_msgs::msg::RobotStatus::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_RobotStatus_battery_level(msg_);
  }

private:
  ::custom_msgs::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::RobotStatus>()
{
  return custom_msgs::msg::builder::Init_RobotStatus_robot_name();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
