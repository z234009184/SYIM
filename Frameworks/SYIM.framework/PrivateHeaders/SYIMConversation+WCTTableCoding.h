//
//  SYConversation+WCTTableCoding.h
//  SYIM
//
//  Created by sunchenglei on 2024/2/17.
//

#import "SYIMConversation.h"
#import <WCDB/WCDB.h>

@interface SYIMConversation (WCTTableCoding) <WCTTableCoding>

WCDB_PROPERTY(sessionId)
WCDB_PROPERTY(sessionType)
WCDB_PROPERTY(nickName)
WCDB_PROPERTY(remark)
WCDB_PROPERTY(avatar)
WCDB_PROPERTY(associationId)
WCDB_PROPERTY(sendUserId)
WCDB_PROPERTY(msgTimeStamp)
WCDB_PROPERTY(unReadNum)
WCDB_PROPERTY(topping)
WCDB_PROPERTY(contact)


@end
