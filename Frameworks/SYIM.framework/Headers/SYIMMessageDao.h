//
//  SYIMMessageDao.h
//  SYIM
//
//  Created by sunchenglei on 2024/2/7.
//

#import <Foundation/Foundation.h>
#import "SYIMDBProtocols.h"
#import "SYIMMessage.h"
NS_ASSUME_NONNULL_BEGIN

@interface SYIMMessageDao : NSObject<SYIMDBProtocols>

@property (nonatomic, weak) id <SYDAODelegate> delegate;
/**
 *  插入某条消息
 *
 *  @param msg 待插入的消息
 *  @param tableName 表名
 */
- (BOOL)insertMessage:(SYIMMessage *)msg toTable:(NSString *)tableName;
/**
 *  插入某条消息
 *  @param msg 待插入的消息
 *  @param tableName 表名
 */
- (BOOL)insertOrReplaceObject:(SYIMMessage *)msg toTable:(NSString *)tableName;

/**
 *  删除某条消息
 *
 *  @param msgId 待删除的消息id
 *  @param tableName 表名
 */
- (BOOL)deleteSYIMMessage:(NSString *)msgId toTable:(NSString *)tableName;

/**
 *  从消息表中移出所有消息
 */
- (BOOL)removeAllMsgsInTable:(NSString *)tableName;

/**
 *  删除fromOutUserId的所有消息
 *
 *  @param fromOutUserId 消息发送端 UID
 *  @param tableName 表名
 */
- (BOOL)removeMsgByFromUID:(NSString *)fromOutUserId fromTable:(NSString *)tableName;



/**
 *  更新某条消息
 *
 *  @param message 待更新的消息
 */
- (BOOL)updateMessage:(SYIMMessage *)message fromTable:(NSString *)tableName;

/**
 *  更新某条消息内容
 *
 *  @param message 待更新的消息
 */
- (BOOL)updateMessageBodyWithMessage:(SYIMMessage *)message fromTable:(NSString *)tableName;

/**
 *  获取消息
 *  @param starMsg  起始消息
 *  @param tableName 表名
 *  @param pageSize 查询多少数据
 */
- (NSArray *)getListWithStarMessage:(SYIMMessage *)starMsg
                           pageSize:(NSInteger)pageSize
                          fromTable:(NSString *)tableName;

/**
 *  获取消息
 *  @param outUserId  某个人的消息
 *  @param tableName 表名
 *  @param pageSize 查询多少数据
 */
- (NSArray *)getListWithOutUserId:(NSString *)outUserId
                         pageSize:(NSInteger)pageSize
                        fromTable:(NSString *)tableName;

/**
 *  获取所有未读消息
 *  @param tableName 表名
 */
- (NSArray *)getUnreadMessageListFromTable:(NSString *)tableName;

/**
 *  更新所有未读消息为已读
 */
- (BOOL)updateUnReadMessageToReadfromTable:(NSString *)tableName;

/**
 *  查询某条消息
 *  @param msgId  消息id
 *  @param tableName 表名
 */
- (SYIMMessage *)getMessageWithMsgId:(NSString *)msgId fromTable:(NSString *)tableName;
/**
 *  查询某条消息
 *  @param requestId requestId
 *  @param tableName 表名
 */
- (SYIMMessage *)getMessageWithRequestId:(NSString *)requestId fromTable:(NSString *)tableName;

/// 根据会话 ID 获取最后一条消息
- (SYIMMessage *)getLastMessageWithSessionId:(NSString *)sessionId;

@end

NS_ASSUME_NONNULL_END
