//
//  SYIMHttpManager.h
//  AFNetworking
//
//  Created by 张国梁 on 2024/2/5.
//

#import <Foundation/Foundation.h>
#import "NSObject+SYIM.h"
#import "SYIMOptions.h"
#import <AFNetworking/AFNetworking.h>

NS_ASSUME_NONNULL_BEGIN

@interface SYIMHttpManager : NSObject <SYSingleton>

@property(nonatomic, strong) SYIMOptions *options;
@property(nonatomic, strong) AFHTTPSessionManager *manager;

- (void)setupOptions:(SYIMOptions *)options;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;


@end

NS_ASSUME_NONNULL_END
