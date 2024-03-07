//
//  SYIMConversationDeleteReqModel.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/19.
//

#import "SYIMBaseRequestModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMConversationDeleteReqModel : SYIMBaseRequestModel
@property(nonatomic, copy) NSString *sessionId;
@end

NS_ASSUME_NONNULL_END
