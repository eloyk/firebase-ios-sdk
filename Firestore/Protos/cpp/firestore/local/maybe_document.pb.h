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
// source: firestore/local/maybe_document.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_firestore_2flocal_2fmaybe_5fdocument_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_firestore_2flocal_2fmaybe_5fdocument_2eproto

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
#include "google/firestore/v1/document.pb.h"
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_firestore_2flocal_2fmaybe_5fdocument_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_firestore_2flocal_2fmaybe_5fdocument_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_firestore_2flocal_2fmaybe_5fdocument_2eproto;
namespace firestore {
namespace client {
class MaybeDocument;
class MaybeDocumentDefaultTypeInternal;
extern MaybeDocumentDefaultTypeInternal _MaybeDocument_default_instance_;
class NoDocument;
class NoDocumentDefaultTypeInternal;
extern NoDocumentDefaultTypeInternal _NoDocument_default_instance_;
class UnknownDocument;
class UnknownDocumentDefaultTypeInternal;
extern UnknownDocumentDefaultTypeInternal _UnknownDocument_default_instance_;
}  // namespace client
}  // namespace firestore
PROTOBUF_NAMESPACE_OPEN
template<> ::firestore::client::MaybeDocument* Arena::CreateMaybeMessage<::firestore::client::MaybeDocument>(Arena*);
template<> ::firestore::client::NoDocument* Arena::CreateMaybeMessage<::firestore::client::NoDocument>(Arena*);
template<> ::firestore::client::UnknownDocument* Arena::CreateMaybeMessage<::firestore::client::UnknownDocument>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace firestore {
namespace client {

// ===================================================================

class NoDocument :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:firestore.client.NoDocument) */ {
 public:
  NoDocument();
  virtual ~NoDocument();

  NoDocument(const NoDocument& from);
  NoDocument(NoDocument&& from) noexcept
    : NoDocument() {
    *this = ::std::move(from);
  }

  inline NoDocument& operator=(const NoDocument& from) {
    CopyFrom(from);
    return *this;
  }
  inline NoDocument& operator=(NoDocument&& from) noexcept {
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
  static const NoDocument& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NoDocument* internal_default_instance() {
    return reinterpret_cast<const NoDocument*>(
               &_NoDocument_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NoDocument& a, NoDocument& b) {
    a.Swap(&b);
  }
  inline void Swap(NoDocument* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NoDocument* New() const final {
    return CreateMaybeMessage<NoDocument>(nullptr);
  }

  NoDocument* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NoDocument>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NoDocument& from);
  void MergeFrom(const NoDocument& from);
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
  void InternalSwap(NoDocument* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "firestore.client.NoDocument";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_firestore_2flocal_2fmaybe_5fdocument_2eproto);
    return ::descriptor_table_firestore_2flocal_2fmaybe_5fdocument_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kReadTimeFieldNumber = 2,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // .google.protobuf.Timestamp read_time = 2;
  bool has_read_time() const;
  private:
  bool _internal_has_read_time() const;
  public:
  void clear_read_time();
  const PROTOBUF_NAMESPACE_ID::Timestamp& read_time() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_read_time();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_read_time();
  void set_allocated_read_time(PROTOBUF_NAMESPACE_ID::Timestamp* read_time);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_read_time() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_read_time();
  public:

  // @@protoc_insertion_point(class_scope:firestore.client.NoDocument)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  PROTOBUF_NAMESPACE_ID::Timestamp* read_time_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_firestore_2flocal_2fmaybe_5fdocument_2eproto;
};
// -------------------------------------------------------------------

class UnknownDocument :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:firestore.client.UnknownDocument) */ {
 public:
  UnknownDocument();
  virtual ~UnknownDocument();

  UnknownDocument(const UnknownDocument& from);
  UnknownDocument(UnknownDocument&& from) noexcept
    : UnknownDocument() {
    *this = ::std::move(from);
  }

  inline UnknownDocument& operator=(const UnknownDocument& from) {
    CopyFrom(from);
    return *this;
  }
  inline UnknownDocument& operator=(UnknownDocument&& from) noexcept {
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
  static const UnknownDocument& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UnknownDocument* internal_default_instance() {
    return reinterpret_cast<const UnknownDocument*>(
               &_UnknownDocument_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(UnknownDocument& a, UnknownDocument& b) {
    a.Swap(&b);
  }
  inline void Swap(UnknownDocument* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline UnknownDocument* New() const final {
    return CreateMaybeMessage<UnknownDocument>(nullptr);
  }

  UnknownDocument* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<UnknownDocument>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const UnknownDocument& from);
  void MergeFrom(const UnknownDocument& from);
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
  void InternalSwap(UnknownDocument* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "firestore.client.UnknownDocument";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_firestore_2flocal_2fmaybe_5fdocument_2eproto);
    return ::descriptor_table_firestore_2flocal_2fmaybe_5fdocument_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kVersionFieldNumber = 2,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // .google.protobuf.Timestamp version = 2;
  bool has_version() const;
  private:
  bool _internal_has_version() const;
  public:
  void clear_version();
  const PROTOBUF_NAMESPACE_ID::Timestamp& version() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_version();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_version();
  void set_allocated_version(PROTOBUF_NAMESPACE_ID::Timestamp* version);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_version() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_version();
  public:

  // @@protoc_insertion_point(class_scope:firestore.client.UnknownDocument)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  PROTOBUF_NAMESPACE_ID::Timestamp* version_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_firestore_2flocal_2fmaybe_5fdocument_2eproto;
};
// -------------------------------------------------------------------

class MaybeDocument :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:firestore.client.MaybeDocument) */ {
 public:
  MaybeDocument();
  virtual ~MaybeDocument();

  MaybeDocument(const MaybeDocument& from);
  MaybeDocument(MaybeDocument&& from) noexcept
    : MaybeDocument() {
    *this = ::std::move(from);
  }

  inline MaybeDocument& operator=(const MaybeDocument& from) {
    CopyFrom(from);
    return *this;
  }
  inline MaybeDocument& operator=(MaybeDocument&& from) noexcept {
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
  static const MaybeDocument& default_instance();

  enum DocumentTypeCase {
    kNoDocument = 1,
    kDocument = 2,
    kUnknownDocument = 3,
    DOCUMENT_TYPE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MaybeDocument* internal_default_instance() {
    return reinterpret_cast<const MaybeDocument*>(
               &_MaybeDocument_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(MaybeDocument& a, MaybeDocument& b) {
    a.Swap(&b);
  }
  inline void Swap(MaybeDocument* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MaybeDocument* New() const final {
    return CreateMaybeMessage<MaybeDocument>(nullptr);
  }

  MaybeDocument* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MaybeDocument>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MaybeDocument& from);
  void MergeFrom(const MaybeDocument& from);
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
  void InternalSwap(MaybeDocument* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "firestore.client.MaybeDocument";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_firestore_2flocal_2fmaybe_5fdocument_2eproto);
    return ::descriptor_table_firestore_2flocal_2fmaybe_5fdocument_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHasCommittedMutationsFieldNumber = 4,
    kNoDocumentFieldNumber = 1,
    kDocumentFieldNumber = 2,
    kUnknownDocumentFieldNumber = 3,
  };
  // bool has_committed_mutations = 4;
  void clear_has_committed_mutations();
  bool has_committed_mutations() const;
  void set_has_committed_mutations(bool value);
  private:
  bool _internal_has_committed_mutations() const;
  void _internal_set_has_committed_mutations(bool value);
  public:

  // .firestore.client.NoDocument no_document = 1;
  bool has_no_document() const;
  private:
  bool _internal_has_no_document() const;
  public:
  void clear_no_document();
  const ::firestore::client::NoDocument& no_document() const;
  ::firestore::client::NoDocument* release_no_document();
  ::firestore::client::NoDocument* mutable_no_document();
  void set_allocated_no_document(::firestore::client::NoDocument* no_document);
  private:
  const ::firestore::client::NoDocument& _internal_no_document() const;
  ::firestore::client::NoDocument* _internal_mutable_no_document();
  public:

  // .google.firestore.v1.Document document = 2;
  bool has_document() const;
  private:
  bool _internal_has_document() const;
  public:
  void clear_document();
  const ::google::firestore::v1::Document& document() const;
  ::google::firestore::v1::Document* release_document();
  ::google::firestore::v1::Document* mutable_document();
  void set_allocated_document(::google::firestore::v1::Document* document);
  private:
  const ::google::firestore::v1::Document& _internal_document() const;
  ::google::firestore::v1::Document* _internal_mutable_document();
  public:

  // .firestore.client.UnknownDocument unknown_document = 3;
  bool has_unknown_document() const;
  private:
  bool _internal_has_unknown_document() const;
  public:
  void clear_unknown_document();
  const ::firestore::client::UnknownDocument& unknown_document() const;
  ::firestore::client::UnknownDocument* release_unknown_document();
  ::firestore::client::UnknownDocument* mutable_unknown_document();
  void set_allocated_unknown_document(::firestore::client::UnknownDocument* unknown_document);
  private:
  const ::firestore::client::UnknownDocument& _internal_unknown_document() const;
  ::firestore::client::UnknownDocument* _internal_mutable_unknown_document();
  public:

  void clear_document_type();
  DocumentTypeCase document_type_case() const;
  // @@protoc_insertion_point(class_scope:firestore.client.MaybeDocument)
 private:
  class _Internal;
  void set_has_no_document();
  void set_has_document();
  void set_has_unknown_document();

  inline bool has_document_type() const;
  inline void clear_has_document_type();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  bool has_committed_mutations_;
  union DocumentTypeUnion {
    DocumentTypeUnion() {}
    ::firestore::client::NoDocument* no_document_;
    ::google::firestore::v1::Document* document_;
    ::firestore::client::UnknownDocument* unknown_document_;
  } document_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_firestore_2flocal_2fmaybe_5fdocument_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NoDocument

// string name = 1;
inline void NoDocument::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& NoDocument::name() const {
  // @@protoc_insertion_point(field_get:firestore.client.NoDocument.name)
  return _internal_name();
}
inline void NoDocument::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:firestore.client.NoDocument.name)
}
inline std::string* NoDocument::mutable_name() {
  // @@protoc_insertion_point(field_mutable:firestore.client.NoDocument.name)
  return _internal_mutable_name();
}
inline const std::string& NoDocument::_internal_name() const {
  return name_.GetNoArena();
}
inline void NoDocument::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void NoDocument::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:firestore.client.NoDocument.name)
}
inline void NoDocument::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firestore.client.NoDocument.name)
}
inline void NoDocument::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firestore.client.NoDocument.name)
}
inline std::string* NoDocument::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* NoDocument::release_name() {
  // @@protoc_insertion_point(field_release:firestore.client.NoDocument.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void NoDocument::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:firestore.client.NoDocument.name)
}

