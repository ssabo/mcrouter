/*
 *  Copyright (c) 2017, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#pragma once

#include <array>

#include <folly/Range.h>
#include <folly/dynamic.h>

namespace facebook {
namespace memcache {

struct MemcacheRouterStatsConfig {
  static constexpr size_t kNumRequestGroups = 18;
  static constexpr std::array<folly::StringPiece, 1 * kNumRequestGroups>
      sumStatNames{{folly::StringPiece("cmd_delete_count"),
                    folly::StringPiece("cmd_get_count"),
                    folly::StringPiece("cmd_lease_get_count"),
                    folly::StringPiece("cmd_lease_set_count"),
                    folly::StringPiece("cmd_set_count"),
                    folly::StringPiece("cmd_other_count"),
                    folly::StringPiece("cmd_gets_count"),
                    folly::StringPiece("cmd_cas_count"),
                    folly::StringPiece("cmd_append_count"),
                    folly::StringPiece("cmd_add_count"),
                    folly::StringPiece("cmd_decr_count"),
                    folly::StringPiece("cmd_incr_count"),
                    folly::StringPiece("cmd_metaget_count"),
                    folly::StringPiece("cmd_prepend_count"),
                    folly::StringPiece("cmd_replace_count"),
                    folly::StringPiece("cmd_flushall_count"),
                    folly::StringPiece("cmd_flushre_count"),
                    folly::StringPiece("cmd_touch_count")}};
  static constexpr std::array<folly::StringPiece, 3 * kNumRequestGroups>
      rateStatNames{{folly::StringPiece("cmd_delete"),
                     folly::StringPiece("cmd_get"),
                     folly::StringPiece("cmd_lease_get"),
                     folly::StringPiece("cmd_lease_set"),
                     folly::StringPiece("cmd_set"),
                     folly::StringPiece("cmd_other"),
                     folly::StringPiece("cmd_gets"),
                     folly::StringPiece("cmd_cas"),
                     folly::StringPiece("cmd_append"),
                     folly::StringPiece("cmd_add"),
                     folly::StringPiece("cmd_decr"),
                     folly::StringPiece("cmd_incr"),
                     folly::StringPiece("cmd_metaget"),
                     folly::StringPiece("cmd_prepend"),
                     folly::StringPiece("cmd_replace"),
                     folly::StringPiece("cmd_flushall"),
                     folly::StringPiece("cmd_flushre"),
                     folly::StringPiece("cmd_touch"),
                     folly::StringPiece("cmd_delete_out"),
                     folly::StringPiece("cmd_get_out"),
                     folly::StringPiece("cmd_lease_get_out"),
                     folly::StringPiece("cmd_lease_set_out"),
                     folly::StringPiece("cmd_set_out"),
                     folly::StringPiece("cmd_other_out"),
                     folly::StringPiece("cmd_gets_out"),
                     folly::StringPiece("cmd_cas_out"),
                     folly::StringPiece("cmd_append_out"),
                     folly::StringPiece("cmd_add_out"),
                     folly::StringPiece("cmd_decr_out"),
                     folly::StringPiece("cmd_incr_out"),
                     folly::StringPiece("cmd_metaget_out"),
                     folly::StringPiece("cmd_prepend_out"),
                     folly::StringPiece("cmd_replace_out"),
                     folly::StringPiece("cmd_flushall_out"),
                     folly::StringPiece("cmd_flushre_out"),
                     folly::StringPiece("cmd_touch_out"),
                     folly::StringPiece("cmd_delete_out_all"),
                     folly::StringPiece("cmd_get_out_all"),
                     folly::StringPiece("cmd_lease_get_out_all"),
                     folly::StringPiece("cmd_lease_set_out_all"),
                     folly::StringPiece("cmd_set_out_all"),
                     folly::StringPiece("cmd_other_out_all"),
                     folly::StringPiece("cmd_gets_out_all"),
                     folly::StringPiece("cmd_cas_out_all"),
                     folly::StringPiece("cmd_append_out_all"),
                     folly::StringPiece("cmd_add_out_all"),
                     folly::StringPiece("cmd_decr_out_all"),
                     folly::StringPiece("cmd_incr_out_all"),
                     folly::StringPiece("cmd_metaget_out_all"),
                     folly::StringPiece("cmd_prepend_out_all"),
                     folly::StringPiece("cmd_replace_out_all"),
                     folly::StringPiece("cmd_flushall_out_all"),
                     folly::StringPiece("cmd_flushre_out_all"),
                     folly::StringPiece("cmd_touch_out_all")}};

  template <class Request>
  static constexpr size_t getStatGroup();
};

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McAddRequest>() {
  return 9; // stat group 'add'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McAppendRequest>() {
  return 8; // stat group 'append'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McCasRequest>() {
  return 7; // stat group 'cas'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McDecrRequest>() {
  return 10; // stat group 'decr'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McDeleteRequest>() {
  return 0; // stat group 'delete'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McFlushAllRequest>() {
  return 15; // stat group 'flushall'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McFlushReRequest>() {
  return 16; // stat group 'flushre'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McGetRequest>() {
  return 1; // stat group 'get'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McGetsRequest>() {
  return 6; // stat group 'gets'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McIncrRequest>() {
  return 11; // stat group 'incr'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McLeaseGetRequest>() {
  return 2; // stat group 'lease_get'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McLeaseSetRequest>() {
  return 3; // stat group 'lease_set'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McMetagetRequest>() {
  return 12; // stat group 'metaget'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McPrependRequest>() {
  return 13; // stat group 'prepend'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McReplaceRequest>() {
  return 14; // stat group 'replace'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McSetRequest>() {
  return 4; // stat group 'set'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McTouchRequest>() {
  return 17; // stat group 'touch'
}

} // memcache
} // facebook
