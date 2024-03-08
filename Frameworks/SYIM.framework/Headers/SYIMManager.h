//
//  SYIMManager.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/2.
//

#import <Foundation/Foundation.h>
#import "NSObject+SYIM.h"
#import "SYIMOptions.h"
#import "SYIMSessionManagerImpl.h"
#import "SYIMClientManager.h"
#import "SYIMChatManagerImpl.h"
#import "SYIMContactManagerImpl.h"
#import "SYIMConversationManagerImpl.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMManager : NSObject <SYSingleton>
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;


/// 应用配置
@property(nonatomic, strong, readonly) SYIMOptions *options;

/// 登录管理
@property(nonatomic, strong, readonly) id <SYIMSessionManager> sessionManager;

/// 用户管理
@property(nonatomic, strong, readonly) id <SYIMContactManager> contactManager;

/// 会话管理
@property(nonatomic, strong, readonly) id <SYIMConversationManager> conversationManager;

/// 消息管理
@property(nonatomic, strong, readonly) id <SYIMChatManager> chatManager;

/// 初始化 SDK
/// - Parameter options: 初始化信息
- (void)initSDKWithOptions:(SYIMOptions *)options;

/// 是否已登录
- (BOOL)isLogin;



@end

NS_ASSUME_NONNULL_END