// .google.protobuf.Timestamp read_time = 2;
inline bool NoDocument::_internal_has_read_time() const {
  return this != internal_default_instance() && read_time_ != nullptr;
}
inline bool NoDocument::has_read_time() const {
  return _internal_has_read_time();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& NoDocument::_internal_read_time() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = read_time_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& NoDocument::read_time() const {
  // @@protoc_insertion_point(field_get:firestore.client.NoDocument.read_time)
  return _internal_read_time();
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* NoDocument::release_read_time() {
  // @@protoc_insertion_point(field_release:firestore.client.NoDocument.read_time)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = read_time_;
  read_time_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* NoDocument::_internal_mutable_read_time() {
  
  if (read_time_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaNoVirtual());
    read_time_ = p;
  }
  return read_time_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* NoDocument::mutable_read_time() {
  // @@protoc_insertion_point(field_mutable:firestore.client.NoDocument.read_time)
  return _internal_mutable_read_time();
}
inline void NoDocument::set_allocated_read_time(PROTOBUF_NAMESPACE_ID::Timestamp* read_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(read_time_);
  }
  if (read_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(read_time)->GetArena();
    if (message_arena != submessage_arena) {
      read_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, read_time, submessage_arena);
    }
    
  } else {
    
  }
  read_time_ = read_time;
  // @@protoc_insertion_point(field_set_allocated:firestore.client.NoDocument.read_time)
}

// -------------------------------------------------------------------

// UnknownDocument

// string name = 1;
inline void UnknownDocument::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& UnknownDocument::name() const {
  // @@protoc_insertion_point(field_get:firestore.client.UnknownDocument.name)
  return _internal_name();
}
inline void UnknownDocument::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:firestore.client.UnknownDocument.name)
}
inline std::string* UnknownDocument::mutable_name() {
  // @@protoc_insertion_point(field_mutable:firestore.client.UnknownDocument.name)
  return _internal_mutable_name();
}
inline const std::string& UnknownDocument::_internal_name() const {
  return name_.GetNoArena();
}
inline void UnknownDocument::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void UnknownDocument::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:firestore.client.UnknownDocument.name)
}
inline void UnknownDocument::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firestore.client.UnknownDocument.name)
}
inline void UnknownDocument::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firestore.client.UnknownDocument.name)
}
inline std::string* UnknownDocument::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* UnknownDocument::release_name() {
  // @@protoc_insertion_point(field_release:firestore.client.UnknownDocument.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void UnknownDocument::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:firestore.client.UnknownDocument.name)
}

