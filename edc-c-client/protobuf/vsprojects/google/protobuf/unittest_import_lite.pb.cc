// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/protobuf/unittest_import_lite.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace protobuf_unittest_import {

void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fimport_5flite_2eproto() {
  delete ImportMessageLite::default_instance_;
}

void protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5flite_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ImportMessageLite::default_instance_ = new ImportMessageLite();
  ImportMessageLite::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fimport_5flite_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fimport_5flite_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fimport_5flite_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5flite_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2funittest_5fimport_5flite_2eproto_;

bool ImportEnumLite_IsValid(int value) {
  switch(value) {
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int ImportMessageLite::kDFieldNumber;
#endif  // !_MSC_VER

ImportMessageLite::ImportMessageLite()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ImportMessageLite::InitAsDefaultInstance() {
}

ImportMessageLite::ImportMessageLite(const ImportMessageLite& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ImportMessageLite::SharedCtor() {
  _cached_size_ = 0;
  d_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ImportMessageLite::~ImportMessageLite() {
  SharedDtor();
}

void ImportMessageLite::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ImportMessageLite::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ImportMessageLite& ImportMessageLite::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5flite_2eproto();  return *default_instance_;
}

ImportMessageLite* ImportMessageLite::default_instance_ = NULL;

ImportMessageLite* ImportMessageLite::New() const {
  return new ImportMessageLite;
}

void ImportMessageLite::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    d_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ImportMessageLite::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 d = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &d_)));
          set_has_d();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ImportMessageLite::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 d = 1;
  if (has_d()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->d(), output);
  }
  
}

int ImportMessageLite::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 d = 1;
    if (has_d()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->d());
    }
    
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ImportMessageLite::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ImportMessageLite*>(&from));
}

void ImportMessageLite::MergeFrom(const ImportMessageLite& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_d()) {
      set_d(from.d());
    }
  }
}

void ImportMessageLite::CopyFrom(const ImportMessageLite& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImportMessageLite::IsInitialized() const {
  
  return true;
}

void ImportMessageLite::Swap(ImportMessageLite* other) {
  if (other != this) {
    std::swap(d_, other->d_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ImportMessageLite::GetTypeName() const {
  return "protobuf_unittest_import.ImportMessageLite";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest_import

// @@protoc_insertion_point(global_scope)
