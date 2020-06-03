// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_no_generic_services.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto;
namespace protobuf_unittest {
namespace no_generic_services_test {
class TestMessage;
class TestMessageDefaultTypeInternal;
extern TestMessageDefaultTypeInternal _TestMessage_default_instance_;
}  // namespace no_generic_services_test
}  // namespace protobuf_unittest
PROTOBUF_NAMESPACE_OPEN
template<> ::protobuf_unittest::no_generic_services_test::TestMessage* Arena::CreateMaybeMessage<::protobuf_unittest::no_generic_services_test::TestMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protobuf_unittest {
namespace no_generic_services_test {

enum TestEnum : int {
  FOO = 1
};
bool TestEnum_IsValid(int value);
constexpr TestEnum TestEnum_MIN = FOO;
constexpr TestEnum TestEnum_MAX = FOO;
constexpr int TestEnum_ARRAYSIZE = TestEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TestEnum_descriptor();
template<typename T>
inline const std::string& TestEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, TestEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function TestEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    TestEnum_descriptor(), enum_t_value);
}
inline bool TestEnum_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, TestEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<TestEnum>(
    TestEnum_descriptor(), name, value);
}
// ===================================================================

class TestMessage PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protobuf_unittest.no_generic_services_test.TestMessage) */ {
 public:
  inline TestMessage() : TestMessage(nullptr) {};
  virtual ~TestMessage();

  TestMessage(const TestMessage& from);
  TestMessage(TestMessage&& from) noexcept
    : TestMessage() {
    *this = ::std::move(from);
  }

  inline TestMessage& operator=(const TestMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestMessage& operator=(TestMessage&& from) noexcept {
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
  static const TestMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMessage* internal_default_instance() {
    return reinterpret_cast<const TestMessage*>(
               &_TestMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TestMessage& a, TestMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(TestMessage* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TestMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TestMessage* New() const final {
    return CreateMaybeMessage<TestMessage>(nullptr);
  }

  TestMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TestMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TestMessage& from);
  void MergeFrom(const TestMessage& from);
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
  void InternalSwap(TestMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protobuf_unittest.no_generic_services_test.TestMessage";
  }
  protected:
  explicit TestMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto);
    return ::descriptor_table_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAFieldNumber = 1,
  };
  // optional int32 a = 1;
  bool has_a() const;
  private:
  bool _internal_has_a() const;
  public:
  void clear_a();
  ::PROTOBUF_NAMESPACE_ID::int32 a() const;
  void set_a(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_a() const;
  void _internal_set_a(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(TestMessage)
  // @@protoc_insertion_point(class_scope:protobuf_unittest.no_generic_services_test.TestMessage)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::ExtensionSet _extensions_;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 a_;
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto;
};
// ===================================================================

static const int kTestExtensionFieldNumber = 1000;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::protobuf_unittest::no_generic_services_test::TestMessage,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< ::PROTOBUF_NAMESPACE_ID::int32 >, 5, false >
  test_extension;

// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestMessage

// optional int32 a = 1;
inline bool TestMessage::_internal_has_a() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool TestMessage::has_a() const {
  return _internal_has_a();
}
inline void TestMessage::clear_a() {
  a_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TestMessage::_internal_a() const {
  return a_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TestMessage::a() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.no_generic_services_test.TestMessage.a)
  return _internal_a();
}
inline void TestMessage::_internal_set_a(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  a_ = value;
}
inline void TestMessage::set_a(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:protobuf_unittest.no_generic_services_test.TestMessage.a)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace no_generic_services_test
}  // namespace protobuf_unittest

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::protobuf_unittest::no_generic_services_test::TestEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protobuf_unittest::no_generic_services_test::TestEnum>() {
  return ::protobuf_unittest::no_generic_services_test::TestEnum_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto
