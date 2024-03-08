//
//  SYIMContactFriendInfoReqModel.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/23.
//

#import "SYIMBaseRequestModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMContactFriendInfoReqModel : SYIMBaseRequestModel
@property(nonatomic, copy) NSString *friendOutId;
@end

NS_ASSUME_NONNULL_END
