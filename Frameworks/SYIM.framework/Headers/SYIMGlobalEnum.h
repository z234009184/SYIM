//
//  SYIMGlobalEnum.h
//  Pods
//
//  Created by sunchenglei on 2024/2/7.
//

#ifndef SYIMGlobalEnum_h
#define SYIMGlobalEnum_h

// 消息类型
typedef enum : NSInteger {
    /// 文本
    SYIMMessageTypeText = 0,
    /// 图片消息
    SYIMMessageTypeImage = 1,
    /// 视频消息
    SYIMMessageTypeVideo = 2,
    /// 语音消息
    SYIMMessageTypeVoice = 3,
    /// @消息
    SYIMMessageTypeAt = 10,
    /// 消息变更(指令, ⽆需显示)
    SYIMMessageTypeMessageChange = 20,
    /// 撤销消息
    SYIMMessageTypeWithdraw = 21,
    /// 命令消息
    SYIMMessageTypeCmd = 98,
    /// 自定义消息
    SYIMMessageTypeCustom = 99,
    ///
    SYIMMessageTypeDefault = -1,

} SYIMMessageType;

// 消息类型
typedef enum : NSUInteger {
    /// 单聊
    SYIMSessionTypePrivate = 1,
    /// 群聊
    SYIMSessionTypeGroup = 2,

} SYIMSessionType;

// 消息类型
typedef enum : NSInteger {
    /// 发送中
    SYIMMessageStatusTypeSending = 0,
    /// 发送成功
    SYIMMessageStatusTypeSuccess = 1,
    /// 发送失败
    SYIMMessageStatusTypeFail = -1,
} SYIMMessageStatusEnum;

// socket链接状态
typedef enum : NSUInteger {
    SYSocketClientConnectState_UnConnected, // 未连接
    SYSocketClientConnectState_Connected, // 已连接
} SYIMSocketClientConnectState;

#endif /* SYIMGlobalEnum_h */
