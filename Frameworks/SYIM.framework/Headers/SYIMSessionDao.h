//
//  SYIMSessionDao.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/17.
//

#import <Foundation/Foundation.h>
#import "SYIMDBProtocols.h"
#import "SYIMAuthInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMSessionDao : NSObject <SYIMDBProtocols>

@property (nonatomic, weak) id <SYDAODelegate> delegate;

- (BOOL)insertOrReplace:(SYIMAuthInfo *)authInfo;

- (BOOL)update:(SYIMAuthInfo *)authInfo;

- (SYIMAuthInfo *)getLast;

- (BOOL)remove:(NSString *)userId;
@end

NS_ASSUME_NONNULL_END
