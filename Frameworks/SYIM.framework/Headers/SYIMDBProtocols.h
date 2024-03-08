//
//  SYIMDBProtocols.h
//  AFNetworking
//
//  Created by sunchenglei on 2024/2/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class WCTDatabase;

@protocol SYIMDBProtocols <NSObject>

@optional
- (NSString *)tablename;
- (NSString *)tablenameByID:(NSString *)suffixTableName;

@end

// DAO 要求数据库 返回相关操作数据库的连接实例
@protocol SYDAODelegate <NSObject>

@optional
- (WCTDatabase *)sySessionDatabaseObject;
- (WCTDatabase *)syDatabaseObject;
@end

NS_ASSUME_NONNULL_END
