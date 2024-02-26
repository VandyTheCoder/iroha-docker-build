// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: utility_endpoint.proto

#include "utility_endpoint.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace iroha {
namespace utility_service {
namespace proto {
constexpr Status::Status(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : status_(0)
{}
struct StatusDefaultTypeInternal {
  constexpr StatusDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StatusDefaultTypeInternal() {}
  union {
    Status _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StatusDefaultTypeInternal _Status_default_instance_;
}  // namespace proto
}  // namespace utility_service
}  // namespace iroha
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_utility_5fendpoint_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_utility_5fendpoint_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_utility_5fendpoint_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_utility_5fendpoint_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::iroha::utility_service::proto::Status, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::iroha::utility_service::proto::Status, status_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::iroha::utility_service::proto::Status)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::iroha::utility_service::proto::_Status_default_instance_),
};

const char descriptor_table_protodef_utility_5fendpoint_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026utility_endpoint.proto\022\033iroha.utility_"
  "service.proto\032\033google/protobuf/empty.pro"
  "to\"\256\001\n\006Status\022>\n\006status\030\001 \001(\0162..iroha.ut"
  "ility_service.proto.Status.StatusEnum\"d\n"
  "\nStatusEnum\022\013\n\007unknown\020\000\022\022\n\016initializati"
  "on\020\001\022\013\n\007running\020\002\022\017\n\013termination\020\003\022\013\n\007st"
  "opped\020\004\022\n\n\006failed\020\0052\230\001\n\021UtilityService_v"
  "1\022G\n\006Status\022\026.google.protobuf.Empty\032#.ir"
  "oha.utility_service.proto.Status0\001\022:\n\010Sh"
  "utdown\022\026.google.protobuf.Empty\032\026.google."
  "protobuf.Emptyb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_utility_5fendpoint_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_utility_5fendpoint_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_utility_5fendpoint_2eproto = {
  false, false, 422, descriptor_table_protodef_utility_5fendpoint_2eproto, "utility_endpoint.proto", 
  &descriptor_table_utility_5fendpoint_2eproto_once, descriptor_table_utility_5fendpoint_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_utility_5fendpoint_2eproto::offsets,
  file_level_metadata_utility_5fendpoint_2eproto, file_level_enum_descriptors_utility_5fendpoint_2eproto, file_level_service_descriptors_utility_5fendpoint_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_utility_5fendpoint_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_utility_5fendpoint_2eproto);
  return descriptor_table_utility_5fendpoint_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_utility_5fendpoint_2eproto(&descriptor_table_utility_5fendpoint_2eproto);
namespace iroha {
namespace utility_service {
namespace proto {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Status_StatusEnum_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_utility_5fendpoint_2eproto);
  return file_level_enum_descriptors_utility_5fendpoint_2eproto[0];
}
bool Status_StatusEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Status_StatusEnum Status::unknown;
constexpr Status_StatusEnum Status::initialization;
constexpr Status_StatusEnum Status::running;
constexpr Status_StatusEnum Status::termination;
constexpr Status_StatusEnum Status::stopped;
constexpr Status_StatusEnum Status::failed;
constexpr Status_StatusEnum Status::StatusEnum_MIN;
constexpr Status_StatusEnum Status::StatusEnum_MAX;
constexpr int Status::StatusEnum_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class Status::_Internal {
 public:
};

Status::Status(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:iroha.utility_service.proto.Status)
}
Status::Status(const Status& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:iroha.utility_service.proto.Status)
}

void Status::SharedCtor() {
status_ = 0;
}

Status::~Status() {
  // @@protoc_insertion_point(destructor:iroha.utility_service.proto.Status)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Status::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Status::ArenaDtor(void* object) {
  Status* _this = reinterpret_cast< Status* >(object);
  (void)_this;
}
void Status::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Status::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Status::Clear() {
// @@protoc_insertion_point(message_clear_start:iroha.utility_service.proto.Status)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  status_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Status::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .iroha.utility_service.proto.Status.StatusEnum status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_status(static_cast<::iroha::utility_service::proto::Status_StatusEnum>(val));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Status::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:iroha.utility_service.proto.Status)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .iroha.utility_service.proto.Status.StatusEnum status = 1;
  if (this->status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_status(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:iroha.utility_service.proto.Status)
  return target;
}

size_t Status::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:iroha.utility_service.proto.Status)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .iroha.utility_service.proto.Status.StatusEnum status = 1;
  if (this->status() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_status());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Status::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:iroha.utility_service.proto.Status)
  GOOGLE_DCHECK_NE(&from, this);
  const Status* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Status>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:iroha.utility_service.proto.Status)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:iroha.utility_service.proto.Status)
    MergeFrom(*source);
  }
}

void Status::MergeFrom(const Status& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:iroha.utility_service.proto.Status)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.status() != 0) {
    _internal_set_status(from._internal_status());
  }
}

void Status::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:iroha.utility_service.proto.Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Status::CopyFrom(const Status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:iroha.utility_service.proto.Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Status::IsInitialized() const {
  return true;
}

void Status::InternalSwap(Status* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(status_, other->status_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Status::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace utility_service
}  // namespace iroha
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::iroha::utility_service::proto::Status* Arena::CreateMaybeMessage< ::iroha::utility_service::proto::Status >(Arena* arena) {
  return Arena::CreateMessageInternal< ::iroha::utility_service::proto::Status >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>