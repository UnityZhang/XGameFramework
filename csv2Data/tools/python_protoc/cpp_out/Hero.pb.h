// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Hero.proto

#ifndef PROTOBUF_Hero_2eproto__INCLUDED
#define PROTOBUF_Hero_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace dbc {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Hero_2eproto();
void protobuf_AssignDesc_Hero_2eproto();
void protobuf_ShutdownFile_Hero_2eproto();

class HeroTable;
class Hero;

// ===================================================================

class HeroTable : public ::google::protobuf::Message {
 public:
  HeroTable();
  virtual ~HeroTable();

  HeroTable(const HeroTable& from);

  inline HeroTable& operator=(const HeroTable& from) {
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
  static const HeroTable& default_instance();

  void Swap(HeroTable* other);

  // implements Message ----------------------------------------------

  HeroTable* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HeroTable& from);
  void MergeFrom(const HeroTable& from);
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

  // optional string tname = 1;
  inline bool has_tname() const;
  inline void clear_tname();
  static const int kTnameFieldNumber = 1;
  inline const ::std::string& tname() const;
  inline void set_tname(const ::std::string& value);
  inline void set_tname(const char* value);
  inline void set_tname(const char* value, size_t size);
  inline ::std::string* mutable_tname();
  inline ::std::string* release_tname();
  inline void set_allocated_tname(::std::string* tname);

  // repeated .dbc.Hero tlist = 2;
  inline int tlist_size() const;
  inline void clear_tlist();
  static const int kTlistFieldNumber = 2;
  inline const ::dbc::Hero& tlist(int index) const;
  inline ::dbc::Hero* mutable_tlist(int index);
  inline ::dbc::Hero* add_tlist();
  inline const ::google::protobuf::RepeatedPtrField< ::dbc::Hero >&
      tlist() const;
  inline ::google::protobuf::RepeatedPtrField< ::dbc::Hero >*
      mutable_tlist();

  // @@protoc_insertion_point(class_scope:dbc.HeroTable)
 private:
  inline void set_has_tname();
  inline void clear_has_tname();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* tname_;
  ::google::protobuf::RepeatedPtrField< ::dbc::Hero > tlist_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_Hero_2eproto();
  friend void protobuf_AssignDesc_Hero_2eproto();
  friend void protobuf_ShutdownFile_Hero_2eproto();

  void InitAsDefaultInstance();
  static HeroTable* default_instance_;
};
// -------------------------------------------------------------------

class Hero : public ::google::protobuf::Message {
 public:
  Hero();
  virtual ~Hero();

  Hero(const Hero& from);

  inline Hero& operator=(const Hero& from) {
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
  static const Hero& default_instance();

  void Swap(Hero* other);

  // implements Message ----------------------------------------------

  Hero* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Hero& from);
  void MergeFrom(const Hero& from);
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

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional string finalSkill = 3;
  inline bool has_finalskill() const;
  inline void clear_finalskill();
  static const int kFinalSkillFieldNumber = 3;
  inline const ::std::string& finalskill() const;
  inline void set_finalskill(const ::std::string& value);
  inline void set_finalskill(const char* value);
  inline void set_finalskill(const char* value, size_t size);
  inline ::std::string* mutable_finalskill();
  inline ::std::string* release_finalskill();
  inline void set_allocated_finalskill(::std::string* finalskill);

  // @@protoc_insertion_point(class_scope:dbc.Hero)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_finalskill();
  inline void clear_has_finalskill();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::std::string* finalskill_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_Hero_2eproto();
  friend void protobuf_AssignDesc_Hero_2eproto();
  friend void protobuf_ShutdownFile_Hero_2eproto();

  void InitAsDefaultInstance();
  static Hero* default_instance_;
};
// ===================================================================


// ===================================================================

// HeroTable

