// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef QUICHE_COMMON_PLATFORM_API_QUICHE_STRING_VIEW_H_
#define QUICHE_COMMON_PLATFORM_API_QUICHE_STRING_VIEW_H_

// Chromium bans this include in net code except for QUICHE, which is a separate
// compilation unit.  absl::string_view is used outside QUICHE in Chromium where
// it is necessary to use the QUICHE API.  absl::Hash is used in
// net/net/spdy/platform/impl/spdy_string_utils_impl.h in Chromium.  This header
// file allows Chromium code to include string_view.h and hash.h where
// absolutely necessary.

#include "absl/hash/hash.h"
#include "absl/strings/string_view.h"

#endif  // QUICHE_COMMON_PLATFORM_API_QUICHE_STRING_VIEW_H_
