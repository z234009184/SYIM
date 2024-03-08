//
//  SYIMEnviormentConfig.h
//  CocoaAsyncSocket
//
//  Created by 张国梁 on 2024/2/4.
//

#import <Foundation/Foundation.h>
#import "SYIMOptions.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMEnviormentConfig : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)configWithEnv:(SYEnvEnum)env;

- (NSString *)getApiHost;

- (NSString *)getConnectHost;

- (uint16_t)getConnectPort;

@end

NS_ASSUME_NONNULL_END
