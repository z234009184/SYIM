//
//  SYIMSessionProtocol.h
//  SYIM
//
//  Created by sunchenglei on 2024/3/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^SYLoginHandler)(NSError * __nullable error);

@protocol SYIMSessionManager <NSObject>

@property(nonatomic, copy, readonly, nullable) NSString *token;
@property(nonatomic, strong, readonly) SYIMAuthInfo *authInfo;

- (void)setupClientManager:(SYIMClientManager *)clientManager;


/// 连接代理
- (void)appendConnectHandler:(id<SYIMConnectHandler>)delegate;

/// 登录结果回调
- (void)appendLoginResultDelegate:(id<SYIMLoginResultHandler>)delegate;

/// 自动登录
- (void)autoLoginWithComplete:(void (^__nullable) (BOOL isSuccess))complete;


/// 用户登录
/// - Parameters:
///   - outUserId: 外部账号 ID 可以为空
///   - token: 通过 token 登录 必传
///   - complete: 完成回调
- (void)loginWithOutUserId:(nullable NSString *)outUserId token:(nonnull NSString *)token complete:(void (^) (SYIMAuthInfo * __nullable))complete;

/// 用户登录
/// - Parameters:
///   - outUserId: 外部账号 ID
///   - complete: 完成
- (void)loginWithOutUserId:(nonnull NSString *)outUserId complete:(void (^) (SYIMAuthInfo * __nullable))complete;

/// 用户登录
/// - Parameters:
///   - outUserId: 外部用户 ID
///   - nickName: 用户昵称
///   - complete: 完成
- (void)loginWithOutUserId:(nonnull NSString *)outUserId nickName:(NSString * __nullable)nickName complete:(nonnull void (^)(SYIMAuthInfo * __nullable))complete;

/// 是否登录
- (BOOL)isLogin;

/// 退出登录
- (void)logoutWithComplete:(void (^__nullable) (BOOL))complete;

///// 获取当前登录的用户 ID
//- (NSString * __nullable)getLoginUserId;
/// 获取当前登录的用户 outUserID
- (NSString * __nullable)getLoginOutUserId;

@end

NS_ASSUME_NONNULL_END