// optional string tname = 1;
inline bool HeroTable::has_tname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HeroTable::set_has_tname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HeroTable::clear_has_tname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HeroTable::clear_tname() {
  if (tname_ != &::google::protobuf::internal::kEmptyString) {
    tname_->clear();
  }
  clear_has_tname();
}
inline const ::std::string& HeroTable::tname() const {
  return *tname_;
}
inline void HeroTable::set_tname(const ::std::string& value) {
  set_has_tname();
  if (tname_ == &::google::protobuf::internal::kEmptyString) {
    tname_ = new ::std::string;
  }
  tname_->assign(value);
}
inline void HeroTable::set_tname(const char* value) {
  set_has_tname();
  if (tname_ == &::google::protobuf::internal::kEmptyString) {
    tname_ = new ::std::string;
  }
  tname_->assign(value);
}
inline void HeroTable::set_tname(const char* value, size_t size) {
  set_has_tname();
  if (tname_ == &::google::protobuf::internal::kEmptyString) {
    tname_ = new ::std::string;
  }
  tname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HeroTable::mutable_tname() {
  set_has_tname();
  if (tname_ == &::google::protobuf::internal::kEmptyString) {
    tname_ = new ::std::string;
  }
  return tname_;
}
inline ::std::string* HeroTable::release_tname() {
  clear_has_tname();
  if (tname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = tname_;
    tname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void HeroTable::set_allocated_tname(::std::string* tname) {
  if (tname_ != &::google::protobuf::internal::kEmptyString) {
    delete tname_;
  }
  if (tname) {
    set_has_tname();
    tname_ = tname;
  } else {
    clear_has_tname();
    tname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .dbc.Hero tlist = 2;
inline int HeroTable::tlist_size() const {
  return tlist_.size();
}
inline void HeroTable::clear_tlist() {
  tlist_.Clear();
}
inline const ::dbc::Hero& HeroTable::tlist(int index) const {
  return tlist_.Get(index);
}
inline ::dbc::Hero* HeroTable::mutable_tlist(int index) {
  return tlist_.Mutable(index);
}
inline ::dbc::Hero* HeroTable::add_tlist() {
  return tlist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::dbc::Hero >&
HeroTable::tlist() const {
  return tlist_;
}
inline ::google::protobuf::RepeatedPtrField< ::dbc::Hero >*
HeroTable::mutable_tlist() {
  return &tlist_;
}

// -------------------------------------------------------------------

// Hero

// optional int32 id = 1;
inline bool Hero::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Hero::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Hero::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Hero::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Hero::id() const {
  return id_;
}
inline void Hero::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional string name = 2;
inline bool Hero::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Hero::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Hero::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Hero::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Hero::name() const {
  return *name_;
}
inline void Hero::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Hero::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Hero::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Hero::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Hero::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Hero::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string finalSkill = 3;
inline bool Hero::has_finalskill() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Hero::set_has_finalskill() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Hero::clear_has_finalskill() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Hero::clear_finalskill() {
  if (finalskill_ != &::google::protobuf::internal::kEmptyString) {
    finalskill_->clear();
  }
  clear_has_finalskill();
}
inline const ::std::string& Hero::finalskill() const {
  return *finalskill_;
}
inline void Hero::set_finalskill(const ::std::string& value) {
  set_has_finalskill();
  if (finalskill_ == &::google::protobuf::internal::kEmptyString) {
    finalskill_ = new ::std::string;
  }
  finalskill_->assign(value);
}
inline void Hero::set_finalskill(const char* value) {
  set_has_finalskill();
  if (finalskill_ == &::google::protobuf::internal::kEmptyString) {
    finalskill_ = new ::std::string;
  }
  finalskill_->assign(value);
}
inline void Hero::set_finalskill(const char* value, size_t size) {
  set_has_finalskill();
  if (finalskill_ == &::google::protobuf::internal::kEmptyString) {
    finalskill_ = new ::std::string;
  }
  finalskill_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Hero::mutable_finalskill() {
  set_has_finalskill();
  if (finalskill_ == &::google::protobuf::internal::kEmptyString) {
    finalskill_ = new ::std::string;
  }
  return finalskill_;
}
inline ::std::string* Hero::release_finalskill() {
  clear_has_finalskill();
  if (finalskill_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = finalskill_;
    finalskill_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Hero::set_allocated_finalskill(::std::string* finalskill) {
  if (finalskill_ != &::google::protobuf::internal::kEmptyString) {
    delete finalskill_;
  }
  if (finalskill) {
    set_has_finalskill();
    finalskill_ = finalskill;
  } else {
    clear_has_finalskill();
    finalskill_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace dbc

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Hero_2eproto__INCLUDED
