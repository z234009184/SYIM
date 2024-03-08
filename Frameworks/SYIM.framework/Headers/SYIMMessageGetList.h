//
//  SYIMMessageGetList.h
//  SYIM
//
//  Created by sunchenglei on 2024/2/19.
//

#import <Foundation/Foundation.h>
#import "SYIMMessageBody.h"
NS_ASSUME_NONNULL_BEGIN


@interface SYIMMessageGetListUser : NSObject
/// userId
@property (nonatomic, copy) NSString  *userId;
/// 用户outUserId
@property (nonatomic, copy) NSString  *uid;
/// 昵称
@property (nonatomic, copy) NSString  *name;
/// 头像
@property (nonatomic, copy) NSString  *avatar;
/// 性别
@property (nonatomic, copy) NSString  *gender;
/// 拓展
@property (nonatomic, copy) NSString  *extension;

@end

@interface SYIMMessageGetListItem : NSObject
/// 消息id
@property (nonatomic, copy) NSString  *messageId;
/// 请求id
@property (nonatomic, copy) NSString  *requestId;
/// 消息序号
@property (nonatomic, copy) NSString  *messageSeq;
/// 时间戳
@property (nonatomic, assign) int64_t bornTime;
/// 接收人用户信息
@property (nonatomic, strong) SYIMMessageGetListUser  *toUser;
/// 发送人用户信息
@property (nonatomic, strong) SYIMMessageGetListUser  *fromUser;

/// 消息body
@property (nonatomic, strong) SYIMMessageBody  *messageBody;



@end

@interface SYIMMessageGetList : NSObject

@property (nonatomic, strong) NSMutableArray <SYIMMessageGetListItem *> *messages;


@end

NS_ASSUME_NONNULL_END
