// Copyright (c) 2013 GitHub, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "browser/atom_browser_context.h"

#include "browser/api/atom_api_objects_registry.h"
#include "browser/atom_browser_main_parts.h"

namespace atom {

AtomBrowserContext::AtomBrowserContext()
    : objects_registry_(new api::ObjectsRegistry) {
}

AtomBrowserContext::~AtomBrowserContext() {
}

// static
AtomBrowserContext* AtomBrowserContext::Get() {
  return static_cast<AtomBrowserContext*>(
      AtomBrowserMainParts::Get()->browser_context());
}

}  // namespace atom