// .google.protobuf.Timestamp version = 2;
inline bool UnknownDocument::_internal_has_version() const {
  return this != internal_default_instance() && version_ != nullptr;
}
inline bool UnknownDocument::has_version() const {
  return _internal_has_version();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& UnknownDocument::_internal_version() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = version_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& UnknownDocument::version() const {
  // @@protoc_insertion_point(field_get:firestore.client.UnknownDocument.version)
  return _internal_version();
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* UnknownDocument::release_version() {
  // @@protoc_insertion_point(field_release:firestore.client.UnknownDocument.version)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = version_;
  version_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* UnknownDocument::_internal_mutable_version() {
  
  if (version_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaNoVirtual());
    version_ = p;
  }
  return version_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* UnknownDocument::mutable_version() {
  // @@protoc_insertion_point(field_mutable:firestore.client.UnknownDocument.version)
  return _internal_mutable_version();
}
inline void UnknownDocument::set_allocated_version(PROTOBUF_NAMESPACE_ID::Timestamp* version) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(version_);
  }
  if (version) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(version)->GetArena();
    if (message_arena != submessage_arena) {
      version = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, version, submessage_arena);
    }
    
  } else {
    
  }
  version_ = version;
  // @@protoc_insertion_point(field_set_allocated:firestore.client.UnknownDocument.version)
}

