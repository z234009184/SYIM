//
//  SYIMRequestHeader.h
//  AFNetworking
//
//  Created by 张国梁 on 2024/2/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SYIMRequestHeader : NSObject

/// 应⽤ID
@property(nonatomic, copy) NSString *appid;

/// 随机数
@property(nonatomic, copy) NSString *nonce;

/// 1,IOS, 2安卓, 3pc, 4web, 5服务端
@property(nonatomic, copy) NSString *platform;

/// 签名
@property(nonatomic, copy) NSString *sign;

/// 时间戳, 毫秒, 五分钟内
@property(nonatomic, copy) NSString *timestamp;

/// ⽤户token 服务端接⼝可不传token
@property(nonatomic, copy) NSString *token;

@end

NS_ASSUME_NONNULL_END
