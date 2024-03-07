//
//  SYIMMessageProtocol.h
//  SYIM
//
//  Created by sunchenglei on 2024/2/18.
//

#import <Foundation/Foundation.h>
#import "SYIMMessage.h"
#import "SYIMManagerProtocol.h"


NS_ASSUME_NONNULL_BEGIN

@protocol SYIMMessageHandler <NSObject>

/**
 *  消息状态变更
 *
 *  @param message 当前发送的消息
 *
 */
@optional

- (void)onStatusChange:(SYIMMessage *)message;

/**
 *  发消息回执
 *  @param message 发消息回执
 *  @param error   失败
 */
- (void)sendMessageReceipt:(SYIMMessage *)message error:(nullable NSError *)error;

/**
 *  消息
 *  @param messages 收到消息数组
 */
- (void)onMessages:(NSArray <SYIMMessage *> *)messages;

/**
 *  撤回消息
 *  @param message 消息
 */
- (void)withdrawMessages:(SYIMMessage *)message;

#warning 以下方法暂时废弃
/**
 *  离线消息
 *  @param messageList 离线消息数组
 */
-(void)onUnLineMsg:(NSArray <SYIMMessage *> *)messageList;

/**
 * 普通消息
 * 文本、视频、语音、图片
 */
- (void)onMessage:(SYIMMessage *)message;

/**
 * 自定义消息
 */
- (void)onCustomMsg:(SYIMMessage *)message;

/**
 * 命令消息
 */
- (void)onCmdMsg:(SYIMMessage *)message;
/**
 * 撤回消息
 */
- (void)onWithdrawMsg:(SYIMMessage *)message;

/**
 * 通知消息
 */
- (void)onNotificationMessage:(NSMutableArray <SYIMMessage *> *)messageList;

@end

@protocol SYIMChatManager <SYIMManagerProtocol>


- (void)setupChatManagerWithoptions:(SYIMOptions *)options;


/**
 * 添加消息监听
 */
- (void)setupClientManager:(SYIMClientManager *)clientManager;

/**
 * 添加收发消息代理
 */
- (void)addMessageDelegate:(id<SYIMMessageHandler>)delegate;

/**
 * 移除收发消息代理
 */
- (void)removeMessageDelegate;

/**
 * 发送消息
 * @param message  消息model
 * @param callBack errorDes 失败信息，只是表示当前这个函数调用是否成功,需要监听消息状态变更方法才能够判断消息是否已经发送至服务器
 */
- (void)sendMessage:(SYIMMessage *)message
           callBack:(void (^)(SYIMMessage *msgModel,NSString *errorDes))callBack;
                               
/**
 * 查询某条消息
 * @param requestId  requestIdID
 * @param sessionId  会话ID
 */
- (SYIMMessage *)getMessageWithRequestId:(NSString *)requestId sessionId:(NSString *)sessionId;

/**
 * 更新消息
 * @param message    消息
 * @param callBack   NSError 失败信息
 */
- (void)updateMessage:(SYIMMessage *)message
             callBack:(void (^)(NSError *error))callBack;

/**
 * 异步查询离线聊天记录
 * @param sessionId 会话id
 * @param startSeq 起始消息序号
 */
- (void)asyncConversationMsgWithSessionId:(NSString *)sessionId
                          startMssageSeq:(int64_t)startSeq;

/**
 * 保存到消息到本地，并不发送到服务器
 * @param isUpdateConversation 是否更新到会话列表
 */
- (void)saveMessageToLocal:(SYIMMessage *)message
      isUpdateConversation:(BOOL)isUpdateConversation;

/**
 * 获取会话发送或接收成功的最后一条消息
 */
- (SYIMMessage *)getLastSuccessMessage:(NSString *)sessionId;

/**
 * 查询历史消息
 *
 * @param starMessage 起始消息
 * @param pageSize    查询条数
 *
 */
- (NSArray<SYIMMessage *> *)getMessageList:(SYIMMessage *)starMessage
                                pageSize:(NSInteger)pageSize;

/**
 * 删除消息
 *
 */
- (void)deleteMessage:(SYIMMessage *)message;

/**
 *  获取消息,某条会话下的某个人消息
 *  @param outUserId  某个人的消息
 *  @param sessionId  会话id
 *  @param pageSize   查询多少数据
 */
- (NSArray<SYIMMessage *> *)getListWithOutUserId:(NSString *)outUserId
                                        pageSize:(NSInteger)pageSize
                                       sessionId:(NSString *)sessionId;


/**
 *  撤回消息
 *  @param message    待撤回消息
 *  @param callBack   返回结果
 */
- (void)withdrawMessage:(SYIMMessage *)message
               callBack:(void (^)(BOOL isSuccess,NSError *error))callBack;

@end

NS_ASSUME_NONNULL_END
