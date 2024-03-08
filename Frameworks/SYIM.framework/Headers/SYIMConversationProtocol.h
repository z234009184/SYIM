//
//  SYIMConversationProtocol.h
//  SYIM
//
//  Created by sunchenglei on 2024/3/1.
//

#import <Foundation/Foundation.h>
#import "SYIMConversation.h"
#import "SYIMManagerProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@protocol SYIMConversationDelegate <NSObject>
@optional

/// 会话列表变更
/// - Parameter conversationList: 会话列表
- (void)onConversationListChanged:(NSArray<SYIMConversation *> *)conversationList;

@end

@protocol SYIMConversationManager <SYIMManagerProtocol>
@optional

- (void)setupClientManager:(SYIMClientManager *)clientManager options:(SYIMOptions *)options;


/// 获取当前登录用户的会话列表
- (NSArray<SYIMConversation *> *)getConversationList;

/// 从服务器获取会话列表
/// - Parameter complete: complete description
- (void)getConversationListFromServerWithComplete:(void (^ __nullable) (NSArray<SYIMConversation *> *))complete;


/// 第一次获取Session
/// - Parameters:
///   - type: 私聊，群聊
///   - outUserId: 用户outUserId（私聊必传）
///   - groupId：群组id（群聊必传）
- (void)getSessionWithSessionType:(SYIMSessionType)type
                        outUserId:(nullable NSString *)outUserId
                          groupId:(nullable NSString *)groupId
                         complete:(void (^ __nullable) (SYIMConversation *data ,NSError *error))complete;

/// 创建单聊会话对象
/// - Parameters:
///   - outUserId: 联系人的outUserID
///   - complete: complete description
- (void)createPrivateConversationWithOutUserId:(nullable NSString *)outUserId
                                      complete:(void (^ __nullable) (SYIMConversation *))complete;

/// 创建单聊会话对象
/// - Parameters:
///   - contact: 联系人对象
///   - complete: complete description
- (void)createPrivateConversationToUser:(SYIMContact *)contact
                            complete:(void (^ __nullable) (SYIMConversation *))complete;

/// 移除会话
/// - Parameters:
///   - sessionId: sessionId description
///   - complete: complete description
- (void)removeConversationWithSessionId:(NSString *)sessionId
                               complete:(void (^ __nullable) (BOOL))complete;

/// 设置会话是否置顶
/// - Parameters:
///   - sessionId: 会话 ID
///   - isTop: 是否置顶
///   - complete: complete description
- (void)setConversationToppingWithSessionId:(NSString *)sessionId
                                      isTop:(BOOL)isTop
                                   complete:(void (^ __nullable) (BOOL))complete;

/// 添加会话监听
/// - Parameter delegate: 代理
- (void)addConversationDelegate:(id<SYIMConversationDelegate>)delegate;

/// 更新会话最后一条消息
/// - Parameters:
///   - message: 消息
///   - isDelete: 是否删除
- (void)updateConversationLastMsg:(SYIMMessage *)message isDelete:(BOOL)isDelete;

/// 增加正在会话记录
/// 进入聊天页面调用该接口
/// - Parameter sessionId: 会话 ID
- (void)addChattingWithSessionId:(NSString *)sessionId;

/// 退出聊天页面时调用
/// - Parameter sessionId: 会话 ID
- (void)removeChattingWithSessionId:(NSString *)sessionId;

/// 更新会话联系人信息
/// - Parameter contact: 联系人信息,更新成功会走会话变更代理
/// - Parameter isUpdateConversation 是否更新会话列表
- (void)updatConversationWithContact:(SYIMContact *)contact
                isUpdateConversation:(BOOL)isUpdateConversation
                            complete:(void (^ __nullable) (BOOL result))complete;


/// 获取会话未读消息数
/// - Parameter sessionId: 会话 ID
- (NSInteger)getUnReadCountWithSessionId:(NSString *)sessionId;

/// 获取所有会话未读数
- (NSInteger)getAllUnReadCount;

/// 清空未读数
- (void)resetUnReadCountWithSessionId:(NSString *)sessionId;

/// 根据sessionId 获取会话
- (SYIMConversation *)getConversation:(NSString *)sessionId;

@end


NS_ASSUME_NONNULL_END
