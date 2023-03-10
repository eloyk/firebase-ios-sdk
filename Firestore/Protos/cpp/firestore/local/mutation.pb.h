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

#ifndef GOOGLE_PROTOBUF_INCLUDED_firestore_2flocal_2fmutation_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_firestore_2flocal_2fmutation_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/firestore/v1/write.pb.h"
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_firestore_2flocal_2fmutation_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_firestore_2flocal_2fmutation_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_firestore_2flocal_2fmutation_2eproto;
namespace firestore {
namespace client {
class MutationQueue;
class MutationQueueDefaultTypeInternal;
extern MutationQueueDefaultTypeInternal _MutationQueue_default_instance_;
class WriteBatch;
class WriteBatchDefaultTypeInternal;
extern WriteBatchDefaultTypeInternal _WriteBatch_default_instance_;
}  // namespace client
}  // namespace firestore
PROTOBUF_NAMESPACE_OPEN
template<> ::firestore::client::MutationQueue* Arena::CreateMaybeMessage<::firestore::client::MutationQueue>(Arena*);
template<> ::firestore::client::WriteBatch* Arena::CreateMaybeMessage<::firestore::client::WriteBatch>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace firestore {
namespace client {

// ===================================================================

class MutationQueue :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:firestore.client.MutationQueue) */ {
 public:
  MutationQueue();
  virtual ~MutationQueue();

  MutationQueue(const MutationQueue& from);
  MutationQueue(MutationQueue&& from) noexcept
    : MutationQueue() {
    *this = ::std::move(from);
  }

  inline MutationQueue& operator=(const MutationQueue& from) {
    CopyFrom(from);
    return *this;
  }
  inline MutationQueue& operator=(MutationQueue&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const MutationQueue& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MutationQueue* internal_default_instance() {
    return reinterpret_cast<const MutationQueue*>(
               &_MutationQueue_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MutationQueue& a, MutationQueue& b) {
    a.Swap(&b);
  }
  inline void Swap(MutationQueue* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MutationQueue* New() const final {
    return CreateMaybeMessage<MutationQueue>(nullptr);
  }

  MutationQueue* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MutationQueue>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MutationQueue& from);
  void MergeFrom(const MutationQueue& from);
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
  void InternalSwap(MutationQueue* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "firestore.client.MutationQueue";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_firestore_2flocal_2fmutation_2eproto);
    return ::descriptor_table_firestore_2flocal_2fmutation_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLastStreamTokenFieldNumber = 2,
    kLastAcknowledgedBatchIdFieldNumber = 1,
  };
  // bytes last_stream_token = 2;
  void clear_last_stream_token();
  const std::string& last_stream_token() const;
  void set_last_stream_token(const std::string& value);
  void set_last_stream_token(std::string&& value);
  void set_last_stream_token(const char* value);
  void set_last_stream_token(const void* value, size_t size);
  std::string* mutable_last_stream_token();
  std::string* release_last_stream_token();
  void set_allocated_last_stream_token(std::string* last_stream_token);
  private:
  const std::string& _internal_last_stream_token() const;
  void _internal_set_last_stream_token(const std::string& value);
  std::string* _internal_mutable_last_stream_token();
  public:

  // int32 last_acknowledged_batch_id = 1;
  void clear_last_acknowledged_batch_id();
  ::PROTOBUF_NAMESPACE_ID::int32 last_acknowledged_batch_id() const;
  void set_last_acknowledged_batch_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_last_acknowledged_batch_id() const;
  void _internal_set_last_acknowledged_batch_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:firestore.client.MutationQueue)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr last_stream_token_;
  ::PROTOBUF_NAMESPACE_ID::int32 last_acknowledged_batch_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_firestore_2flocal_2fmutation_2eproto;
};
// -------------------------------------------------------------------

class WriteBatch :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:firestore.client.WriteBatch) */ {
 public:
  WriteBatch();
  virtual ~WriteBatch();

