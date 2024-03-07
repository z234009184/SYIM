//
//  SYIMManagerProtocol.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SYIMManagerProtocol <NSObject>

@optional
/// 清除缓存
- (void)clearCache;

@end

NS_ASSUME_NONNULL_END
