//
//  SYIMContactFriendList.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/23.
//

#import <Foundation/Foundation.h>
#import "SYIMContact.h"
NS_ASSUME_NONNULL_BEGIN

@interface SYIMContactFriendList : NSObject

@property(nonatomic, strong) NSArray<SYIMContact *> *results;

@end

NS_ASSUME_NONNULL_END
