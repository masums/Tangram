// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/common/url_schemes.h"

#include <string.h>

#include <iterator>

#include "base/no_destructor.h"
#include "base/strings/string_util.h"
#include "build/build_config.h"
#include "content/public/common/content_client.h"
#include "content/public/common/url_constants.h"
#include "url/url_util.h"
// begin Add by TangramTeam
#include "atlstr.h"
#include "chrome_proxy/third_party/ChromeProxy.h"
#include "ui/views/win/hwnd_util.h"
// end Add by TangramTeam

namespace content {
namespace {

const char* const kDefaultSavableSchemes[] = {
    url::kHttpScheme,       url::kHttpsScheme, url::kFileScheme,
    url::kFileSystemScheme, url::kFtpScheme,   kChromeDevToolsScheme,
    kChromeUIScheme,        url::kDataScheme};

// These lists are lazily initialized below and are leaked on shutdown to
// prevent any destructors from being called that will slow us down or cause
// problems.
std::vector<std::string>& GetMutableSavableSchemes() {
  static base::NoDestructor<std::vector<std::string>> schemes;
  return *schemes;
}

// This set contains serialized canonicalized origins as well as hostname
// patterns. The latter are canonicalized by component.
std::vector<std::string>& GetMutableSecureOriginsAndPatterns() {
  static base::NoDestructor<std::vector<std::string>> origins;
  return *origins;
}

std::vector<std::string>& GetMutableServiceWorkerSchemes() {
  static base::NoDestructor<std::vector<std::string>> schemes;
  return *schemes;
}

}  // namespace

void RegisterContentSchemes(bool lock_schemes) {
  ContentClient::Schemes schemes;
  GetContentClient()->AddAdditionalSchemes(&schemes);

  if (g_pProxy == nullptr) {
    HMODULE hModule = ::GetModuleHandle(L"TangramCore.dll");
    if (hModule != nullptr) {
      ChromePlus::GetChromeProcessProxyFunction GetChromeProcessProxyFunction =
          (ChromePlus::GetChromeProcessProxyFunction)GetProcAddress(
              hModule, "GetChromeProcessProxy");
      if (GetChromeProcessProxyFunction != NULL) {
        g_pProxy = GetChromeProcessProxyFunction();
      }
    }
  }
  CString strSchemeBaseName = _T("");
  if (g_pProxy) {
    strSchemeBaseName = g_pProxy->GetSchemeBaseName();
  }
  if (strSchemeBaseName != _T("")) {
    //USES_CONVERSION;
    //ATL::CStringA strName = W2A(strSchemeBaseName);
    ////WCHAR _szTmp[1025] = {0};
    //::memcpy(kChromeUIScheme, strName.GetBuffer(), 256);
    ////kChromeUIScheme = strName.GetBuffer());
    //strName.ReleaseBuffer();
  }
  url::AddStandardScheme(kChromeDevToolsScheme, url::SCHEME_WITH_HOST);
  url::AddStandardScheme(kChromeUIScheme, url::SCHEME_WITH_HOST);
  url::AddStandardScheme(kGuestScheme, url::SCHEME_WITH_HOST);
  url::AddStandardScheme(kChromeErrorScheme, url::SCHEME_WITH_HOST);

  for (auto& scheme : schemes.standard_schemes)
    url::AddStandardScheme(scheme.c_str(), url::SCHEME_WITH_HOST);

  for (auto& scheme : schemes.referrer_schemes)
    url::AddReferrerScheme(scheme.c_str(), url::SCHEME_WITH_HOST);

  schemes.secure_schemes.push_back(kChromeUIScheme);
  schemes.secure_schemes.push_back(kChromeErrorScheme);
  for (auto& scheme : schemes.secure_schemes)
    url::AddSecureScheme(scheme.c_str());

  for (auto& scheme : schemes.local_schemes)
    url::AddLocalScheme(scheme.c_str());

  schemes.no_access_schemes.push_back(kChromeErrorScheme);
  for (auto& scheme : schemes.no_access_schemes)
    url::AddNoAccessScheme(scheme.c_str());

  schemes.cors_enabled_schemes.push_back(kChromeUIScheme);
  for (auto& scheme : schemes.cors_enabled_schemes)
    url::AddCorsEnabledScheme(scheme.c_str());

  // TODO(mkwst): Investigate whether chrome-error should be included in
  // csp_bypassing_schemes.
  for (auto& scheme : schemes.csp_bypassing_schemes)
    url::AddCSPBypassingScheme(scheme.c_str());

  for (auto& scheme : schemes.empty_document_schemes)
    url::AddEmptyDocumentScheme(scheme.c_str());

#if defined(OS_ANDROID)
  if (schemes.allow_non_standard_schemes_in_origins)
    url::EnableNonStandardSchemesForAndroidWebView();
#endif

  // Prevent future modification of the scheme lists. This is to prevent
  // accidental creation of data races in the program. Add*Scheme aren't
  // threadsafe so must be called when GURL isn't used on any other thread. This
  // is really easy to mess up, so we say that all calls to Add*Scheme in Chrome
  // must be inside this function.
  if (lock_schemes)
    url::LockSchemeRegistries();

  // Combine the default savable schemes with the additional ones given.
  GetMutableSavableSchemes().assign(std::begin(kDefaultSavableSchemes),
                                    std::end(kDefaultSavableSchemes));
  GetMutableSavableSchemes().insert(GetMutableSavableSchemes().end(),
                                    schemes.savable_schemes.begin(),
                                    schemes.savable_schemes.end());

  GetMutableServiceWorkerSchemes() = std::move(schemes.service_worker_schemes);

  GetMutableSecureOriginsAndPatterns() = std::move(schemes.secure_origins);
}

const std::vector<std::string>& GetSavableSchemes() {
  return GetMutableSavableSchemes();
}

const std::vector<std::string>& GetSecureOriginsAndPatterns() {
  return GetMutableSecureOriginsAndPatterns();
}

const std::vector<std::string>& GetServiceWorkerSchemes() {
  return GetMutableServiceWorkerSchemes();
}

}  // namespace content