  WriteBatch(const WriteBatch& from);
  WriteBatch(WriteBatch&& from) noexcept
    : WriteBatch() {
    *this = ::std::move(from);
  }

  inline WriteBatch& operator=(const WriteBatch& from) {
    CopyFrom(from);
    return *this;
  }
  inline WriteBatch& operator=(WriteBatch&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const WriteBatch& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WriteBatch* internal_default_instance() {
    return reinterpret_cast<const WriteBatch*>(
               &_WriteBatch_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(WriteBatch& a, WriteBatch& b) {
    a.Swap(&b);
  }
  inline void Swap(WriteBatch* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WriteBatch* New() const final {
    return CreateMaybeMessage<WriteBatch>(nullptr);
  }

  WriteBatch* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WriteBatch>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WriteBatch& from);
  void MergeFrom(const WriteBatch& from);
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
  void InternalSwap(WriteBatch* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "firestore.client.WriteBatch";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_firestore_2flocal_2fmutation_2eproto);
    return ::descriptor_table_firestore_2flocal_2fmutation_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWritesFieldNumber = 2,
    kBaseWritesFieldNumber = 4,
    kLocalWriteTimeFieldNumber = 3,
    kBatchIdFieldNumber = 1,
  };
  // repeated .google.firestore.v1.Write writes = 2;
  int writes_size() const;
  private:
  int _internal_writes_size() const;
  public:
  void clear_writes();
  ::google::firestore::v1::Write* mutable_writes(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::firestore::v1::Write >*
      mutable_writes();
  private:
  const ::google::firestore::v1::Write& _internal_writes(int index) const;
  ::google::firestore::v1::Write* _internal_add_writes();
  public:
  const ::google::firestore::v1::Write& writes(int index) const;
  ::google::firestore::v1::Write* add_writes();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::firestore::v1::Write >&
      writes() const;

  // repeated .google.firestore.v1.Write base_writes = 4;
  int base_writes_size() const;
  private:
  int _internal_base_writes_size() const;
  public:
  void clear_base_writes();
  ::google::firestore::v1::Write* mutable_base_writes(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::firestore::v1::Write >*
      mutable_base_writes();
  private:
  const ::google::firestore::v1::Write& _internal_base_writes(int index) const;
  ::google::firestore::v1::Write* _internal_add_base_writes();
  public:
  const ::google::firestore::v1::Write& base_writes(int index) const;
  ::google::firestore::v1::Write* add_base_writes();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::firestore::v1::Write >&
      base_writes() const;

  // .google.protobuf.Timestamp local_write_time = 3;
  bool has_local_write_time() const;
  private:
  bool _internal_has_local_write_time() const;
  public:
  void clear_local_write_time();
  const PROTOBUF_NAMESPACE_ID::Timestamp& local_write_time() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_local_write_time();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_local_write_time();
  void set_allocated_local_write_time(PROTOBUF_NAMESPACE_ID::Timestamp* local_write_time);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_local_write_time() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_local_write_time();
  public:

  // int32 batch_id = 1;
  void clear_batch_id();
  ::PROTOBUF_NAMESPACE_ID::int32 batch_id() const;
  void set_batch_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_batch_id() const;
  void _internal_set_batch_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:firestore.client.WriteBatch)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::firestore::v1::Write > writes_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::firestore::v1::Write > base_writes_;
  PROTOBUF_NAMESPACE_ID::Timestamp* local_write_time_;
  ::PROTOBUF_NAMESPACE_ID::int32 batch_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_firestore_2flocal_2fmutation_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MutationQueue

// int32 last_acknowledged_batch_id = 1;
inline void MutationQueue::clear_last_acknowledged_batch_id() {
  last_acknowledged_batch_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MutationQueue::_internal_last_acknowledged_batch_id() const {
  return last_acknowledged_batch_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MutationQueue::last_acknowledged_batch_id() const {
  // @@protoc_insertion_point(field_get:firestore.client.MutationQueue.last_acknowledged_batch_id)
  return _internal_last_acknowledged_batch_id();
}
inline void MutationQueue::_internal_set_last_acknowledged_batch_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  last_acknowledged_batch_id_ = value;
}
inline void MutationQueue::set_last_acknowledged_batch_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_last_acknowledged_batch_id(value);
  // @@protoc_insertion_point(field_set:firestore.client.MutationQueue.last_acknowledged_batch_id)
}

// bytes last_stream_token = 2;
inline void MutationQueue::clear_last_stream_token() {
  last_stream_token_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& MutationQueue::last_stream_token() const {
  // @@protoc_insertion_point(field_get:firestore.client.MutationQueue.last_stream_token)
  return _internal_last_stream_token();
}
inline void MutationQueue::set_last_stream_token(const std::string& value) {
  _internal_set_last_stream_token(value);
  // @@protoc_insertion_point(field_set:firestore.client.MutationQueue.last_stream_token)
}
inline std::string* MutationQueue::mutable_last_stream_token() {
  // @@protoc_insertion_point(field_mutable:firestore.client.MutationQueue.last_stream_token)
  return _internal_mutable_last_stream_token();
}
inline const std::string& MutationQueue::_internal_last_stream_token() const {
  return last_stream_token_.GetNoArena();
}
inline void MutationQueue::_internal_set_last_stream_token(const std::string& value) {
  
  last_stream_token_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void MutationQueue::set_last_stream_token(std::string&& value) {
  
  last_stream_token_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:firestore.client.MutationQueue.last_stream_token)
}
inline void MutationQueue::set_last_stream_token(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  last_stream_token_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firestore.client.MutationQueue.last_stream_token)
}
inline void MutationQueue::set_last_stream_token(const void* value, size_t size) {
  
  last_stream_token_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firestore.client.MutationQueue.last_stream_token)
}
inline std::string* MutationQueue::_internal_mutable_last_stream_token() {
  
  return last_stream_token_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* MutationQueue::release_last_stream_token() {
  // @@protoc_insertion_point(field_release:firestore.client.MutationQueue.last_stream_token)
  
  return last_stream_token_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void MutationQueue::set_allocated_last_stream_token(std::string* last_stream_token) {
  if (last_stream_token != nullptr) {
    
  } else {
    
  }
  last_stream_token_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), last_stream_token);
  // @@protoc_insertion_point(field_set_allocated:firestore.client.MutationQueue.last_stream_token)
}

// -------------------------------------------------------------------

// WriteBatch

// int32 batch_id = 1;
inline void WriteBatch::clear_batch_id() {
  batch_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 WriteBatch::_internal_batch_id() const {
  return batch_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 WriteBatch::batch_id() const {
  // @@protoc_insertion_point(field_get:firestore.client.WriteBatch.batch_id)
  return _internal_batch_id();
}
inline void WriteBatch::_internal_set_batch_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  batch_id_ = value;
}
inline void WriteBatch::set_batch_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_batch_id(value);
  // @@protoc_insertion_point(field_set:firestore.client.WriteBatch.batch_id)
}

// repeated .google.firestore.v1.Write writes = 2;
inline int WriteBatch::_internal_writes_size() const {
  return writes_.size();
}
inline int WriteBatch::writes_size() const {
  return _internal_writes_size();
}
inline ::google::firestore::v1::Write* WriteBatch::mutable_writes(int index) {
  // @@protoc_insertion_point(field_mutable:firestore.client.WriteBatch.writes)
  return writes_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::firestore::v1::Write >*
WriteBatch::mutable_writes() {
  // @@protoc_insertion_point(field_mutable_list:firestore.client.WriteBatch.writes)
  return &writes_;
}
inline const ::google::firestore::v1::Write& WriteBatch::_internal_writes(int index) const {
  return writes_.Get(index);
}
inline const ::google::firestore::v1::Write& WriteBatch::writes(int index) const {
  // @@protoc_insertion_point(field_get:firestore.client.WriteBatch.writes)
  return _internal_writes(index);
}
inline ::google::firestore::v1::Write* WriteBatch::_internal_add_writes() {
  return writes_.Add();
}
inline ::google::firestore::v1::Write* WriteBatch::add_writes() {
  // @@protoc_insertion_point(field_add:firestore.client.WriteBatch.writes)
  return _internal_add_writes();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::firestore::v1::Write >&
WriteBatch::writes() const {
  // @@protoc_insertion_point(field_list:firestore.client.WriteBatch.writes)
  return writes_;
}

// .google.protobuf.Timestamp local_write_time = 3;
inline bool WriteBatch::_internal_has_local_write_time() const {
  return this != internal_default_instance() && local_write_time_ != nullptr;
}
inline bool WriteBatch::has_local_write_time() const {
  return _internal_has_local_write_time();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& WriteBatch::_internal_local_write_time() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = local_write_time_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& WriteBatch::local_write_time() const {
  // @@protoc_insertion_point(field_get:firestore.client.WriteBatch.local_write_time)
  return _internal_local_write_time();
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* WriteBatch::release_local_write_time() {
  // @@protoc_insertion_point(field_release:firestore.client.WriteBatch.local_write_time)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = local_write_time_;
  local_write_time_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* WriteBatch::_internal_mutable_local_write_time() {
  
  if (local_write_time_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaNoVirtual());
    local_write_time_ = p;
  }
  return local_write_time_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* WriteBatch::mutable_local_write_time() {
  // @@protoc_insertion_point(field_mutable:firestore.client.WriteBatch.local_write_time)
  return _internal_mutable_local_write_time();
}
inline void WriteBatch::set_allocated_local_write_time(PROTOBUF_NAMESPACE_ID::Timestamp* local_write_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(local_write_time_);
  }
  if (local_write_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(local_write_time)->GetArena();
    if (message_arena != submessage_arena) {
      local_write_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, local_write_time, submessage_arena);
    }
    
  } else {
    
  }
  local_write_time_ = local_write_time;
  // @@protoc_insertion_point(field_set_allocated:firestore.client.WriteBatch.local_write_time)
}

// repeated .google.firestore.v1.Write base_writes = 4;
inline int WriteBatch::_internal_base_writes_size() const {
  return base_writes_.size();
}
inline int WriteBatch::base_writes_size() const {
  return _internal_base_writes_size();
}
inline ::google::firestore::v1::Write* WriteBatch::mutable_base_writes(int index) {
  // @@protoc_insertion_point(field_mutable:firestore.client.WriteBatch.base_writes)
  return base_writes_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::firestore::v1::Write >*
WriteBatch::mutable_base_writes() {
  // @@protoc_insertion_point(field_mutable_list:firestore.client.WriteBatch.base_writes)
  return &base_writes_;
}
inline const ::google::firestore::v1::Write& WriteBatch::_internal_base_writes(int index) const {
  return base_writes_.Get(index);
}
inline const ::google::firestore::v1::Write& WriteBatch::base_writes(int index) const {
  // @@protoc_insertion_point(field_get:firestore.client.WriteBatch.base_writes)
  return _internal_base_writes(index);
}
inline ::google::firestore::v1::Write* WriteBatch::_internal_add_base_writes() {
  return base_writes_.Add();
}
inline ::google::firestore::v1::Write* WriteBatch::add_base_writes() {
  // @@protoc_insertion_point(field_add:firestore.client.WriteBatch.base_writes)
  return _internal_add_base_writes();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::firestore::v1::Write >&
WriteBatch::base_writes() const {
  // @@protoc_insertion_point(field_list:firestore.client.WriteBatch.base_writes)
  return base_writes_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace client
}  // namespace firestore

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_firestore_2flocal_2fmutation_2eproto
