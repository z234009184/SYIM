//
//  SYIMGroupProtocol.h
//  SYIM
//
//  Created by sunchenglei on 2024/3/4.
//

#import <Foundation/Foundation.h>
#import "SYIMGroup.h"
NS_ASSUME_NONNULL_BEGIN

@protocol SYIMGroupManager <NSObject>


/// 从服务器获取群组列表
/// - Parameter callBack: 返回值
- (void)getGroupListFromServiceCallBack:(void (^)(NSArray <SYIMGroup *> *list,NSString *errorDes))callBack;

@end

NS_ASSUME_NONNULL_END
