//
//  SYIMSocketMessage.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/4.
//

#import <Foundation/Foundation.h>
#import "OuterProtocol.pbobjc.h"

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN Byte const MAGIC_CODE;
FOUNDATION_EXTERN Byte const DATA_TYPE_HEART_BEAT;
FOUNDATION_EXTERN Byte const DATA_TYPE_MESSAGE;


@interface SYIMSocketMessage : NSObject
/// 协议、版本
@property(nonatomic, assign) Byte magicCode;
/// 数据包类型 0 心跳, 1 消息
@property(nonatomic, assign) Byte dataType;
/// Body数据大小
@property(nonatomic, assign) UInt32 bodySize;
/// 数据使用 protobuf 协议
@property(nonatomic, strong) Protocol_Class *body;

@end

NS_ASSUME_NONNULL_END
