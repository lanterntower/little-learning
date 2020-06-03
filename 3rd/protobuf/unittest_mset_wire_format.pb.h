// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_mset_wire_format.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto;
namespace proto2_wireformat_unittest {
class TestMessageSet;
class TestMessageSetDefaultTypeInternal;
extern TestMessageSetDefaultTypeInternal _TestMessageSet_default_instance_;
class TestMessageSetWireFormatContainer;
class TestMessageSetWireFormatContainerDefaultTypeInternal;
extern TestMessageSetWireFormatContainerDefaultTypeInternal _TestMessageSetWireFormatContainer_default_instance_;
}  // namespace proto2_wireformat_unittest
PROTOBUF_NAMESPACE_OPEN
template<> ::proto2_wireformat_unittest::TestMessageSet* Arena::CreateMaybeMessage<::proto2_wireformat_unittest::TestMessageSet>(Arena*);
template<> ::proto2_wireformat_unittest::TestMessageSetWireFormatContainer* Arena::CreateMaybeMessage<::proto2_wireformat_unittest::TestMessageSetWireFormatContainer>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace proto2_wireformat_unittest {

// ===================================================================

class TestMessageSet PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:proto2_wireformat_unittest.TestMessageSet) */ {
 public:
  inline TestMessageSet() : TestMessageSet(nullptr) {};
  virtual ~TestMessageSet();

  TestMessageSet(const TestMessageSet& from);
  TestMessageSet(TestMessageSet&& from) noexcept
    : TestMessageSet() {
    *this = ::std::move(from);
  }

