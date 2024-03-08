//
//  SYIMOptions.h
//  CocoaAsyncSocket
//
//  Created by 张国梁 on 2024/2/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, SYEnvEnum) {
    SYEnvEnumDEV,
    SYEnvEnumPROD,
};

@interface SYIMOptions : NSObject

@property(nonatomic, copy) NSString *appId;
@property(nonatomic, copy) NSString *secret;
@property(nonatomic, assign) BOOL autoLogin;
@property(nonatomic, assign) SYEnvEnum env;

@end

NS_ASSUME_NONNULL_END
