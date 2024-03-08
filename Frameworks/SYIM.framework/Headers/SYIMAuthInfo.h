//
//  SYIMAuthInfo.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/9.
//

#import <Foundation/Foundation.h>
#import "SYIMContact.h"

@interface SYIMAuthInfo : NSObject 
 
/// token
@property (nonatomic, copy) NSString *token;
/// 超时时间
@property (nonatomic, copy) NSString *tokenTimeout;
/// 外部账号 ID
@property (nonatomic, copy) NSString *outUserId;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSString *avatar;
/// siyu用户 ID
@property (nonatomic, copy) NSString *userId;
/// appid
@property (nonatomic, copy) NSString *appId;


@property (nonatomic, assign) BOOL lastLoginUser;
@property (nonatomic, strong) SYIMContact *chatUser;

@end
