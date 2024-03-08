//
//  SYIMMessageGetListReqModel.h
//  AFNetworking
//
//  Created by sunchenglei on 2024/2/19.
//

#import "SYIMBaseRequestModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMMessageGetListReqModel : SYIMBaseRequestModel
/// 会话ID
@property(nonatomic, copy) NSString *sessionId;
/// 消息起始序号
@property(nonatomic, strong) NSNumber *startSeq;
/// 消息结束序号，-1表示最新序号
@property(nonatomic, strong) NSNumber *endSeq;

@end

NS_ASSUME_NONNULL_END
