//
//  SYIMMessageEncryption.h
//  AFNetworking
//
//  Created by sunchenglei on 2024/3/6.
//

#import <Foundation/Foundation.h>
#import "SYIMMessage.h"
NS_ASSUME_NONNULL_BEGIN

@interface SYIMMessageEncryption : NSObject

@property (nonatomic, strong) NSString *currentVersion;
@property (nonatomic, strong) NSString *currentSecret;

// 发消息
- (void)mesageEncryptWithMessage:(SYIMMessage *)message
                        complete:(nonnull void (^)(BOOL isSuccess, SYIMMessage * _Nonnull encrypMessage))complete;

// 保存密钥
- (void)saveAppSecret:(NSString *)appSecret;
// 是否有AppSecret
- (BOOL)isAppSecret;
// 请求密钥
- (void)getEncryptionKeyComplete:(nonnull void (^)(BOOL isSuccess))complete;

@end

NS_ASSUME_NONNULL_END
