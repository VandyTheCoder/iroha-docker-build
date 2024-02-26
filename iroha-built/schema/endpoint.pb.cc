// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: endpoint.proto

#include "endpoint.pb.h"

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
namespace protocol {
constexpr ToriiResponse::ToriiResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : tx_hash_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , err_or_cmd_name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , tx_status_(0)

  , error_code_(0u)
  , failed_cmd_index_(PROTOBUF_ULONGLONG(0)){}
struct ToriiResponseDefaultTypeInternal {
  constexpr ToriiResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ToriiResponseDefaultTypeInternal() {}
  union {
    ToriiResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ToriiResponseDefaultTypeInternal _ToriiResponse_default_instance_;
constexpr TxStatusRequest::TxStatusRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : tx_hash_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct TxStatusRequestDefaultTypeInternal {
  constexpr TxStatusRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TxStatusRequestDefaultTypeInternal() {}
  union {
    TxStatusRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TxStatusRequestDefaultTypeInternal _TxStatusRequest_default_instance_;
constexpr TxList::TxList(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : transactions_(){}
struct TxListDefaultTypeInternal {
  constexpr TxListDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TxListDefaultTypeInternal() {}
  union {
    TxList _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TxListDefaultTypeInternal _TxList_default_instance_;
}  // namespace protocol
}  // namespace iroha
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_endpoint_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_endpoint_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_endpoint_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_endpoint_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::iroha::protocol::ToriiResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::iroha::protocol::ToriiResponse, tx_status_),
  PROTOBUF_FIELD_OFFSET(::iroha::protocol::ToriiResponse, tx_hash_),
  PROTOBUF_FIELD_OFFSET(::iroha::protocol::ToriiResponse, err_or_cmd_name_),
  PROTOBUF_FIELD_OFFSET(::iroha::protocol::ToriiResponse, failed_cmd_index_),
  PROTOBUF_FIELD_OFFSET(::iroha::protocol::ToriiResponse, error_code_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::iroha::protocol::TxStatusRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::iroha::protocol::TxStatusRequest, tx_hash_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::iroha::protocol::TxList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::iroha::protocol::TxList, transactions_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::iroha::protocol::ToriiResponse)},
  { 10, -1, sizeof(::iroha::protocol::TxStatusRequest)},
  { 16, -1, sizeof(::iroha::protocol::TxList)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::iroha::protocol::_ToriiResponse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::iroha::protocol::_TxStatusRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::iroha::protocol::_TxList_default_instance_),
};

const char descriptor_table_protodef_endpoint_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016endpoint.proto\022\016iroha.protocol\032\021transa"
  "ction.proto\032\rqueries.proto\032\023qry_response"
  "s.proto\032\033google/protobuf/empty.proto\"\224\001\n"
  "\rToriiResponse\022+\n\ttx_status\030\001 \001(\0162\030.iroh"
  "a.protocol.TxStatus\022\017\n\007tx_hash\030\002 \001(\t\022\027\n\017"
  "err_or_cmd_name\030\003 \001(\t\022\030\n\020failed_cmd_inde"
  "x\030\004 \001(\004\022\022\n\nerror_code\030\005 \001(\r\"\"\n\017TxStatusR"
  "equest\022\017\n\007tx_hash\030\001 \001(\t\";\n\006TxList\0221\n\014tra"
  "nsactions\030\001 \003(\0132\033.iroha.protocol.Transac"
  "tion*\200\002\n\010TxStatus\022\037\n\033STATELESS_VALIDATIO"
  "N_FAILED\020\000\022 \n\034STATELESS_VALIDATION_SUCCE"
  "SS\020\001\022\036\n\032STATEFUL_VALIDATION_FAILED\020\002\022\037\n\033"
  "STATEFUL_VALIDATION_SUCCESS\020\003\022\014\n\010REJECTE"
  "D\020\004\022\r\n\tCOMMITTED\020\005\022\017\n\013MST_EXPIRED\020\006\022\020\n\014N"
  "OT_RECEIVED\020\007\022\017\n\013MST_PENDING\020\010\022\037\n\033ENOUGH"
  "_SIGNATURES_COLLECTED\020\t2\252\002\n\021CommandServi"
  "ce_v1\022<\n\005Torii\022\033.iroha.protocol.Transact"
  "ion\032\026.google.protobuf.Empty\022;\n\tListTorii"
  "\022\026.iroha.protocol.TxList\032\026.google.protob"
  "uf.Empty\022H\n\006Status\022\037.iroha.protocol.TxSt"
  "atusRequest\032\035.iroha.protocol.ToriiRespon"
  "se\022P\n\014StatusStream\022\037.iroha.protocol.TxSt"
  "atusRequest\032\035.iroha.protocol.ToriiRespon"
  "se0\0012\352\001\n\017QueryService_v1\022<\n\004Find\022\025.iroha"
  ".protocol.Query\032\035.iroha.protocol.QueryRe"
  "sponse\022Q\n\014FetchCommits\022\033.iroha.protocol."
  "BlocksQuery\032\".iroha.protocol.BlockQueryR"
  "esponse0\001\022F\n\013Healthcheck\022\026.google.protob"
  "uf.Empty\032\037.iroha.protocol.HealthcheckDat"
  "aB\032Z\030iroha.generated/protocolb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_endpoint_2eproto_deps[4] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
  &::descriptor_table_qry_5fresponses_2eproto,
  &::descriptor_table_queries_2eproto,
  &::descriptor_table_transaction_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_endpoint_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_endpoint_2eproto = {
  false, false, 1197, descriptor_table_protodef_endpoint_2eproto, "endpoint.proto", 
  &descriptor_table_endpoint_2eproto_once, descriptor_table_endpoint_2eproto_deps, 4, 3,
  schemas, file_default_instances, TableStruct_endpoint_2eproto::offsets,
  file_level_metadata_endpoint_2eproto, file_level_enum_descriptors_endpoint_2eproto, file_level_service_descriptors_endpoint_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_endpoint_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_endpoint_2eproto);
  return descriptor_table_endpoint_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_endpoint_2eproto(&descriptor_table_endpoint_2eproto);
namespace iroha {
namespace protocol {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TxStatus_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_endpoint_2eproto);
  return file_level_enum_descriptors_endpoint_2eproto[0];
}
bool TxStatus_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class ToriiResponse::_Internal {
 public:
};

ToriiResponse::ToriiResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:iroha.protocol.ToriiResponse)
}
ToriiResponse::ToriiResponse(const ToriiResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  tx_hash_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_tx_hash().empty()) {
    tx_hash_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_tx_hash(), 
      GetArena());
  }
  err_or_cmd_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_err_or_cmd_name().empty()) {
    err_or_cmd_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_err_or_cmd_name(), 
      GetArena());
  }
  ::memcpy(&tx_status_, &from.tx_status_,
    static_cast<size_t>(reinterpret_cast<char*>(&failed_cmd_index_) -
    reinterpret_cast<char*>(&tx_status_)) + sizeof(failed_cmd_index_));
  // @@protoc_insertion_point(copy_constructor:iroha.protocol.ToriiResponse)
}

void ToriiResponse::SharedCtor() {
tx_hash_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
err_or_cmd_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&tx_status_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&failed_cmd_index_) -
    reinterpret_cast<char*>(&tx_status_)) + sizeof(failed_cmd_index_));
}

ToriiResponse::~ToriiResponse() {
  // @@protoc_insertion_point(destructor:iroha.protocol.ToriiResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ToriiResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  tx_hash_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  err_or_cmd_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ToriiResponse::ArenaDtor(void* object) {
  ToriiResponse* _this = reinterpret_cast< ToriiResponse* >(object);
  (void)_this;
}
void ToriiResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ToriiResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ToriiResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:iroha.protocol.ToriiResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  tx_hash_.ClearToEmpty();
  err_or_cmd_name_.ClearToEmpty();
  ::memset(&tx_status_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&failed_cmd_index_) -
      reinterpret_cast<char*>(&tx_status_)) + sizeof(failed_cmd_index_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ToriiResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .iroha.protocol.TxStatus tx_status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_tx_status(static_cast<::iroha::protocol::TxStatus>(val));
        } else goto handle_unusual;
        continue;
      // string tx_hash = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_tx_hash();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "iroha.protocol.ToriiResponse.tx_hash"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string err_or_cmd_name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_err_or_cmd_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "iroha.protocol.ToriiResponse.err_or_cmd_name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 failed_cmd_index = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          failed_cmd_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 error_code = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          error_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ToriiResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:iroha.protocol.ToriiResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .iroha.protocol.TxStatus tx_status = 1;
  if (this->tx_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_tx_status(), target);
  }

  // string tx_hash = 2;
  if (this->tx_hash().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_tx_hash().data(), static_cast<int>(this->_internal_tx_hash().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "iroha.protocol.ToriiResponse.tx_hash");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_tx_hash(), target);
  }

  // string err_or_cmd_name = 3;
  if (this->err_or_cmd_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_err_or_cmd_name().data(), static_cast<int>(this->_internal_err_or_cmd_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "iroha.protocol.ToriiResponse.err_or_cmd_name");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_err_or_cmd_name(), target);
  }

  // uint64 failed_cmd_index = 4;
  if (this->failed_cmd_index() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(4, this->_internal_failed_cmd_index(), target);
  }

  // uint32 error_code = 5;
  if (this->error_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(5, this->_internal_error_code(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:iroha.protocol.ToriiResponse)
  return target;
}

size_t ToriiResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:iroha.protocol.ToriiResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string tx_hash = 2;
  if (this->tx_hash().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_tx_hash());
  }

  // string err_or_cmd_name = 3;
  if (this->err_or_cmd_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_err_or_cmd_name());
  }

  // .iroha.protocol.TxStatus tx_status = 1;
  if (this->tx_status() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_tx_status());
  }

  // uint32 error_code = 5;
  if (this->error_code() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_error_code());
  }

  // uint64 failed_cmd_index = 4;
  if (this->failed_cmd_index() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_failed_cmd_index());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ToriiResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:iroha.protocol.ToriiResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const ToriiResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ToriiResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:iroha.protocol.ToriiResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:iroha.protocol.ToriiResponse)
    MergeFrom(*source);
  }
}

void ToriiResponse::MergeFrom(const ToriiResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:iroha.protocol.ToriiResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.tx_hash().size() > 0) {
    _internal_set_tx_hash(from._internal_tx_hash());
  }
  if (from.err_or_cmd_name().size() > 0) {
    _internal_set_err_or_cmd_name(from._internal_err_or_cmd_name());
  }
  if (from.tx_status() != 0) {
    _internal_set_tx_status(from._internal_tx_status());
  }
  if (from.error_code() != 0) {
    _internal_set_error_code(from._internal_error_code());
  }
  if (from.failed_cmd_index() != 0) {
    _internal_set_failed_cmd_index(from._internal_failed_cmd_index());
  }
}

void ToriiResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:iroha.protocol.ToriiResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ToriiResponse::CopyFrom(const ToriiResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:iroha.protocol.ToriiResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ToriiResponse::IsInitialized() const {
  return true;
}

void ToriiResponse::InternalSwap(ToriiResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  tx_hash_.Swap(&other->tx_hash_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  err_or_cmd_name_.Swap(&other->err_or_cmd_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ToriiResponse, failed_cmd_index_)
      + sizeof(ToriiResponse::failed_cmd_index_)
      - PROTOBUF_FIELD_OFFSET(ToriiResponse, tx_status_)>(
          reinterpret_cast<char*>(&tx_status_),
          reinterpret_cast<char*>(&other->tx_status_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ToriiResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class TxStatusRequest::_Internal {
 public:
};

TxStatusRequest::TxStatusRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:iroha.protocol.TxStatusRequest)
}
TxStatusRequest::TxStatusRequest(const TxStatusRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  tx_hash_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_tx_hash().empty()) {
    tx_hash_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_tx_hash(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:iroha.protocol.TxStatusRequest)
}

void TxStatusRequest::SharedCtor() {
tx_hash_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

TxStatusRequest::~TxStatusRequest() {
  // @@protoc_insertion_point(destructor:iroha.protocol.TxStatusRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void TxStatusRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  tx_hash_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void TxStatusRequest::ArenaDtor(void* object) {
  TxStatusRequest* _this = reinterpret_cast< TxStatusRequest* >(object);
  (void)_this;
}
void TxStatusRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TxStatusRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TxStatusRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:iroha.protocol.TxStatusRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  tx_hash_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TxStatusRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string tx_hash = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_tx_hash();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "iroha.protocol.TxStatusRequest.tx_hash"));
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* TxStatusRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:iroha.protocol.TxStatusRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string tx_hash = 1;
  if (this->tx_hash().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_tx_hash().data(), static_cast<int>(this->_internal_tx_hash().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "iroha.protocol.TxStatusRequest.tx_hash");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_tx_hash(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:iroha.protocol.TxStatusRequest)
  return target;
}

size_t TxStatusRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:iroha.protocol.TxStatusRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string tx_hash = 1;
  if (this->tx_hash().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_tx_hash());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TxStatusRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:iroha.protocol.TxStatusRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const TxStatusRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TxStatusRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:iroha.protocol.TxStatusRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:iroha.protocol.TxStatusRequest)
    MergeFrom(*source);
  }
}

void TxStatusRequest::MergeFrom(const TxStatusRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:iroha.protocol.TxStatusRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.tx_hash().size() > 0) {
    _internal_set_tx_hash(from._internal_tx_hash());
  }
}

void TxStatusRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:iroha.protocol.TxStatusRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TxStatusRequest::CopyFrom(const TxStatusRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:iroha.protocol.TxStatusRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TxStatusRequest::IsInitialized() const {
  return true;
}

void TxStatusRequest::InternalSwap(TxStatusRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  tx_hash_.Swap(&other->tx_hash_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata TxStatusRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class TxList::_Internal {
 public:
};

void TxList::clear_transactions() {
  transactions_.Clear();
}
TxList::TxList(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  transactions_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:iroha.protocol.TxList)
}
TxList::TxList(const TxList& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      transactions_(from.transactions_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:iroha.protocol.TxList)
}

void TxList::SharedCtor() {
}

TxList::~TxList() {
  // @@protoc_insertion_point(destructor:iroha.protocol.TxList)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void TxList::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void TxList::ArenaDtor(void* object) {
  TxList* _this = reinterpret_cast< TxList* >(object);
  (void)_this;
}
void TxList::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TxList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TxList::Clear() {
// @@protoc_insertion_point(message_clear_start:iroha.protocol.TxList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  transactions_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TxList::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .iroha.protocol.Transaction transactions = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_transactions(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* TxList::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:iroha.protocol.TxList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .iroha.protocol.Transaction transactions = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_transactions_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_transactions(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:iroha.protocol.TxList)
  return target;
}

size_t TxList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:iroha.protocol.TxList)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .iroha.protocol.Transaction transactions = 1;
  total_size += 1UL * this->_internal_transactions_size();
  for (const auto& msg : this->transactions_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TxList::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:iroha.protocol.TxList)
  GOOGLE_DCHECK_NE(&from, this);
  const TxList* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TxList>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:iroha.protocol.TxList)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:iroha.protocol.TxList)
    MergeFrom(*source);
  }
}

void TxList::MergeFrom(const TxList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:iroha.protocol.TxList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  transactions_.MergeFrom(from.transactions_);
}

void TxList::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:iroha.protocol.TxList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TxList::CopyFrom(const TxList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:iroha.protocol.TxList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TxList::IsInitialized() const {
  return true;
}

void TxList::InternalSwap(TxList* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  transactions_.InternalSwap(&other->transactions_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TxList::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protocol
}  // namespace iroha
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::iroha::protocol::ToriiResponse* Arena::CreateMaybeMessage< ::iroha::protocol::ToriiResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::iroha::protocol::ToriiResponse >(arena);
}
template<> PROTOBUF_NOINLINE ::iroha::protocol::TxStatusRequest* Arena::CreateMaybeMessage< ::iroha::protocol::TxStatusRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::iroha::protocol::TxStatusRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::iroha::protocol::TxList* Arena::CreateMaybeMessage< ::iroha::protocol::TxList >(Arena* arena) {
  return Arena::CreateMessageInternal< ::iroha::protocol::TxList >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>