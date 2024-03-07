//
//  SYIMClientManager.h
//  AFNetworking
//
//  Created by 张国梁 on 2024/2/5.
//

#import <Foundation/Foundation.h>
#import "NSObject+SYIM.h"
#import "SYIMOptions.h"
#import "SYIMSocketClient.h"
#import "SYIMSocketMessage.h"
#import "SYIMSocketProtocol.h"
#import "SYIMMessage.h"

NS_ASSUME_NONNULL_BEGIN


@interface SYIMClientManager : NSObject <SYSingleton>
/// 单例禁止使用下面初始化
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/// 是否是连接中
@property(nonatomic, assign, readonly) BOOL reloading;
@property(nonatomic, assign, readonly) BOOL isLogin;

- (instancetype)initWithOptions:(SYIMOptions *)options;

/// 连接回调
- (void)appendConnectDelegate:(id<SYIMConnectHandler>)delegate;
/// 登录结果回调
- (void)appendLoginResultDelegate:(id<SYIMLoginResultHandler>)delegate;
/// ack 结果
- (void)appendAckResultDelegate:(id<SYIMACKResultHandler>)delegate;
/// 收到消息
- (void)appendMessageDataDelegate:(id<SYIMMessageDataHandler>)delegate;
/// 收到通知
- (void)appendNotifyDelegate:(id<SYIMNotifyHandler>)delegate;

/// 是否连接成功(可发送消息)
- (BOOL)isConnected;

/// 重连
- (void)reload;

/// 停止连接
- (void)stop;

/// 发送鉴权登录
- (void)sendToken:(NSString *)token;

/// 发送消息
- (void)sendMessage:(SYIMMessage *)message;

/// 发送Socket消息
- (void)sendSocketMessage:(SYIMSocketMessage *)socketMessage;

/// 发送回执
- (void)sendAckWithRequestId:(NSString *)requestId;
@end

NS_ASSUME_NONNULL_END
