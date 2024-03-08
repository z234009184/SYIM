//
//  SYLogManager.h
//  HYProject
//
//  Created by 张国梁 on 2023/11/17.
//

#import <Foundation/Foundation.h>
#import <CocoaLumberjack/CocoaLumberjack.h>

NS_ASSUME_NONNULL_BEGIN

//声明外部变量
#define LOG_LEVEL_DEF DDLogLevelVerbose


// 默认的宏，方便使用
#define SYLog(frmt, ...)      SYIMLogV(frmt, ##__VA_ARGS__)

// 提供不同的宏，对应到特定参数的对外接口
#define SYIMLogE(frmt, ...)       DDLogError(frmt, ##__VA_ARGS__)
#define SYIMLogW(frmt, ...)       DDLogWarn(frmt, ##__VA_ARGS__)
#define SYIMLogI(frmt, ...)       DDLogInfo(frmt, ##__VA_ARGS__)
#define SYIMLogD(frmt, ...)       DDLogDebug(frmt, ##__VA_ARGS__)
#define SYIMLogV(frmt, ...)       DDLogVerbose(frmt, ##__VA_ARGS__)

@interface SYIMLogManager : NSObject
//初始化
+ (void)start;
+ (instancetype)sharedInstance;
- (instancetype)init NS_UNAVAILABLE;

//添加控制台logger
- (void)addOSLogger;
//添加文件写入Logger
- (void)addFileLogger;
//移除控制台logger
- (void)removeOSLogger;
//移除文件写入Logger
- (void)removeFileLogger;

@end

NS_ASSUME_NONNULL_END
