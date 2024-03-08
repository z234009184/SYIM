//
//  SYIMAuthInfo+WCTTableCoding.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/9.
//

#import "SYIMAuthInfo.h"
#import <WCDB/WCDB.h>

@interface SYIMAuthInfo (WCTTableCoding) <WCTTableCoding>

WCDB_PROPERTY(outUserId)
WCDB_PROPERTY(userId)
WCDB_PROPERTY(token)
WCDB_PROPERTY(lastLoginUser)

@end