  inline TestMessageSet& operator=(const TestMessageSet& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestMessageSet& operator=(TestMessageSet&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const TestMessageSet& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMessageSet* internal_default_instance() {
    return reinterpret_cast<const TestMessageSet*>(
               &_TestMessageSet_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TestMessageSet& a, TestMessageSet& b) {
    a.Swap(&b);
  }
  inline void Swap(TestMessageSet* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TestMessageSet* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TestMessageSet* New() const final {
    return CreateMaybeMessage<TestMessageSet>(nullptr);
  }

  TestMessageSet* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TestMessageSet>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TestMessageSet& from);
  void MergeFrom(const TestMessageSet& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TestMessageSet* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "proto2_wireformat_unittest.TestMessageSet";
  }
  protected:
  explicit TestMessageSet(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto);
    return ::descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(TestMessageSet)
  // @@protoc_insertion_point(class_scope:proto2_wireformat_unittest.TestMessageSet)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::ExtensionSet _extensions_;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto;
};
// -------------------------------------------------------------------

class TestMessageSetWireFormatContainer PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:proto2_wireformat_unittest.TestMessageSetWireFormatContainer) */ {
 public:
  inline TestMessageSetWireFormatContainer() : TestMessageSetWireFormatContainer(nullptr) {};
  virtual ~TestMessageSetWireFormatContainer();

  TestMessageSetWireFormatContainer(const TestMessageSetWireFormatContainer& from);
  TestMessageSetWireFormatContainer(TestMessageSetWireFormatContainer&& from) noexcept
    : TestMessageSetWireFormatContainer() {
    *this = ::std::move(from);
  }

  inline TestMessageSetWireFormatContainer& operator=(const TestMessageSetWireFormatContainer& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestMessageSetWireFormatContainer& operator=(TestMessageSetWireFormatContainer&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const TestMessageSetWireFormatContainer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMessageSetWireFormatContainer* internal_default_instance() {
    return reinterpret_cast<const TestMessageSetWireFormatContainer*>(
               &_TestMessageSetWireFormatContainer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TestMessageSetWireFormatContainer& a, TestMessageSetWireFormatContainer& b) {
    a.Swap(&b);
  }
  inline void Swap(TestMessageSetWireFormatContainer* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TestMessageSetWireFormatContainer* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TestMessageSetWireFormatContainer* New() const final {
    return CreateMaybeMessage<TestMessageSetWireFormatContainer>(nullptr);
  }

  TestMessageSetWireFormatContainer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TestMessageSetWireFormatContainer>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TestMessageSetWireFormatContainer& from);
  void MergeFrom(const TestMessageSetWireFormatContainer& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TestMessageSetWireFormatContainer* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "proto2_wireformat_unittest.TestMessageSetWireFormatContainer";
  }
  protected:
  explicit TestMessageSetWireFormatContainer(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto);
    return ::descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageSetFieldNumber = 1,
  };
  // optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
  bool has_message_set() const;
  private:
  bool _internal_has_message_set() const;
  public:
  void clear_message_set();
  const ::proto2_wireformat_unittest::TestMessageSet& message_set() const;
  ::proto2_wireformat_unittest::TestMessageSet* release_message_set();
  ::proto2_wireformat_unittest::TestMessageSet* mutable_message_set();
  void set_allocated_message_set(::proto2_wireformat_unittest::TestMessageSet* message_set);
  private:
  const ::proto2_wireformat_unittest::TestMessageSet& _internal_message_set() const;
  ::proto2_wireformat_unittest::TestMessageSet* _internal_mutable_message_set();
  public:
  void unsafe_arena_set_allocated_message_set(
      ::proto2_wireformat_unittest::TestMessageSet* message_set);
  ::proto2_wireformat_unittest::TestMessageSet* unsafe_arena_release_message_set();

  // @@protoc_insertion_point(class_scope:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::proto2_wireformat_unittest::TestMessageSet* message_set_;
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestMessageSet

// -------------------------------------------------------------------

// TestMessageSetWireFormatContainer

// optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
inline bool TestMessageSetWireFormatContainer::_internal_has_message_set() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || message_set_ != nullptr);
  return value;
}
inline bool TestMessageSetWireFormatContainer::has_message_set() const {
  return _internal_has_message_set();
}
inline void TestMessageSetWireFormatContainer::clear_message_set() {
  if (message_set_ != nullptr) message_set_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::proto2_wireformat_unittest::TestMessageSet& TestMessageSetWireFormatContainer::_internal_message_set() const {
  const ::proto2_wireformat_unittest::TestMessageSet* p = message_set_;
  return p != nullptr ? *p : *reinterpret_cast<const ::proto2_wireformat_unittest::TestMessageSet*>(
      &::proto2_wireformat_unittest::_TestMessageSet_default_instance_);
}
inline const ::proto2_wireformat_unittest::TestMessageSet& TestMessageSetWireFormatContainer::message_set() const {
  // @@protoc_insertion_point(field_get:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
  return _internal_message_set();
}
inline void TestMessageSetWireFormatContainer::unsafe_arena_set_allocated_message_set(
    ::proto2_wireformat_unittest::TestMessageSet* message_set) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(message_set_);
  }
  message_set_ = message_set;
  if (message_set) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
}
inline ::proto2_wireformat_unittest::TestMessageSet* TestMessageSetWireFormatContainer::release_message_set() {
  _has_bits_[0] &= ~0x00000001u;
  ::proto2_wireformat_unittest::TestMessageSet* temp = message_set_;
  message_set_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::proto2_wireformat_unittest::TestMessageSet* TestMessageSetWireFormatContainer::unsafe_arena_release_message_set() {
  // @@protoc_insertion_point(field_release:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
  _has_bits_[0] &= ~0x00000001u;
  ::proto2_wireformat_unittest::TestMessageSet* temp = message_set_;
  message_set_ = nullptr;
  return temp;
}
inline ::proto2_wireformat_unittest::TestMessageSet* TestMessageSetWireFormatContainer::_internal_mutable_message_set() {
  _has_bits_[0] |= 0x00000001u;
  if (message_set_ == nullptr) {
    auto* p = CreateMaybeMessage<::proto2_wireformat_unittest::TestMessageSet>(GetArena());
    message_set_ = p;
  }
  return message_set_;
}
inline ::proto2_wireformat_unittest::TestMessageSet* TestMessageSetWireFormatContainer::mutable_message_set() {
  // @@protoc_insertion_point(field_mutable:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
  return _internal_mutable_message_set();
}
inline void TestMessageSetWireFormatContainer::set_allocated_message_set(::proto2_wireformat_unittest::TestMessageSet* message_set) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete message_set_;
  }
  if (message_set) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(message_set);
    if (message_arena != submessage_arena) {
      message_set = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, message_set, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  message_set_ = message_set;
  // @@protoc_insertion_point(field_set_allocated:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto2_wireformat_unittest

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto
