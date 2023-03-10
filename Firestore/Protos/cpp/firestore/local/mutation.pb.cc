/*
 * Copyright 2023 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: firestore/local/mutation.proto

#include "firestore/local/mutation.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_google_2ffirestore_2fv1_2fwrite_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<5> scc_info_Write_google_2ffirestore_2fv1_2fwrite_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ftimestamp_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto;
namespace firestore {
namespace client {
class MutationQueueDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MutationQueue> _instance;
} _MutationQueue_default_instance_;
class WriteBatchDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<WriteBatch> _instance;
} _WriteBatch_default_instance_;
}  // namespace client
}  // namespace firestore
static void InitDefaultsscc_info_MutationQueue_firestore_2flocal_2fmutation_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::firestore::client::_MutationQueue_default_instance_;
    new (ptr) ::firestore::client::MutationQueue();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::firestore::client::MutationQueue::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MutationQueue_firestore_2flocal_2fmutation_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_MutationQueue_firestore_2flocal_2fmutation_2eproto}, {}};

static void InitDefaultsscc_info_WriteBatch_firestore_2flocal_2fmutation_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::firestore::client::_WriteBatch_default_instance_;
    new (ptr) ::firestore::client::WriteBatch();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::firestore::client::WriteBatch::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_WriteBatch_firestore_2flocal_2fmutation_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_WriteBatch_firestore_2flocal_2fmutation_2eproto}, {
      &scc_info_Write_google_2ffirestore_2fv1_2fwrite_2eproto.base,
      &scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_firestore_2flocal_2fmutation_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_firestore_2flocal_2fmutation_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_firestore_2flocal_2fmutation_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_firestore_2flocal_2fmutation_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::firestore::client::MutationQueue, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::firestore::client::MutationQueue, last_acknowledged_batch_id_),
  PROTOBUF_FIELD_OFFSET(::firestore::client::MutationQueue, last_stream_token_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::firestore::client::WriteBatch, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::firestore::client::WriteBatch, batch_id_),
  PROTOBUF_FIELD_OFFSET(::firestore::client::WriteBatch, writes_),
  PROTOBUF_FIELD_OFFSET(::firestore::client::WriteBatch, local_write_time_),
  PROTOBUF_FIELD_OFFSET(::firestore::client::WriteBatch, base_writes_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::firestore::client::MutationQueue)},
  { 7, -1, sizeof(::firestore::client::WriteBatch)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::firestore::client::_MutationQueue_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::firestore::client::_WriteBatch_default_instance_),
};

const char descriptor_table_protodef_firestore_2flocal_2fmutation_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036firestore/local/mutation.proto\022\020firest"
  "ore.client\032\037google/firestore/v1/write.pr"
  "oto\032\037google/protobuf/timestamp.proto\"N\n\r"
  "MutationQueue\022\"\n\032last_acknowledged_batch"
  "_id\030\001 \001(\005\022\031\n\021last_stream_token\030\002 \001(\014\"\261\001\n"
  "\nWriteBatch\022\020\n\010batch_id\030\001 \001(\005\022*\n\006writes\030"
  "\002 \003(\0132\032.google.firestore.v1.Write\0224\n\020loc"
  "al_write_time\030\003 \001(\0132\032.google.protobuf.Ti"
  "mestamp\022/\n\013base_writes\030\004 \003(\0132\032.google.fi"
  "restore.v1.WriteB/\n#com.google.firebase."
  "firestore.protoP\001\242\002\005FSTPBb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_firestore_2flocal_2fmutation_2eproto_deps[2] = {
  &::descriptor_table_google_2ffirestore_2fv1_2fwrite_2eproto,
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_firestore_2flocal_2fmutation_2eproto_sccs[2] = {
  &scc_info_MutationQueue_firestore_2flocal_2fmutation_2eproto.base,
  &scc_info_WriteBatch_firestore_2flocal_2fmutation_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_firestore_2flocal_2fmutation_2eproto_once;
static bool descriptor_table_firestore_2flocal_2fmutation_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_firestore_2flocal_2fmutation_2eproto = {
  &descriptor_table_firestore_2flocal_2fmutation_2eproto_initialized, descriptor_table_protodef_firestore_2flocal_2fmutation_2eproto, "firestore/local/mutation.proto", 433,
  &descriptor_table_firestore_2flocal_2fmutation_2eproto_once, descriptor_table_firestore_2flocal_2fmutation_2eproto_sccs, descriptor_table_firestore_2flocal_2fmutation_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_firestore_2flocal_2fmutation_2eproto::offsets,
  file_level_metadata_firestore_2flocal_2fmutation_2eproto, 2, file_level_enum_descriptors_firestore_2flocal_2fmutation_2eproto, file_level_service_descriptors_firestore_2flocal_2fmutation_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_firestore_2flocal_2fmutation_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_firestore_2flocal_2fmutation_2eproto), true);
namespace firestore {
namespace client {

// ===================================================================

void MutationQueue::InitAsDefaultInstance() {
}
class MutationQueue::_Internal {
 public:
};

MutationQueue::MutationQueue()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:firestore.client.MutationQueue)
}
MutationQueue::MutationQueue(const MutationQueue& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  last_stream_token_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_last_stream_token().empty()) {
    last_stream_token_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.last_stream_token_);
  }
  last_acknowledged_batch_id_ = from.last_acknowledged_batch_id_;
  // @@protoc_insertion_point(copy_constructor:firestore.client.MutationQueue)
}

void MutationQueue::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_MutationQueue_firestore_2flocal_2fmutation_2eproto.base);
  last_stream_token_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  last_acknowledged_batch_id_ = 0;
}

MutationQueue::~MutationQueue() {
  // @@protoc_insertion_point(destructor:firestore.client.MutationQueue)
  SharedDtor();
}

void MutationQueue::SharedDtor() {
  last_stream_token_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void MutationQueue::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MutationQueue& MutationQueue::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MutationQueue_firestore_2flocal_2fmutation_2eproto.base);
  return *internal_default_instance();
}


void MutationQueue::Clear() {
// @@protoc_insertion_point(message_clear_start:firestore.client.MutationQueue)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  last_stream_token_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  last_acknowledged_batch_id_ = 0;
  _internal_metadata_.Clear();
}

const char* MutationQueue::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 last_acknowledged_batch_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          last_acknowledged_batch_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes last_stream_token = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_last_stream_token();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* MutationQueue::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:firestore.client.MutationQueue)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 last_acknowledged_batch_id = 1;
  if (this->last_acknowledged_batch_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_last_acknowledged_batch_id(), target);
  }

  // bytes last_stream_token = 2;
  if (this->last_stream_token().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_last_stream_token(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:firestore.client.MutationQueue)
  return target;
}

size_t MutationQueue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:firestore.client.MutationQueue)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes last_stream_token = 2;
  if (this->last_stream_token().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_last_stream_token());
  }

  // int32 last_acknowledged_batch_id = 1;
  if (this->last_acknowledged_batch_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_last_acknowledged_batch_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MutationQueue::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:firestore.client.MutationQueue)
  GOOGLE_DCHECK_NE(&from, this);
  const MutationQueue* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MutationQueue>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:firestore.client.MutationQueue)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:firestore.client.MutationQueue)
    MergeFrom(*source);
  }
}

void MutationQueue::MergeFrom(const MutationQueue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:firestore.client.MutationQueue)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.last_stream_token().size() > 0) {

    last_stream_token_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.last_stream_token_);
  }
  if (from.last_acknowledged_batch_id() != 0) {
    _internal_set_last_acknowledged_batch_id(from._internal_last_acknowledged_batch_id());
  }
}

void MutationQueue::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:firestore.client.MutationQueue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MutationQueue::CopyFrom(const MutationQueue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:firestore.client.MutationQueue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MutationQueue::IsInitialized() const {
  return true;
}

void MutationQueue::InternalSwap(MutationQueue* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  last_stream_token_.Swap(&other->last_stream_token_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(last_acknowledged_batch_id_, other->last_acknowledged_batch_id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MutationQueue::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void WriteBatch::InitAsDefaultInstance() {
  ::firestore::client::_WriteBatch_default_instance_._instance.get_mutable()->local_write_time_ = const_cast< PROTOBUF_NAMESPACE_ID::Timestamp*>(
      PROTOBUF_NAMESPACE_ID::Timestamp::internal_default_instance());
}
class WriteBatch::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Timestamp& local_write_time(const WriteBatch* msg);
};

const PROTOBUF_NAMESPACE_ID::Timestamp&
WriteBatch::_Internal::local_write_time(const WriteBatch* msg) {
  return *msg->local_write_time_;
}
void WriteBatch::clear_writes() {
  writes_.Clear();
}
void WriteBatch::clear_local_write_time() {
  if (GetArenaNoVirtual() == nullptr && local_write_time_ != nullptr) {
    delete local_write_time_;
  }
  local_write_time_ = nullptr;
}
void WriteBatch::clear_base_writes() {
  base_writes_.Clear();
}
WriteBatch::WriteBatch()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:firestore.client.WriteBatch)
}
WriteBatch::WriteBatch(const WriteBatch& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      writes_(from.writes_),
      base_writes_(from.base_writes_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_local_write_time()) {
    local_write_time_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.local_write_time_);
  } else {
    local_write_time_ = nullptr;
  }
  batch_id_ = from.batch_id_;
  // @@protoc_insertion_point(copy_constructor:firestore.client.WriteBatch)
}

void WriteBatch::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_WriteBatch_firestore_2flocal_2fmutation_2eproto.base);
  ::memset(&local_write_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&batch_id_) -
      reinterpret_cast<char*>(&local_write_time_)) + sizeof(batch_id_));
}

WriteBatch::~WriteBatch() {
  // @@protoc_insertion_point(destructor:firestore.client.WriteBatch)
  SharedDtor();
}

void WriteBatch::SharedDtor() {
  if (this != internal_default_instance()) delete local_write_time_;
}

void WriteBatch::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const WriteBatch& WriteBatch::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_WriteBatch_firestore_2flocal_2fmutation_2eproto.base);
  return *internal_default_instance();
}


void WriteBatch::Clear() {
// @@protoc_insertion_point(message_clear_start:firestore.client.WriteBatch)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  writes_.Clear();
  base_writes_.Clear();
  if (GetArenaNoVirtual() == nullptr && local_write_time_ != nullptr) {
    delete local_write_time_;
  }
  local_write_time_ = nullptr;
  batch_id_ = 0;
  _internal_metadata_.Clear();
}

const char* WriteBatch::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 batch_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          batch_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .google.firestore.v1.Write writes = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_writes(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp local_write_time = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_local_write_time(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .google.firestore.v1.Write base_writes = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_base_writes(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* WriteBatch::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:firestore.client.WriteBatch)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 batch_id = 1;
  if (this->batch_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_batch_id(), target);
  }

  // repeated .google.firestore.v1.Write writes = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_writes_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_writes(i), target, stream);
  }

  // .google.protobuf.Timestamp local_write_time = 3;
  if (this->has_local_write_time()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::local_write_time(this), target, stream);
  }

  // repeated .google.firestore.v1.Write base_writes = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_base_writes_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_base_writes(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:firestore.client.WriteBatch)
  return target;
}

size_t WriteBatch::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:firestore.client.WriteBatch)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.firestore.v1.Write writes = 2;
  total_size += 1UL * this->_internal_writes_size();
  for (const auto& msg : this->writes_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .google.firestore.v1.Write base_writes = 4;
  total_size += 1UL * this->_internal_base_writes_size();
  for (const auto& msg : this->base_writes_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .google.protobuf.Timestamp local_write_time = 3;
  if (this->has_local_write_time()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *local_write_time_);
  }

  // int32 batch_id = 1;
  if (this->batch_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_batch_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void WriteBatch::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:firestore.client.WriteBatch)
  GOOGLE_DCHECK_NE(&from, this);
  const WriteBatch* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<WriteBatch>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:firestore.client.WriteBatch)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:firestore.client.WriteBatch)
    MergeFrom(*source);
  }
}

void WriteBatch::MergeFrom(const WriteBatch& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:firestore.client.WriteBatch)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  writes_.MergeFrom(from.writes_);
  base_writes_.MergeFrom(from.base_writes_);
  if (from.has_local_write_time()) {
    _internal_mutable_local_write_time()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_local_write_time());
  }
  if (from.batch_id() != 0) {
    _internal_set_batch_id(from._internal_batch_id());
  }
}

void WriteBatch::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:firestore.client.WriteBatch)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WriteBatch::CopyFrom(const WriteBatch& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:firestore.client.WriteBatch)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WriteBatch::IsInitialized() const {
  return true;
}

void WriteBatch::InternalSwap(WriteBatch* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  writes_.InternalSwap(&other->writes_);
  base_writes_.InternalSwap(&other->base_writes_);
  swap(local_write_time_, other->local_write_time_);
  swap(batch_id_, other->batch_id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata WriteBatch::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace client
}  // namespace firestore
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::firestore::client::MutationQueue* Arena::CreateMaybeMessage< ::firestore::client::MutationQueue >(Arena* arena) {
  return Arena::CreateInternal< ::firestore::client::MutationQueue >(arena);
}
template<> PROTOBUF_NOINLINE ::firestore::client::WriteBatch* Arena::CreateMaybeMessage< ::firestore::client::WriteBatch >(Arena* arena) {
  return Arena::CreateInternal< ::firestore::client::WriteBatch >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
