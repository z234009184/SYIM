//
//  SYIMConversationListReqModel.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/19.
//

#import "SYIMBaseRequestModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMConversationListReqModel : SYIMBaseRequestModel

/// 类型: 0全部, 1未读会话, 2指定的会话
@property(nonatomic, assign) NSInteger type;
/// 会话ID, type=2时不可为空
@property(nonatomic, copy) NSString  *sessionId;


@end

NS_ASSUME_NONNULL_END
