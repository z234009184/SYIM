//
//  SYIMConversationGetList.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/19.
//

#import <Foundation/Foundation.h>
#import "SYIMMessageGetList.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMConversationGetListGroup : NSObject
@property(nonatomic, copy) NSString *groupId;
@property(nonatomic, copy) NSString *name;
@property(nonatomic, copy) NSString *avatar;
@end

@interface SYIMConversationGetListItem : NSObject
@property(nonatomic, copy) NSString *sessionId;
@property(nonatomic, assign) NSInteger sessionType;
@property(nonatomic, assign) NSInteger unreadCount;
@property(nonatomic, copy) NSString *name;
@property(nonatomic, copy) NSString *avatar;
@property(nonatomic, strong) SYIMMessageGetListUser *oppositeUser;
@property(nonatomic, strong) SYIMConversationGetListGroup *group;
@property(nonatomic, strong) SYIMMessageGetListItem *latestMessage;


@end

@interface SYIMConversationGetList : NSObject

@property (nonatomic, strong) NSMutableArray <SYIMConversationGetListItem *> *sessions;

@end

NS_ASSUME_NONNULL_END
