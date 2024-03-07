//
//  SYIMSm4Util.h
//  SYIM
//
//  Created by sunchenglei on 2024/3/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SYIMSm4Util : NSObject

/**
 * 加密
 *
 * @param plainStr 待加密字符串
 * @return 已加密字符串
 */
+ (NSString *)encryptDataForSm4WithPlainStr:(NSString *)plainStr
                                      appId:(NSString *)appId
                                  appSecret:(NSString *)appSecret;
/**
 * 解密
 *
 * @param plainStr 待加密字符串
 * @return 已加密字符串
 */
+ (NSString *)decryptDataFromSm4WithPlainStr:(NSString *)plainStr
                                       appId:(NSString *)appId
                                   appSecret:(NSString *)appSecret;
@end

NS_ASSUME_NONNULL_END