// -------------------------------------------------------------------

// MaybeDocument

// .firestore.client.NoDocument no_document = 1;
inline bool MaybeDocument::_internal_has_no_document() const {
  return document_type_case() == kNoDocument;
}
inline bool MaybeDocument::has_no_document() const {
  return _internal_has_no_document();
}
inline void MaybeDocument::set_has_no_document() {
  _oneof_case_[0] = kNoDocument;
}
inline void MaybeDocument::clear_no_document() {
  if (_internal_has_no_document()) {
    delete document_type_.no_document_;
    clear_has_document_type();
  }
}
inline ::firestore::client::NoDocument* MaybeDocument::release_no_document() {
  // @@protoc_insertion_point(field_release:firestore.client.MaybeDocument.no_document)
  if (_internal_has_no_document()) {
    clear_has_document_type();
      ::firestore::client::NoDocument* temp = document_type_.no_document_;
    document_type_.no_document_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::firestore::client::NoDocument& MaybeDocument::_internal_no_document() const {
  return _internal_has_no_document()
      ? *document_type_.no_document_
      : *reinterpret_cast< ::firestore::client::NoDocument*>(&::firestore::client::_NoDocument_default_instance_);
}
inline const ::firestore::client::NoDocument& MaybeDocument::no_document() const {
  // @@protoc_insertion_point(field_get:firestore.client.MaybeDocument.no_document)
  return _internal_no_document();
}
inline ::firestore::client::NoDocument* MaybeDocument::_internal_mutable_no_document() {
  if (!_internal_has_no_document()) {
    clear_document_type();
    set_has_no_document();
    document_type_.no_document_ = CreateMaybeMessage< ::firestore::client::NoDocument >(
        GetArenaNoVirtual());
  }
  return document_type_.no_document_;
}
inline ::firestore::client::NoDocument* MaybeDocument::mutable_no_document() {
  // @@protoc_insertion_point(field_mutable:firestore.client.MaybeDocument.no_document)
  return _internal_mutable_no_document();
}

// .google.firestore.v1.Document document = 2;
inline bool MaybeDocument::_internal_has_document() const {
  return document_type_case() == kDocument;
}
inline bool MaybeDocument::has_document() const {
  return _internal_has_document();
}
inline void MaybeDocument::set_has_document() {
  _oneof_case_[0] = kDocument;
}
inline ::google::firestore::v1::Document* MaybeDocument::release_document() {
  // @@protoc_insertion_point(field_release:firestore.client.MaybeDocument.document)
  if (_internal_has_document()) {
    clear_has_document_type();
      ::google::firestore::v1::Document* temp = document_type_.document_;
    document_type_.document_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::firestore::v1::Document& MaybeDocument::_internal_document() const {
  return _internal_has_document()
      ? *document_type_.document_
      : *reinterpret_cast< ::google::firestore::v1::Document*>(&::google::firestore::v1::_Document_default_instance_);
}
inline const ::google::firestore::v1::Document& MaybeDocument::document() const {
  // @@protoc_insertion_point(field_get:firestore.client.MaybeDocument.document)
  return _internal_document();
}
inline ::google::firestore::v1::Document* MaybeDocument::_internal_mutable_document() {
  if (!_internal_has_document()) {
    clear_document_type();
    set_has_document();
    document_type_.document_ = CreateMaybeMessage< ::google::firestore::v1::Document >(
        GetArenaNoVirtual());
  }
  return document_type_.document_;
}
inline ::google::firestore::v1::Document* MaybeDocument::mutable_document() {
  // @@protoc_insertion_point(field_mutable:firestore.client.MaybeDocument.document)
  return _internal_mutable_document();
}

// .firestore.client.UnknownDocument unknown_document = 3;
inline bool MaybeDocument::_internal_has_unknown_document() const {
  return document_type_case() == kUnknownDocument;
}
inline bool MaybeDocument::has_unknown_document() const {
  return _internal_has_unknown_document();
}
inline void MaybeDocument::set_has_unknown_document() {
  _oneof_case_[0] = kUnknownDocument;
}
inline void MaybeDocument::clear_unknown_document() {
  if (_internal_has_unknown_document()) {
    delete document_type_.unknown_document_;
    clear_has_document_type();
  }
}
inline ::firestore::client::UnknownDocument* MaybeDocument::release_unknown_document() {
  // @@protoc_insertion_point(field_release:firestore.client.MaybeDocument.unknown_document)
  if (_internal_has_unknown_document()) {
    clear_has_document_type();
      ::firestore::client::UnknownDocument* temp = document_type_.unknown_document_;
    document_type_.unknown_document_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::firestore::client::UnknownDocument& MaybeDocument::_internal_unknown_document() const {
  return _internal_has_unknown_document()
      ? *document_type_.unknown_document_
      : *reinterpret_cast< ::firestore::client::UnknownDocument*>(&::firestore::client::_UnknownDocument_default_instance_);
}
inline const ::firestore::client::UnknownDocument& MaybeDocument::unknown_document() const {
  // @@protoc_insertion_point(field_get:firestore.client.MaybeDocument.unknown_document)
  return _internal_unknown_document();
}
inline ::firestore::client::UnknownDocument* MaybeDocument::_internal_mutable_unknown_document() {
  if (!_internal_has_unknown_document()) {
    clear_document_type();
    set_has_unknown_document();
    document_type_.unknown_document_ = CreateMaybeMessage< ::firestore::client::UnknownDocument >(
        GetArenaNoVirtual());
  }
  return document_type_.unknown_document_;
}
inline ::firestore::client::UnknownDocument* MaybeDocument::mutable_unknown_document() {
  // @@protoc_insertion_point(field_mutable:firestore.client.MaybeDocument.unknown_document)
  return _internal_mutable_unknown_document();
}

// bool has_committed_mutations = 4;
inline void MaybeDocument::clear_has_committed_mutations() {
  has_committed_mutations_ = false;
}
inline bool MaybeDocument::_internal_has_committed_mutations() const {
  return has_committed_mutations_;
}
inline bool MaybeDocument::has_committed_mutations() const {
  // @@protoc_insertion_point(field_get:firestore.client.MaybeDocument.has_committed_mutations)
  return _internal_has_committed_mutations();
}
inline void MaybeDocument::_internal_set_has_committed_mutations(bool value) {
  
  has_committed_mutations_ = value;
}
inline void MaybeDocument::set_has_committed_mutations(bool value) {
  _internal_set_has_committed_mutations(value);
  // @@protoc_insertion_point(field_set:firestore.client.MaybeDocument.has_committed_mutations)
}

inline bool MaybeDocument::has_document_type() const {
  return document_type_case() != DOCUMENT_TYPE_NOT_SET;
}
inline void MaybeDocument::clear_has_document_type() {
  _oneof_case_[0] = DOCUMENT_TYPE_NOT_SET;
}
inline MaybeDocument::DocumentTypeCase MaybeDocument::document_type_case() const {
  return MaybeDocument::DocumentTypeCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace client
}  // namespace firestore

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_firestore_2flocal_2fmaybe_5fdocument_2eproto