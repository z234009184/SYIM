//
//  SY.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (SYIM)

- (NSString *)sy_toMD5;

+ (NSString *)randomRequestID;

+ (NSString *)showIMTime:(NSTimeInterval)msglastTime showDetail:(BOOL)showDetail;

@end

NS_ASSUME_NONNULL_END
