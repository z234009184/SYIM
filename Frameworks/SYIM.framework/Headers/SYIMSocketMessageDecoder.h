//
//  SYIMSocketMessageDecoder.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/4.
//

#import <Foundation/Foundation.h>
#import "SYIMSocketMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMSocketMessageDecoder : NSObject

+ (SYIMSocketMessage *)decodeWithData:(NSData *)data;

@end

NS_ASSUME_NONNULL_END
