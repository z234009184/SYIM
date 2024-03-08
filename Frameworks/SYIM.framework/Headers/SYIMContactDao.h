//
//  SYContactDao.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/18.
//

#import <Foundation/Foundation.h>
#import "SYIMDBProtocols.h"

@class SYIMContact;

NS_ASSUME_NONNULL_BEGIN

@interface SYIMContactDao : NSObject <SYIMDBProtocols>
@property (nonatomic, weak) id <SYDAODelegate> delegate;

- (BOOL)insertOrReplace:(SYIMContact *)contact;

- (SYIMContact *)getUserWithOutUserId:(NSString *)outUserId;



#pragma mark - 好友相关
- (NSArray<SYIMContact *> *)getFriends;

- (BOOL)insertOrReplaceFriend:(SYIMContact *)contact;

- (BOOL)insertOrReplaceFriends:(NSArray<SYIMContact *> *)contacts;

- (BOOL)deleteFriend:(NSString *)friendOutId;

- (BOOL)updateFriend:(SYIMContact *)contact;

- (BOOL)updateFriendRemarkWithFriendOutId:(NSString *)friendOutId remark:(NSString *)remark;

@end

NS_ASSUME_NONNULL_END
