

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 单例协议
@protocol SYSingleton
@optional

/// 初始化单例方法
+ (instancetype)shared;

@end


@interface NSObject (mutableCopy) <NSMutableCopying>
@end

@interface NSObject (SYIM)

@end

NS_ASSUME_NONNULL_END
