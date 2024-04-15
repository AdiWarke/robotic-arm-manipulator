// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arduinobot_msgs:srv/AddTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef ARDUINOBOT_MSGS__SRV__DETAIL__ADD_TWO_FLOATS__BUILDER_HPP_
#define ARDUINOBOT_MSGS__SRV__DETAIL__ADD_TWO_FLOATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arduinobot_msgs/srv/detail/add_two_floats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arduinobot_msgs
{

namespace srv
{

namespace builder
{

class Init_AddTwoFloats_Request_b
{
public:
  explicit Init_AddTwoFloats_Request_b(::arduinobot_msgs::srv::AddTwoFloats_Request & msg)
  : msg_(msg)
  {}
  ::arduinobot_msgs::srv::AddTwoFloats_Request b(::arduinobot_msgs::srv::AddTwoFloats_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduinobot_msgs::srv::AddTwoFloats_Request msg_;
};

class Init_AddTwoFloats_Request_a
{
public:
  Init_AddTwoFloats_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoFloats_Request_b a(::arduinobot_msgs::srv::AddTwoFloats_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoFloats_Request_b(msg_);
  }

private:
  ::arduinobot_msgs::srv::AddTwoFloats_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduinobot_msgs::srv::AddTwoFloats_Request>()
{
  return arduinobot_msgs::srv::builder::Init_AddTwoFloats_Request_a();
}

}  // namespace arduinobot_msgs


namespace arduinobot_msgs
{

namespace srv
{

namespace builder
{

class Init_AddTwoFloats_Response_sum
{
public:
  Init_AddTwoFloats_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arduinobot_msgs::srv::AddTwoFloats_Response sum(::arduinobot_msgs::srv::AddTwoFloats_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduinobot_msgs::srv::AddTwoFloats_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduinobot_msgs::srv::AddTwoFloats_Response>()
{
  return arduinobot_msgs::srv::builder::Init_AddTwoFloats_Response_sum();
}

}  // namespace arduinobot_msgs

#endif  // ARDUINOBOT_MSGS__SRV__DETAIL__ADD_TWO_FLOATS__BUILDER_HPP_
