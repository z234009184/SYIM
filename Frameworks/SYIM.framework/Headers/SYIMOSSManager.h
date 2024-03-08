//
//  SYIMOSSManager.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/21.
//

#import <Foundation/Foundation.h>
#import "NSObject+SYIM.h"

@class SYIMOSSConfig;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, SYIMOSSUploadType) {
    SYIMOSSUploadTypeImage = 1, // 图片
    SYIMOSSUploadTypeVideo = 2, // 视频
    SYIMOSSUploadTypeVoice = 3, // 语音
    SYIMOSSUploadTypeOther = 99 // 其他
};

@interface SYIMOSSManager : NSObject <SYSingleton>
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/// 根据 type获取上传路径
- (NSString *)getOssSavePathWithType:(SYIMOSSUploadType)type;

/// 获取文件上传的名称 通过 文件拓展名
/// 比如传入 mp3 则返回 1747865356842.mp3
/// 比如传入 png 则返回 168287438927.png
/// 文件名字是随机唯一不重复的
- (NSString *)getFileNameWithFileExtensionName:(NSString *)fileExtName;

/// 上传文件
/// filePath : 要上传的文件路径
- (void)uploadFileWithFilePath:(NSString *)filePath 
                          type:(SYIMOSSUploadType)type
                      progress:(void (^__nullable) (CGFloat))progress
                       success:(void (^__nullable) (NSString *url))success
                          fail:(void (^__nullable) (NSString *errMsg))fail;

/// 上传文件
/// filePath : 要上传的文件路径
/// savePath : 要上传 oss 的路径 通过 -[SYIMOSSManager getOssSavePathWithType:] 获取
- (void)uploadFileWithFilePath:(NSString *)filePath
                      savePath:(NSString *)savePath
                      progress:(void (^__nullable) (CGFloat))progress
                       success:(void (^__nullable) (NSString *url))success
                          fail:(void (^__nullable) (NSString *errMsg))fail;


/// 上传文件
/// fileData : 要上传的文件数据
- (void)uploadFileWithFileData:(NSData *)fileData
                          type:(SYIMOSSUploadType)type
                      fileName:(NSString *)fileName
                      progress:(void (^__nullable) (CGFloat))progress
                       success:(void (^__nullable) (NSString *url))success
                          fail:(void (^__nullable) (NSString *errMsg))fail;

@end

NS_ASSUME_NONNULL_END
