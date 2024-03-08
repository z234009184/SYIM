//
//  SYIMMessageBody.h
//  AFNetworking
//
//  Created by sunchenglei on 2024/2/20.
//

#import <Foundation/Foundation.h>

@interface SYIMMessageBody : NSObject

/// 消息类型（SYIMMessageType）
@property (nonatomic, assign) NSInteger type;
/// 消息内容
@property (nonatomic, copy) NSString    *content;

@end
