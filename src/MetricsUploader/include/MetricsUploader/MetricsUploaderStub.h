// Copyright (c) 2021 The Orbit Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "MetricsUploader/MetricsUploader.h"

namespace orbit_metrics_uploader {

class MetricsUploaderStub : public MetricsUploader {
 public:
  MetricsUploaderStub() = default;
  MetricsUploaderStub(const MetricsUploaderStub& other) = delete;
  MetricsUploaderStub(MetricsUploaderStub&& other) = default;
  MetricsUploaderStub& operator=(const MetricsUploaderStub& other) = delete;
  MetricsUploaderStub& operator=(MetricsUploaderStub&& other) = default;

  bool SendLogEvent(OrbitLogEvent_LogEventType) override { return false; };
  bool SendLogEvent(OrbitLogEvent_LogEventType, std::chrono::milliseconds) override {
    return false;
  };
  bool SendLogEvent(OrbitLogEvent_LogEventType, std::chrono::milliseconds,
                    OrbitLogEvent_StatusCode) override {
    return false;
  };
};

}  // namespace orbit_metrics_uploader