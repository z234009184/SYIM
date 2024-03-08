//
//  SYIMOssConfigReqModel.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/21.
//

#import "SYIMBaseRequestModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMOssConfigReqModel : SYIMBaseRequestModel

/// ⽂件存放的⽂件夹
@property(nonatomic, copy) NSString *dir;

@end

NS_ASSUME_NONNULL_END
