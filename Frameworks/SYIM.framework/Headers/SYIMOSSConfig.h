//
//  SYIMOSSConfig.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SYIMOSSConfig : NSObject

@property(nonatomic, copy) NSString *accessid;
@property(nonatomic, copy) NSString *policy;
@property(nonatomic, copy) NSString *signature;
@property(nonatomic, copy) NSString *dir;
@property(nonatomic, copy) NSString *host;
@property(nonatomic, copy) NSString *expire;
@property(nonatomic, copy) NSString *callback;

@end

NS_ASSUME_NONNULL_END
