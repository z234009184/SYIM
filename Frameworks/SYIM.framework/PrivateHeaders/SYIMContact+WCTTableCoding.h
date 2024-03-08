//
//  SYContact+WCTTableCoding.h
//  SYIM
//
//  Created by sunchenglei on 2024/2/17.
//

#import "SYIMContact.h"
#import <WCDB/WCDB.h>

@interface SYIMContact (WCTTableCoding) <WCTTableCoding>

WCDB_PROPERTY(outUserId)
WCDB_PROPERTY(userId)
WCDB_PROPERTY(avatar)
WCDB_PROPERTY(nickName)
WCDB_PROPERTY(type)
WCDB_PROPERTY(label)
WCDB_PROPERTY(birthday)
WCDB_PROPERTY(email)
WCDB_PROPERTY(mobile)
WCDB_PROPERTY(gender)
WCDB_PROPERTY(remark)
WCDB_PROPERTY(status)
WCDB_PROPERTY(extension)

@end
