//
//  SYIMMessageBody+WCTTableCoding.h
//  AFNetworking
//
//  Created by sunchenglei on 2024/2/20.
//

#import "SYIMMessageBody.h"
#import <WCDB/WCDB.h>

@interface SYIMMessageBody (WCTTableCoding) <WCTTableCoding>

WCDB_PROPERTY(content)
WCDB_PROPERTY(type)

@end
