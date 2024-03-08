//
//  SYIMMessageRecallModel.h
//  SYIM
//
//  Created by sunchenglei on 2024/3/1.
//

#import "SYIMBaseRequestModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMMessageRecallModel : SYIMBaseRequestModel

/// 消息ID
@property(nonatomic, copy) NSString *messageId;

@end

NS_ASSUME_NONNULL_END
