//
//  SYConversation.h
//  SYIM
//
//  Created by sunchenglei on 2024/2/17.
//

#import <Foundation/Foundation.h>
#import "SYIMMessage.h"
#import "SYIMContact.h"
#import "SYIMConversationGetList.h"
@interface SYIMConversation : NSObject

@property (nonatomic, copy) NSString         *sessionId;
/// 会话类型（SYIMSessionType）
@property (nonatomic, assign) NSInteger     sessionType;
/// 会话名称
/// 单聊 对方用户名
/// 群聊 群名称
@property (nonatomic, copy) NSString         *nickName;
/// 备注
@property (nonatomic, copy) NSString         *remark;
/// 群聊 会话头像
@property (nonatomic, copy) NSString         *avatar;
/// 关联的用户ID
@property (nonatomic, copy) NSString         *associationId;
/// 发送人用户ID
@property (nonatomic, copy) NSString         *sendUserId;
/// 更新时间戳：毫秒
/// 创建时间｜最后一条消息事件｜置顶时间

@property (nonatomic, assign) int64_t         msgTimeStamp;
/// 会话最后一条消息
@property (nonatomic, strong) SYIMMessage    *lastMessage;
/// 未读消息数量
@property (nonatomic, assign) NSInteger       unReadNum;
/// 会话关联人信息
@property (nonatomic, strong) SYIMContact      *contact;
/// 是否置顶
@property (nonatomic, assign) BOOL           topping;

/// 时间
- (NSString *)showIMTime;

// SYIMConversationGetListItem 转成 SYIMConversation
+ (SYIMConversation *)changeConversionGetListItem:(SYIMConversationGetListItem *)item;
@end
