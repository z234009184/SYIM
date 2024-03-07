//
//  SYIMMessage.h
//  SYIM
//
//  Created by sunchenglei on 2024/2/17.
//

#import <Foundation/Foundation.h>
#import "SYIMContact.h"
#import "SYIMGlobalEnum.h"
#import "SYIMMessageBody.h"
#import "SYIMMessageGetList.h"

@class Message;

@interface SYIMMessage : NSObject

/// 消息内容model
@property (nonatomic, strong) SYIMMessageBody *messageBody;

/// 消息ID
@property (nonatomic, copy) NSString  *msgId;
/// 消息发送时间戳：毫秒
@property (nonatomic, assign) int64_t msgTimeStamp;
/// 会话ID
@property (nonatomic, copy) NSString  *sessionId;
/**
 * 消息发送状态
 * 0:发送中
 * 1:发送成功
 * -1:发送失败
 */
@property (nonatomic, assign) NSInteger  status;
/// 该消息是发送方
@property (nonatomic, assign) BOOL       send;
/// 接收人用户信息
@property (nonatomic, strong) SYIMContact  *receiveUserInfo;
/// 发送人用户信息
@property (nonatomic, strong) SYIMContact  *sendUserInfo;
/// 上传id
@property (nonatomic, copy) NSString     *requestId;
/// 文件路径
@property (nonatomic, copy) NSString     *filePath;
/// 发送人OutUserId
@property (nonatomic, copy) NSString     *fromOutUserId;
/// 接收人OutUserId
@property (nonatomic, copy) NSString     *toOutUserId;
/// 消息序号
@property (nonatomic, assign) int64_t    messageSeq;
/// 是否已读 0 未读, 1 已读
@property (nonatomic, assign) NSInteger    read;
/// 备注
@property (nonatomic, copy) NSString     *remark;
@property (nonatomic, copy) NSString     *dataUserId;
@property (nonatomic, copy) NSString     *dataAppId;

/// 获取消息类型
- (SYIMSessionType)getSessionType;
/// 展示IM时间
- (NSString *)showIMTime;

/// 判断消息是否正常(数据是否完整)
- (BOOL)isWell;
/// protobuf消息 转成 SYIMMessage
+ (instancetype)messageFromMessage:(Message *)messagePb sessionId:(NSString *)sessionId;
/// 离线消息转成SYIMMessage
+ (SYIMMessage *)changeMessageGetListItem:(SYIMMessageGetListItem *)item;

@end
