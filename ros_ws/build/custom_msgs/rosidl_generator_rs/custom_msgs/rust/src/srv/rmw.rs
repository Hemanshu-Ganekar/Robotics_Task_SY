#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__AddNumber_Request() -> *const std::ffi::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__srv__AddNumber_Request__init(msg: *mut AddNumber_Request) -> bool;
    fn custom_msgs__srv__AddNumber_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddNumber_Request>, size: usize) -> bool;
    fn custom_msgs__srv__AddNumber_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddNumber_Request>);
    fn custom_msgs__srv__AddNumber_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddNumber_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AddNumber_Request>) -> bool;
}

// Corresponds to custom_msgs__srv__AddNumber_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddNumber_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: i32,

}



impl Default for AddNumber_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__srv__AddNumber_Request__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__srv__AddNumber_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddNumber_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__AddNumber_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__AddNumber_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__AddNumber_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddNumber_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddNumber_Request where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/srv/AddNumber_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__AddNumber_Request() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__AddNumber_Response() -> *const std::ffi::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__srv__AddNumber_Response__init(msg: *mut AddNumber_Response) -> bool;
    fn custom_msgs__srv__AddNumber_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddNumber_Response>, size: usize) -> bool;
    fn custom_msgs__srv__AddNumber_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddNumber_Response>);
    fn custom_msgs__srv__AddNumber_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddNumber_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AddNumber_Response>) -> bool;
}

// Corresponds to custom_msgs__srv__AddNumber_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddNumber_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sum: i64,

}



impl Default for AddNumber_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__srv__AddNumber_Response__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__srv__AddNumber_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddNumber_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__AddNumber_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__AddNumber_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__srv__AddNumber_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddNumber_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddNumber_Response where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/srv/AddNumber_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__srv__AddNumber_Response() }
  }
}






#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_msgs__srv__AddNumber() -> *const std::ffi::c_void;
}

// Corresponds to custom_msgs__srv__AddNumber
#[allow(missing_docs, non_camel_case_types)]
pub struct AddNumber;

impl rosidl_runtime_rs::Service for AddNumber {
    type Request = AddNumber_Request;
    type Response = AddNumber_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_msgs__srv__AddNumber() }
    }
}


