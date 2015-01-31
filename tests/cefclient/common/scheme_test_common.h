// Copyright (c) 2009 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#ifndef CEF_TESTS_CEFCLIENT_COMMON_SCHEME_TEST_COMMON_H_
#define CEF_TESTS_CEFCLIENT_COMMON_SCHEME_TEST_COMMON_H_
#pragma once

#include <vector>

#include "include/cef_scheme.h"

namespace client {
namespace scheme_test {

// Register the scheme.
void RegisterCustomSchemes(CefRefPtr<CefSchemeRegistrar> registrar,
                           std::vector<CefString>& cookiable_schemes);

}  // namespace scheme_test
}  // namespace client

#endif  // CEF_TESTS_CEFCLIENT_COMMON_SCHEME_TEST_COMMON_H_