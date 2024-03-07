//
//  SYBaseModel.h
//  AFNetworking
//
//  Created by 张国梁 on 2024/2/5.
//

#import <Foundation/Foundation.h>
#import "SYIMBaseResponseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMBaseRequestModel : NSObject

- (NSString *)getRequstName;

- (NSString *)getRequstUrl;

- (NSString *)getMethod;

- (void)requestWithResponseClass:(Class __nullable)cls complete:(void (^ __nullable) (SYIMBaseResponseModel *res, id data, NSError *err))complete;

/// 上传文件
/// - Parameters:
///   - url: 上传地址
///   - filePath: 文件路径
///   - mutipartData: 文件参数
///   - progress: 上传进度
///   - success: 成功回调
///   - fail: 失败回调
- (void)uploadOssFileWithUrl:(NSString *)url
                    filePath:(NSString *)filePath
                    fileName:(NSString *)fileName
                mutipartData:(NSDictionary *)mutipartData
                    progress:(void (^__nullable) (CGFloat))progress
                     success:(void (^__nullable) (void))success
                        fail:(void (^__nullable) (NSString *errMsg))fail;

/// 上传文件
/// - Parameters:
///   - url: 上传地址
///   - fileData: 文件数据
///   - mutipartData: 文件参数
///   - progress: 上传进度
///   - success: 成功回调
///   - fail: 失败回调
- (void)uploadOssFileWithUrl:(NSString *)url
                    fileData:(NSData *)fileData
                    fileName:(NSString *)fileName
                mutipartData:(NSDictionary *)mutipartData
                    progress:(void (^__nullable) (CGFloat))progress
                     success:(void (^__nullable) (void))success
                        fail:(void (^__nullable) (NSString *errMsg))fail;

@end

NS_ASSUME_NONNULL_END
