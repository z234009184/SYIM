//
//  SYIMSessionUtil.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/19.
//

#import <Foundation/Foundation.h>
#import "SYIMGlobalEnum.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMSessionUtil : NSObject

/// 获取 SessionID 规则是:
/// 私聊: {appid}_P_{small}_{big}
/// 群聊: {appid}_G_{groupId}
/// 群组不需要传 fromId
///   - sessionType: 类型
///   - appId: appId description
///   - toId: toId description
///   - fromId: fromId description
+ (NSString *)getSessionIdBySessionType:(SYIMSessionType)sessionType appId:(NSString *)appId toId:(NSString *)toId fromId:(NSString * __nullable)fromId;

@end

NS_ASSUME_NONNULL_END
