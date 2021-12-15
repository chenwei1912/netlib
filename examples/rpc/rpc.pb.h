// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc.proto

#ifndef PROTOBUF_rpc_2eproto__INCLUDED
#define PROTOBUF_rpc_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rpc_2eproto();
void protobuf_AssignDesc_rpc_2eproto();
void protobuf_ShutdownFile_rpc_2eproto();

class RpcMessage;

enum MessageType {
  REQUEST = 0,
  RESPONSE = 1,
  ERROR = 2
};
bool MessageType_IsValid(int value);
const MessageType MessageType_MIN = REQUEST;
const MessageType MessageType_MAX = ERROR;
const int MessageType_ARRAYSIZE = MessageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MessageType_descriptor();
inline const ::std::string& MessageType_Name(MessageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MessageType_descriptor(), value);
}
inline bool MessageType_Parse(
    const ::std::string& name, MessageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MessageType>(
    MessageType_descriptor(), name, value);
}
enum ErrorCode {
  NO_ERROR = 0,
  NO_SERVICE = 1,
  NO_METHOD = 2,
  INVALID_REQUEST = 3,
  INVALID_RESPONSE = 4,
  TIMEOUT = 5
};
bool ErrorCode_IsValid(int value);
const ErrorCode ErrorCode_MIN = NO_ERROR;
const ErrorCode ErrorCode_MAX = TIMEOUT;
const int ErrorCode_ARRAYSIZE = ErrorCode_MAX + 1;

const ::google::protobuf::EnumDescriptor* ErrorCode_descriptor();
inline const ::std::string& ErrorCode_Name(ErrorCode value) {
  return ::google::protobuf::internal::NameOfEnum(
    ErrorCode_descriptor(), value);
}
inline bool ErrorCode_Parse(
    const ::std::string& name, ErrorCode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ErrorCode>(
    ErrorCode_descriptor(), name, value);
}
// ===================================================================

class RpcMessage : public ::google::protobuf::Message {
 public:
  RpcMessage();
  virtual ~RpcMessage();

  RpcMessage(const RpcMessage& from);

