// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/ExtendedVector3.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__EXTENDED_VECTOR3__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__EXTENDED_VECTOR3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vector'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/ExtendedVector3 in the package custom_msgs.
typedef struct custom_msgs__msg__ExtendedVector3
{
  geometry_msgs__msg__Vector3 vector;
  int32_t freq;
} custom_msgs__msg__ExtendedVector3;

// Struct for a sequence of custom_msgs__msg__ExtendedVector3.
typedef struct custom_msgs__msg__ExtendedVector3__Sequence
{
  custom_msgs__msg__ExtendedVector3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__ExtendedVector3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__EXTENDED_VECTOR3__STRUCT_H_
