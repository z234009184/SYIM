//
//  SYIMMessage+WCTTableCoding.h
//  SYIM
//
//  Created by sunchenglei on 2024/2/17.
//

#import "SYIMMessage.h"
#import <WCDB/WCDB.h>

@interface SYIMMessage (WCTTableCoding) <WCTTableCoding>

//WCDB_PROPERTY(messageNo)
WCDB_PROPERTY(msgId)
WCDB_PROPERTY(msgTimeStamp)
WCDB_PROPERTY(sessionId)
WCDB_PROPERTY(status)
WCDB_PROPERTY(send)
WCDB_PROPERTY(requestId)
WCDB_PROPERTY(filePath)
WCDB_PROPERTY(sendUserInfo)
WCDB_PROPERTY(receiveUserInfo)
WCDB_PROPERTY(fromOutUserId)
WCDB_PROPERTY(toOutUserId)
WCDB_PROPERTY(messageSeq)
WCDB_PROPERTY(read)
WCDB_PROPERTY(remark)
WCDB_PROPERTY(messageBody)
@end
