//
//  SYIMGroup.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SYIMGroup : NSObject

/// 群ID
@property(nonatomic, copy) NSString *groupId;
/// 群名称
@property(nonatomic, copy) NSString *groupName;
/// 群简介
@property(nonatomic, copy) NSString *groupIntroduction;
/// 群公告
@property(nonatomic, copy) NSString *groupNotice;
/// 群头像
@property(nonatomic, copy) NSString *groupAvatar;
/// 扩展参数
@property(nonatomic, copy) NSString *groupExt;
/// 群邀请模式
@property(nonatomic, assign) NSInteger groupInviteStatus;
/// 群发言模式
@property(nonatomic, assign) NSInteger groupSpeakStatus;
/// 创建者用户ID
@property(nonatomic, copy) NSString *ownerOutId;
/// 最大人数限制
@property(nonatomic, assign) NSInteger personMax;
/// 群成员数量
@property(nonatomic, assign) NSInteger currentPersonNum;
/// 会话ID
@property(nonatomic, copy) NSString *sessionId;

@end

NS_ASSUME_NONNULL_END
