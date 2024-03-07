//
//  SYSockerManager.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/2.
//

#import <Foundation/Foundation.h>
#import "SYIMOptions.h"
#import "SYIMSocketMessage.h"
#import "SYIMGlobalEnum.h"

@class SYIMSocketClient;

NS_ASSUME_NONNULL_BEGIN


typedef void(^SYIMSocketClientConnectListener)(SYIMSocketClient *, SYIMSocketClientConnectState);
typedef void(^SYIMSocketClientOnRecvMessage)(SYIMSocketClient *, SYIMSocketMessage *);

@interface SYIMSocketClient : NSObject

@property(nonatomic, assign) SYIMSocketClientConnectState connectStatus;
@property(nonatomic, copy) SYIMSocketClientConnectListener connectListener;
@property(nonatomic, copy) SYIMSocketClientOnRecvMessage onRecvMessage;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithOptions:(SYIMOptions *)options;

- (void)startConnect;
- (void)stopConnect;

- (void)sendSocketMessage:(SYIMSocketMessage *)socketMessage;
@end



NS_ASSUME_NONNULL_END


