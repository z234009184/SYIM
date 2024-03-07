//
//  SYIMConversationOpenSessionReqModel.h
//  SYIM
//
//  Created by sunchenglei on 2024/2/21.
//

#import "SYIMBaseRequestModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMConversationOpenSessionReqModel : SYIMBaseRequestModel

/// 会话类型, 1私聊, 2群聊
@property (nonatomic, strong) NSNumber    *sessionType;

/// 对方用户ID(私聊必传)
@property (nonatomic, strong) NSString    *uid;

/// 群组ID(群聊必传)
@property (nonatomic, strong) NSString    *groupId;

@end

NS_ASSUME_NONNULL_END
