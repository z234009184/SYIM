//
//  SYIMContactProtocol.h
//  SYIM
//
//  Created by sunchenglei on 2024/3/1.
//

#import <Foundation/Foundation.h>
#import "SYIMManagerProtocol.h"
@class SYIMContact;

NS_ASSUME_NONNULL_BEGIN

@protocol SYIMContactDelegate <NSObject>
@optional

/// 好友列表变更
/// - Parameter conversationList: 好友列表
- (void)onContactListChanged:(NSArray<SYIMContact *> *)contactList;

@end


@protocol SYIMContactManager <SYIMManagerProtocol>
/// 添加好友监听
/// - Parameter delegate: 代理
- (void)addContactDelegate:(id<SYIMContactDelegate>)delegate;

/// 本地联系人列表
- (NSArray<SYIMContact *> *)getContactFriendList;

/// 从服务器获取联系人信息
/// - Parameter callBack: 回调
- (void)getContactFriendListFromService:(void (^__nullable) (NSArray<SYIMContact *> *contacts))callBack;


/// 添加联系人
/// - Parameters:
///   - friendOutId: 好友 ID
///   - message: 打招呼内容
///   - type: 类型 1 直接添加好友, 2 需要好友验证
///   - complete: 回调
- (void)addContactFriendWithFriendOutId:(NSString *)friendOutId
                                message:(nullable NSString *)message
                                   type:(NSInteger)type
                               complete:(void (^__nullable) (BOOL result,NSError *error))complete;

/// 删除好友
/// - Parameters:
///   - friendOutId: 好友 ID
///   - complete: 完成回调
- (void)deleteContactFriendWithFriendOutId:(NSString *)friendOutId complete:(void (^__nullable) (BOOL))complete;

/// 获取好友信息
/// - Parameters:
///   - friendOutId: 好友 ID
///   - complete: 完成回调
- (void)getContactFriendWithFriendOutId:(NSString *)friendOutId complete:(void (^__nullable) (SYIMContact *))complete;

/// 同步获取好友信息
/// - Parameters:
///   - friendOutId: 好友 ID
- (SYIMContact *)syncGetContactFriendWithFriendOutId:(NSString *)friendOutId;

/// 更新好友备注
- (void)updateContactFriendWithFriendOutId:(NSString *)friendOutId remark:(NSString *)remark complete:(void (^__nullable) (BOOL))complete;

/// 获取用户信息
/// - Parameters:
///   - userId: 用户 id
- (void)getUserInfoWithOutUserId:(NSString *)outUserId complete:(void (^) (SYIMContact *userInfo))callBack;

/// 保存用户信息
/// - Parameter userInfo: 用户
- (void)saveUserInfo:(SYIMContact *)userInfo;

/// 获取用户信息
/// - Parameter userId: 用户 ID
- (SYIMContact *)getUserInfoWithOutUserId:(NSString *)outUserId;

/// 更新用户信息
/// - Parameters:
///   - userInfo: 用户信息
///   - complete: 完成
- (void)updateUserInfo:(SYIMContact *)userInfo complete:(void (^) (BOOL))complete;

/// 查询是否是好友
/// - Parameters:
///   - outUserId: 用户outUserId
- (BOOL)isFriendWithOutUserId:(NSString *)outUserId;

@end
NS_ASSUME_NONNULL_END
