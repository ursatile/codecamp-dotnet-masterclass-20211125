// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: price.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_price_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_price_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_price_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_price_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_price_2eproto;
namespace price {
class PriceReply;
struct PriceReplyDefaultTypeInternal;
extern PriceReplyDefaultTypeInternal _PriceReply_default_instance_;
class PriceRequest;
struct PriceRequestDefaultTypeInternal;
extern PriceRequestDefaultTypeInternal _PriceRequest_default_instance_;
}  // namespace price
PROTOBUF_NAMESPACE_OPEN
template<> ::price::PriceReply* Arena::CreateMaybeMessage<::price::PriceReply>(Arena*);
template<> ::price::PriceRequest* Arena::CreateMaybeMessage<::price::PriceRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace price {

// ===================================================================

class PriceRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:price.PriceRequest) */ {
 public:
  inline PriceRequest() : PriceRequest(nullptr) {}
  ~PriceRequest() override;
  explicit constexpr PriceRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PriceRequest(const PriceRequest& from);
  PriceRequest(PriceRequest&& from) noexcept
    : PriceRequest() {
    *this = ::std::move(from);
  }

  inline PriceRequest& operator=(const PriceRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline PriceRequest& operator=(PriceRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const PriceRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const PriceRequest* internal_default_instance() {
    return reinterpret_cast<const PriceRequest*>(
               &_PriceRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PriceRequest& a, PriceRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(PriceRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PriceRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PriceRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PriceRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PriceRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const PriceRequest& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PriceRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "price.PriceRequest";
  }
  protected:
  explicit PriceRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kModelCodeFieldNumber = 1,
    kColorFieldNumber = 2,
    kYearFieldNumber = 3,
  };
  // string modelCode = 1;
  void clear_modelcode();
  const std::string& modelcode() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_modelcode(ArgT0&& arg0, ArgT... args);
  std::string* mutable_modelcode();
  PROTOBUF_NODISCARD std::string* release_modelcode();
  void set_allocated_modelcode(std::string* modelcode);
  private:
  const std::string& _internal_modelcode() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_modelcode(const std::string& value);
  std::string* _internal_mutable_modelcode();
  public:

  // string color = 2;
  void clear_color();
  const std::string& color() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_color(ArgT0&& arg0, ArgT... args);
  std::string* mutable_color();
  PROTOBUF_NODISCARD std::string* release_color();
  void set_allocated_color(std::string* color);
  private:
  const std::string& _internal_color() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_color(const std::string& value);
  std::string* _internal_mutable_color();
  public:

  // int32 year = 3;
  void clear_year();
  int32_t year() const;
  void set_year(int32_t value);
  private:
  int32_t _internal_year() const;
  void _internal_set_year(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:price.PriceRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr modelcode_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr color_;
  int32_t year_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_price_2eproto;
};
// -------------------------------------------------------------------

class PriceReply final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:price.PriceReply) */ {
 public:
  inline PriceReply() : PriceReply(nullptr) {}
  ~PriceReply() override;
  explicit constexpr PriceReply(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PriceReply(const PriceReply& from);
  PriceReply(PriceReply&& from) noexcept
    : PriceReply() {
    *this = ::std::move(from);
  }

  inline PriceReply& operator=(const PriceReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline PriceReply& operator=(PriceReply&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const PriceReply& default_instance() {
    return *internal_default_instance();
  }
  static inline const PriceReply* internal_default_instance() {
    return reinterpret_cast<const PriceReply*>(
               &_PriceReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PriceReply& a, PriceReply& b) {
    a.Swap(&b);
  }
  inline void Swap(PriceReply* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PriceReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PriceReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PriceReply>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PriceReply& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const PriceReply& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PriceReply* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "price.PriceReply";
  }
  protected:
  explicit PriceReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCurrencyCodeFieldNumber = 2,
    kPriceFieldNumber = 1,
  };
  // string currencyCode = 2;
  void clear_currencycode();
  const std::string& currencycode() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_currencycode(ArgT0&& arg0, ArgT... args);
  std::string* mutable_currencycode();
  PROTOBUF_NODISCARD std::string* release_currencycode();
  void set_allocated_currencycode(std::string* currencycode);
  private:
  const std::string& _internal_currencycode() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_currencycode(const std::string& value);
  std::string* _internal_mutable_currencycode();
  public:

  // int32 price = 1;
  void clear_price();
  int32_t price() const;
  void set_price(int32_t value);
  private:
  int32_t _internal_price() const;
  void _internal_set_price(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:price.PriceReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr currencycode_;
  int32_t price_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_price_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PriceRequest

// string modelCode = 1;
inline void PriceRequest::clear_modelcode() {
  modelcode_.ClearToEmpty();
}
inline const std::string& PriceRequest::modelcode() const {
  // @@protoc_insertion_point(field_get:price.PriceRequest.modelCode)
  return _internal_modelcode();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PriceRequest::set_modelcode(ArgT0&& arg0, ArgT... args) {
 
 modelcode_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:price.PriceRequest.modelCode)
}
inline std::string* PriceRequest::mutable_modelcode() {
  std::string* _s = _internal_mutable_modelcode();
  // @@protoc_insertion_point(field_mutable:price.PriceRequest.modelCode)
  return _s;
}
inline const std::string& PriceRequest::_internal_modelcode() const {
  return modelcode_.Get();
}
inline void PriceRequest::_internal_set_modelcode(const std::string& value) {
  
  modelcode_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PriceRequest::_internal_mutable_modelcode() {
  
  return modelcode_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PriceRequest::release_modelcode() {
  // @@protoc_insertion_point(field_release:price.PriceRequest.modelCode)
  return modelcode_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PriceRequest::set_allocated_modelcode(std::string* modelcode) {
  if (modelcode != nullptr) {
    
  } else {
    
  }
  modelcode_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), modelcode,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (modelcode_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    modelcode_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:price.PriceRequest.modelCode)
}

// string color = 2;
inline void PriceRequest::clear_color() {
  color_.ClearToEmpty();
}
inline const std::string& PriceRequest::color() const {
  // @@protoc_insertion_point(field_get:price.PriceRequest.color)
  return _internal_color();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PriceRequest::set_color(ArgT0&& arg0, ArgT... args) {
 
 color_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:price.PriceRequest.color)
}
inline std::string* PriceRequest::mutable_color() {
  std::string* _s = _internal_mutable_color();
  // @@protoc_insertion_point(field_mutable:price.PriceRequest.color)
  return _s;
}
inline const std::string& PriceRequest::_internal_color() const {
  return color_.Get();
}
inline void PriceRequest::_internal_set_color(const std::string& value) {
  
  color_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PriceRequest::_internal_mutable_color() {
  
  return color_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PriceRequest::release_color() {
  // @@protoc_insertion_point(field_release:price.PriceRequest.color)
  return color_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PriceRequest::set_allocated_color(std::string* color) {
  if (color != nullptr) {
    
  } else {
    
  }
  color_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), color,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (color_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    color_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:price.PriceRequest.color)
}

// int32 year = 3;
inline void PriceRequest::clear_year() {
  year_ = 0;
}
inline int32_t PriceRequest::_internal_year() const {
  return year_;
}
inline int32_t PriceRequest::year() const {
  // @@protoc_insertion_point(field_get:price.PriceRequest.year)
  return _internal_year();
}
inline void PriceRequest::_internal_set_year(int32_t value) {
  
  year_ = value;
}
inline void PriceRequest::set_year(int32_t value) {
  _internal_set_year(value);
  // @@protoc_insertion_point(field_set:price.PriceRequest.year)
}

// -------------------------------------------------------------------

// PriceReply

// int32 price = 1;
inline void PriceReply::clear_price() {
  price_ = 0;
}
inline int32_t PriceReply::_internal_price() const {
  return price_;
}
inline int32_t PriceReply::price() const {
  // @@protoc_insertion_point(field_get:price.PriceReply.price)
  return _internal_price();
}
inline void PriceReply::_internal_set_price(int32_t value) {
  
  price_ = value;
}
inline void PriceReply::set_price(int32_t value) {
  _internal_set_price(value);
  // @@protoc_insertion_point(field_set:price.PriceReply.price)
}

// string currencyCode = 2;
inline void PriceReply::clear_currencycode() {
  currencycode_.ClearToEmpty();
}
inline const std::string& PriceReply::currencycode() const {
  // @@protoc_insertion_point(field_get:price.PriceReply.currencyCode)
  return _internal_currencycode();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PriceReply::set_currencycode(ArgT0&& arg0, ArgT... args) {
 
 currencycode_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:price.PriceReply.currencyCode)
}
inline std::string* PriceReply::mutable_currencycode() {
  std::string* _s = _internal_mutable_currencycode();
  // @@protoc_insertion_point(field_mutable:price.PriceReply.currencyCode)
  return _s;
}
inline const std::string& PriceReply::_internal_currencycode() const {
  return currencycode_.Get();
}
inline void PriceReply::_internal_set_currencycode(const std::string& value) {
  
  currencycode_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PriceReply::_internal_mutable_currencycode() {
  
  return currencycode_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PriceReply::release_currencycode() {
  // @@protoc_insertion_point(field_release:price.PriceReply.currencyCode)
  return currencycode_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PriceReply::set_allocated_currencycode(std::string* currencycode) {
  if (currencycode != nullptr) {
    
  } else {
    
  }
  currencycode_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), currencycode,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (currencycode_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    currencycode_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:price.PriceReply.currencyCode)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace price

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_price_2eproto