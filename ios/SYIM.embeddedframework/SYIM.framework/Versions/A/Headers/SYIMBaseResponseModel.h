//
//  SYIMBaseResponseModel.h
//  AFNetworking
//
//  Created by 张国梁 on 2024/2/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, SYIMBaseResponseResult) {
    SYIMBaseResponseResult_ServerError = -1, // 服务器异常
    SYIMBaseResponseResult_Success = 0, // 成功
    SYIMBaseResponseResult_UnknowError = 1, // 未知的业务异常. 原因多为业务状态未达标, 需要提醒或显示给客户端, 或⽤于未归类的业务响应码
    SYIMBaseResponseResult_HeaderError = 2, // ⾮法请求, header检验不通过, 如参数缺失, 签名验证不通过, timestamp过期, token失效等
    SYIMBaseResponseResult_ParamError = 3, // 请求参数有误. 参数缺失, 参数值错误等. 请检查参数是否合法
    SYIMBaseResponseResult_Forbidden = 4 // 权限拒绝
};


@interface SYIMBaseResponseModel : NSObject

@property(nonatomic, assign) SYIMBaseResponseResult result;

@property(nonatomic, copy) NSString *message;

@property(nonatomic, strong) NSDictionary *data;

@end

NS_ASSUME_NONNULL_END
