//
//  SYIMAuthReqModel.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/5.
//

#import "SYIMBaseRequestModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMAuthReqModel : SYIMBaseRequestModel

/// 外部的⽤户Id  必传
@property(nonatomic, copy) NSString *outUserId;

/// 非必传
@property(nonatomic, copy) NSString *nickName;

@end

NS_ASSUME_NONNULL_END