  inline RpcMessage& operator=(const RpcMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RpcMessage& default_instance();

  void Swap(RpcMessage* other);

  // implements Message ----------------------------------------------

  RpcMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RpcMessage& from);
  void MergeFrom(const RpcMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .MessageType type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::MessageType type() const;
  inline void set_type(::MessageType value);

  // required uint64 id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline ::google::protobuf::uint64 id() const;
  inline void set_id(::google::protobuf::uint64 value);

  // optional string service = 3;
  inline bool has_service() const;
  inline void clear_service();
  static const int kServiceFieldNumber = 3;
  inline const ::std::string& service() const;
  inline void set_service(const ::std::string& value);
  inline void set_service(const char* value);
  inline void set_service(const char* value, size_t size);
  inline ::std::string* mutable_service();
  inline ::std::string* release_service();
  inline void set_allocated_service(::std::string* service);

  // optional string method = 4;
  inline bool has_method() const;
  inline void clear_method();
  static const int kMethodFieldNumber = 4;
  inline const ::std::string& method() const;
  inline void set_method(const ::std::string& value);
  inline void set_method(const char* value);
  inline void set_method(const char* value, size_t size);
  inline ::std::string* mutable_method();
  inline ::std::string* release_method();
  inline void set_allocated_method(::std::string* method);

  // optional .ErrorCode error = 5;
  inline bool has_error() const;
  inline void clear_error();
  static const int kErrorFieldNumber = 5;
  inline ::ErrorCode error() const;
  inline void set_error(::ErrorCode value);

  // optional bytes request = 6;
  inline bool has_request() const;
  inline void clear_request();
  static const int kRequestFieldNumber = 6;
  inline const ::std::string& request() const;
  inline void set_request(const ::std::string& value);
  inline void set_request(const char* value);
  inline void set_request(const void* value, size_t size);
  inline ::std::string* mutable_request();
  inline ::std::string* release_request();
  inline void set_allocated_request(::std::string* request);

  // optional bytes response = 7;
  inline bool has_response() const;
  inline void clear_response();
  static const int kResponseFieldNumber = 7;
  inline const ::std::string& response() const;
  inline void set_response(const ::std::string& value);
  inline void set_response(const char* value);
  inline void set_response(const void* value, size_t size);
  inline ::std::string* mutable_response();
  inline ::std::string* release_response();
  inline void set_allocated_response(::std::string* response);

  // @@protoc_insertion_point(class_scope:RpcMessage)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_service();
  inline void clear_has_service();
  inline void set_has_method();
  inline void clear_has_method();
  inline void set_has_error();
  inline void clear_has_error();
  inline void set_has_request();
  inline void clear_has_request();
  inline void set_has_response();
  inline void clear_has_response();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 id_;
  ::std::string* service_;
  int type_;
  int error_;
  ::std::string* method_;
  ::std::string* request_;
  ::std::string* response_;
  friend void  protobuf_AddDesc_rpc_2eproto();
  friend void protobuf_AssignDesc_rpc_2eproto();
  friend void protobuf_ShutdownFile_rpc_2eproto();

  void InitAsDefaultInstance();
  static RpcMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// RpcMessage

// required .MessageType type = 1;
inline bool RpcMessage::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RpcMessage::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RpcMessage::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RpcMessage::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::MessageType RpcMessage::type() const {
  // @@protoc_insertion_point(field_get:RpcMessage.type)
  return static_cast< ::MessageType >(type_);
}
inline void RpcMessage::set_type(::MessageType value) {
  assert(::MessageType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:RpcMessage.type)
}

// required uint64 id = 2;
inline bool RpcMessage::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RpcMessage::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RpcMessage::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RpcMessage::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::uint64 RpcMessage::id() const {
  // @@protoc_insertion_point(field_get:RpcMessage.id)
  return id_;
}
inline void RpcMessage::set_id(::google::protobuf::uint64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:RpcMessage.id)
}

// optional string service = 3;
inline bool RpcMessage::has_service() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RpcMessage::set_has_service() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RpcMessage::clear_has_service() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RpcMessage::clear_service() {
  if (service_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    service_->clear();
  }
  clear_has_service();
}
inline const ::std::string& RpcMessage::service() const {
  // @@protoc_insertion_point(field_get:RpcMessage.service)
  return *service_;
}
inline void RpcMessage::set_service(const ::std::string& value) {
  set_has_service();
  if (service_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    service_ = new ::std::string;
  }
  service_->assign(value);
  // @@protoc_insertion_point(field_set:RpcMessage.service)
}
inline void RpcMessage::set_service(const char* value) {
  set_has_service();
  if (service_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    service_ = new ::std::string;
  }
  service_->assign(value);
  // @@protoc_insertion_point(field_set_char:RpcMessage.service)
}
inline void RpcMessage::set_service(const char* value, size_t size) {
  set_has_service();
  if (service_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    service_ = new ::std::string;
  }
  service_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:RpcMessage.service)
}
inline ::std::string* RpcMessage::mutable_service() {
  set_has_service();
  if (service_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    service_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:RpcMessage.service)
  return service_;
}
inline ::std::string* RpcMessage::release_service() {
  clear_has_service();
  if (service_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = service_;
    service_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void RpcMessage::set_allocated_service(::std::string* service) {
  if (service_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete service_;
  }
  if (service) {
    set_has_service();
    service_ = service;
  } else {
    clear_has_service();
    service_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:RpcMessage.service)
}

// optional string method = 4;
inline bool RpcMessage::has_method() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RpcMessage::set_has_method() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RpcMessage::clear_has_method() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RpcMessage::clear_method() {
  if (method_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_->clear();
  }
  clear_has_method();
}
inline const ::std::string& RpcMessage::method() const {
  // @@protoc_insertion_point(field_get:RpcMessage.method)
  return *method_;
}
inline void RpcMessage::set_method(const ::std::string& value) {
  set_has_method();
  if (method_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_ = new ::std::string;
  }
  method_->assign(value);
  // @@protoc_insertion_point(field_set:RpcMessage.method)
}
inline void RpcMessage::set_method(const char* value) {
  set_has_method();
  if (method_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_ = new ::std::string;
  }
  method_->assign(value);
  // @@protoc_insertion_point(field_set_char:RpcMessage.method)
}
inline void RpcMessage::set_method(const char* value, size_t size) {
  set_has_method();
  if (method_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_ = new ::std::string;
  }
  method_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:RpcMessage.method)
}
inline ::std::string* RpcMessage::mutable_method() {
  set_has_method();
  if (method_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:RpcMessage.method)
  return method_;
}
inline ::std::string* RpcMessage::release_method() {
  clear_has_method();
  if (method_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = method_;
    method_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void RpcMessage::set_allocated_method(::std::string* method) {
  if (method_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete method_;
  }
  if (method) {
    set_has_method();
    method_ = method;
  } else {
    clear_has_method();
    method_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:RpcMessage.method)
}

// optional .ErrorCode error = 5;
inline bool RpcMessage::has_error() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RpcMessage::set_has_error() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RpcMessage::clear_has_error() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RpcMessage::clear_error() {
  error_ = 0;
  clear_has_error();
}
inline ::ErrorCode RpcMessage::error() const {
  // @@protoc_insertion_point(field_get:RpcMessage.error)
  return static_cast< ::ErrorCode >(error_);
}
inline void RpcMessage::set_error(::ErrorCode value) {
  assert(::ErrorCode_IsValid(value));
  set_has_error();
  error_ = value;
  // @@protoc_insertion_point(field_set:RpcMessage.error)
}

// optional bytes request = 6;
inline bool RpcMessage::has_request() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RpcMessage::set_has_request() {
  _has_bits_[0] |= 0x00000020u;
}
inline void RpcMessage::clear_has_request() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void RpcMessage::clear_request() {
  if (request_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_->clear();
  }
  clear_has_request();
}
inline const ::std::string& RpcMessage::request() const {
  // @@protoc_insertion_point(field_get:RpcMessage.request)
  return *request_;
}
inline void RpcMessage::set_request(const ::std::string& value) {
  set_has_request();
  if (request_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_ = new ::std::string;
  }
  request_->assign(value);
  // @@protoc_insertion_point(field_set:RpcMessage.request)
}
inline void RpcMessage::set_request(const char* value) {
  set_has_request();
  if (request_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_ = new ::std::string;
  }
  request_->assign(value);
  // @@protoc_insertion_point(field_set_char:RpcMessage.request)
}
inline void RpcMessage::set_request(const void* value, size_t size) {
  set_has_request();
  if (request_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_ = new ::std::string;
  }
  request_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:RpcMessage.request)
}
inline ::std::string* RpcMessage::mutable_request() {
  set_has_request();
  if (request_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:RpcMessage.request)
  return request_;
}
inline ::std::string* RpcMessage::release_request() {
  clear_has_request();
  if (request_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = request_;
    request_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void RpcMessage::set_allocated_request(::std::string* request) {
  if (request_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete request_;
  }
  if (request) {
    set_has_request();
    request_ = request;
  } else {
    clear_has_request();
    request_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:RpcMessage.request)
}

// optional bytes response = 7;
inline bool RpcMessage::has_response() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void RpcMessage::set_has_response() {
  _has_bits_[0] |= 0x00000040u;
}
inline void RpcMessage::clear_has_response() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void RpcMessage::clear_response() {
  if (response_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    response_->clear();
  }
  clear_has_response();
}
inline const ::std::string& RpcMessage::response() const {
  // @@protoc_insertion_point(field_get:RpcMessage.response)
  return *response_;
}
inline void RpcMessage::set_response(const ::std::string& value) {
  set_has_response();
  if (response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    response_ = new ::std::string;
  }
  response_->assign(value);
  // @@protoc_insertion_point(field_set:RpcMessage.response)
}
inline void RpcMessage::set_response(const char* value) {
  set_has_response();
  if (response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    response_ = new ::std::string;
  }
  response_->assign(value);
  // @@protoc_insertion_point(field_set_char:RpcMessage.response)
}
inline void RpcMessage::set_response(const void* value, size_t size) {
  set_has_response();
  if (response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    response_ = new ::std::string;
  }
  response_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:RpcMessage.response)
}
inline ::std::string* RpcMessage::mutable_response() {
  set_has_response();
  if (response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    response_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:RpcMessage.response)
  return response_;
}
inline ::std::string* RpcMessage::release_response() {
  clear_has_response();
  if (response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = response_;
    response_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void RpcMessage::set_allocated_response(::std::string* response) {
  if (response_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete response_;
  }
  if (response) {
    set_has_response();
    response_ = response;
  } else {
    clear_has_response();
    response_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:RpcMessage.response)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::MessageType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MessageType>() {
  return ::MessageType_descriptor();
}
template <> struct is_proto_enum< ::ErrorCode> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ErrorCode>() {
  return ::ErrorCode_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rpc_2eproto__INCLUDED
