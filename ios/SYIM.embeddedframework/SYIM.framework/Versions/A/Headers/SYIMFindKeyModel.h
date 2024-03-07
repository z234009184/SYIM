//
//  SYIMFindKeyModel.h
//  AFNetworking
//
//  Created by sunchenglei on 2024/3/6.
//
#import "SYIMBaseRequestModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMFindKeyModel : SYIMBaseRequestModel

// 版本号，不传为最新版本
@property(nonatomic, copy) NSString *version;

@end

NS_ASSUME_NONNULL_END
