//
//  SYIMSocketProtocol.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/17.
//

#import <Foundation/Foundation.h>
#import "SYIMMessage.h"

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSUInteger, SYIMLoginResult) {
    SYLoginResult_Success, // 成功
    SYLoginResult_Fail,  // 失败, token 失效 需要重新登录
    SYLoginResult_ForceOffline, // 被挤下线 重复登录
    SYLoginResult_Restricted, // 强制下线 封号等场景
    SYLoginResult_Logout // 手动退出登录
};

/// 连接回调
@protocol SYIMConnectHandler <NSObject>

@optional
- (void)onConnectStatusChanged:(SYIMSocketClientConnectState)status;

@end

/// 登录回调
@protocol SYIMLoginResultHandler <NSObject>

@optional
- (void)onLoginResultChanged:(SYIMLoginResult)status;

@end

/// 收到 ACK (消息是否发送成功)
@protocol SYIMACKResultHandler <NSObject>

/// Ack消息, 发送消息后, 后端回复的消息发送结果, 通过code判断成功与否
/// - Parameters:
///   - requestId: requestId
///   - sessionId: sessionId
///   - sessionType: sessionType
///   - errorId: 0 表示成功 其他都表示失败 消息发送结果, 参考: com.websiyu.im.sdk.api.enums.MsgSendResultEnum, (0, -1, 第三方业务可在此扩展)
///   - failMsg: 失败原因
///   - message: 消息
- (void)onRecvACKResultWithRequstId:(NSString *)requestId
                          sessionId:(NSString *)sessionId
                        sessionType:(SYIMSessionType)sessionType
                            errorId:(NSInteger)errorId failMsg:(NSString *)failMsg
                            message:(SYIMMessage *)message;

@end

/// 收到新消息
@protocol SYIMMessageDataHandler <NSObject>

- (void)onRecvMessage:(SYIMMessage *)message requestId:(NSString *)requestId;

@end

/// 收到通知
@protocol SYIMNotifyHandler <NSObject>

- (void)onRecvNotifyWithRequestId:(NSString *)requestId sessionId:(NSString *)sessionId;

@end

NS_ASSUME_NONNULL_END
