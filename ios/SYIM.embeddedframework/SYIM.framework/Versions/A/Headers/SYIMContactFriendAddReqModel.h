//
//  SYIMContactFriendAddReqModel.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/23.
//

#import "SYIMBaseRequestModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMContactFriendAddReqModel : SYIMBaseRequestModel
/// 好友id
@property(nonatomic, copy) NSString *friendOutId;
/// 添加好友时的信息,例如我是 xxx
@property(nonatomic, copy) NSString *message;
/// 类型
/// 1 直接加好友（⽆需对⽅同意）；
/// 2 请求加好友（需要对⽅同意）；
/// 3 同意加好友；
/// 4 拒绝加好友
@property(nonatomic, assign) NSInteger type;
@end

NS_ASSUME_NONNULL_END
