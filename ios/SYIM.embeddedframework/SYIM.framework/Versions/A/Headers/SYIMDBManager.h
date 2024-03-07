//
//  SYIMDBManager.h
//  AFNetworking
//
//  Created by sunchenglei on 2024/2/7.
//

#import <Foundation/Foundation.h>
#import "SYIMConversationDao.h"
#import "SYIMSessionDao.h"
#import "SYIMDBProtocols.h"
#import "SYIMMessageDao.h"
#import "SYIMContactDao.h"
NS_ASSUME_NONNULL_BEGIN


@class WCTDatabase;

@interface SYIMDBManager : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

//**************************数据库操作************************************//
+ (SYIMDBManager *)sharedInstance;

@property (nonatomic, strong, readonly) dispatch_queue_t dbQueue;

@property (nonatomic, strong) SYIMSessionDao <SYIMDBProtocols> * sessionDao; // 登录鉴权相关表
@property (nonatomic, strong) SYIMContactDao <SYIMDBProtocols> * contactDao; // 用户相关
@property (nonatomic, strong) SYIMConversationDao <SYIMDBProtocols> * conversationDao; //操作会话表
@property (nonatomic, strong) SYIMMessageDao <SYIMDBProtocols> * messageDao; //操作消息表

/// 用户登录
/// @param userID 用户ID
- (void)userLogin:(NSString *)userID;
/// 用户退出
/// @param userID 用户ID
- (void)userLogout:(NSString *)userID;
/// 注销账号 删库.
- (void)removeDB;
/// 表是否存在
- (BOOL)getTableAlreadyExistsWithTableName:(NSString *)tableName;
/// 创建消息表
- (void)createMessageTableBySessionId:(NSString *)sessionId;
@end

NS_ASSUME_NONNULL_END
