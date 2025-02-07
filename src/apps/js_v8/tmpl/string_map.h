// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the Apache 2.0 License.
#pragma once

#include <map>
#include <string>
#include <v8.h>

namespace ccf::v8_tmpl
{
  class StringMap
  {
  public:
    using MapType = std::map<std::string, std::string, std::less<>>;

    static constexpr const char* NAME = "CCFStringMap";
    static v8::Local<v8::ObjectTemplate> create_template(v8::Isolate* isolate);

    static v8::Local<v8::Object> wrap(
      v8::Local<v8::Context> context, const MapType* map);
  };

} // namespace ccf::v8_tmpl
