/*
 * Copyright (c) 2021-2023 Huawei Device Co., Ltd.
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

#ifndef TRANS_CLIENT_PROXY_H
#define TRANS_CLIENT_PROXY_H

#include "session.h"
#include "softbus_def.h"
#include "softbus_trans_def.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int32_t msgChannelId;
    int32_t msgChannelType;
    int32_t msgPid;
    const char *msgPkgName;
    const char *msgUuid;
    const char *msgUdid;
}ChannelMsg;

int32_t ClientIpcOnChannelOpened(const char *pkgName, const char *sessionName, const ChannelInfo *channel, int32_t pid);
int32_t ClientIpcOnChannelOpenFailed(ChannelMsg *data, int32_t errCode);
int32_t ClientIpcOnChannelLinkDown(ChannelMsg *data, const char *networkId, const char *peerIp, int32_t routeType);
int32_t ClientIpcOnChannelClosed(ChannelMsg *data);
int32_t ClientIpcOnChannelMsgReceived(ChannelMsg *data, TransReceiveData *receiveData);
int32_t ClientIpcOnChannelQosEvent(const char *pkgName, const QosParam *param);
int32_t InformPermissionChange(int32_t state, const char *pkgName, int32_t pid);

#ifdef __cplusplus
}
#endif
#endif