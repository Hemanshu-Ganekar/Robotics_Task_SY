// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:srv/AddNumber.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__ADD_NUMBER__TRAITS_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__ADD_NUMBER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/srv/detail/add_number__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddNumber_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddNumber_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddNumber_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::srv::AddNumber_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::srv::AddNumber_Request & msg)
{
  return custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::srv::AddNumber_Request>()
{
  return "custom_msgs::srv::AddNumber_Request";
}

template<>
inline const char * name<custom_msgs::srv::AddNumber_Request>()
{
  return "custom_msgs/srv/AddNumber_Request";
}

template<>
struct has_fixed_size<custom_msgs::srv::AddNumber_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs::srv::AddNumber_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs::srv::AddNumber_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddNumber_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddNumber_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddNumber_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::srv::AddNumber_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::srv::AddNumber_Response & msg)
{
  return custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::srv::AddNumber_Response>()
{
  return "custom_msgs::srv::AddNumber_Response";
}

template<>
inline const char * name<custom_msgs::srv::AddNumber_Response>()
{
  return "custom_msgs/srv/AddNumber_Response";
}

template<>
struct has_fixed_size<custom_msgs::srv::AddNumber_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs::srv::AddNumber_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs::srv::AddNumber_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs::srv::AddNumber>()
{
  return "custom_msgs::srv::AddNumber";
}

template<>
inline const char * name<custom_msgs::srv::AddNumber>()
{
  return "custom_msgs/srv/AddNumber";
}

template<>
struct has_fixed_size<custom_msgs::srv::AddNumber>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_msgs::srv::AddNumber_Request>::value &&
    has_fixed_size<custom_msgs::srv::AddNumber_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_msgs::srv::AddNumber>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_msgs::srv::AddNumber_Request>::value &&
    has_bounded_size<custom_msgs::srv::AddNumber_Response>::value
  >
{
};

template<>
struct is_service<custom_msgs::srv::AddNumber>
  : std::true_type
{
};

template<>
struct is_service_request<custom_msgs::srv::AddNumber_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_msgs::srv::AddNumber_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__SRV__DETAIL__ADD_NUMBER__TRAITS_HPP_
