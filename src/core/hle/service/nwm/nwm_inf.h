// Copyright 2016 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/service.h"

namespace Service {
namespace NWM {

class NWM_INF final : public ServiceFramework<NWM_INF> {
public:
    NWM_INF();
};

} // namespace NWM
} // namespace Service
