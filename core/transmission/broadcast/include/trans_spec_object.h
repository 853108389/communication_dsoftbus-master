/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OHOS_TRANS_SPEC_OBJECT_H
#define OHOS_TRANS_SPEC_OBJECT_H

#include "trans_spec_object_stub.h"

namespace OHOS {
class TransSpecObject : public TransSpecObjectStub {
public:
    TransSpecObject() = default;

    ~TransSpecObject() override = default;
};
} // namespace OHOS

#endif // OHOS_TRANS_SPEC_OBJECT_H