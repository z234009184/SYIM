//
//  SYIMMessageEncoder.h
//  AFNetworking
//
//  Created by 张国梁 on 2024/2/4.
//

#import <Foundation/Foundation.h>
#import "SYIMSocketMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMSocketMessageEncoder : NSObject

+ (NSData *)encodeWithSocketMessage:(SYIMSocketMessage *)socketMessage;

@end

NS_ASSUME_NONNULL_END
