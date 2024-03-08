//
//  SYIMConversationDao.h
//  SYIM
//
//  Created by sunchenglei on 2024/2/7.
//

#import <Foundation/Foundation.h>
#import "SYIMDBProtocols.h"
#import "SYIMConversation.h"

NS_ASSUME_NONNULL_BEGIN
typedef void(^SYIMConversationDaoBlock)(NSArray <SYIMConversation *> *list);

@interface SYIMConversationDao : NSObject <SYIMDBProtocols>

@property (nonatomic, weak) id <SYDAODelegate> delegate;

/**
 *  插入某条会话
 *
 *  @param conversation 待插入的会话
 */
- (BOOL)insertOrReplaceObject:(SYIMConversation *)conversation;

/**
 *  删除某条会话
 *
 *  @param sessionId 待删除的会话ID
 */
- (BOOL)deleteConversation:(NSString *)sessionId;


/**
 *  更新某条会话
 *
 *  @param conversation 待更新的会话
 */
- (BOOL)updateConversation:(SYIMConversation *)conversation;


/// 会话未读数清零
- (BOOL)resetUnReadCountWithSessionId:(NSString *)sessionId;

/**
 *  更新会话关联人信息
 *
 *  @param conversation 待更新的会话
 */
- (BOOL)updateContactWithConversation:(SYIMConversation *)conversation;

/**
 *  拉取最近会话
 *
 *  @param conversationList 会话数组
 */
- (void)getConversationList:(SYIMConversationDaoBlock)conversationList;

/**
 *  获取某条会话
 *
 *  @param sessionId 会话id
 */
- (SYIMConversation *)getConversation:(NSString *)sessionId;

/**
 *  获取某条会话
 *
 *  @param associationId 关联的用户ID
 */
- (SYIMConversation *)getConversationWithAssociationId:(NSString *)associationId;

@end

NS_ASSUME_NONNULL_END
