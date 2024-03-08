//
//  SYSY.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (SYIM)

+ (NSData *)endianReverseData:(NSData *)fromEdian;

@end

NS_ASSUME_NONNULL_END
