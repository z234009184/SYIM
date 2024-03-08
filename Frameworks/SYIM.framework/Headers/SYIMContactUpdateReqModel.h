//
//  SYIMContactUpdateReqModel.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/18.
//

#import "SYIMBaseRequestModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMContactUpdateReqModel : SYIMBaseRequestModel

@property(nonatomic, copy) NSString *outUserId;
@property(nonatomic, copy) NSString *nickName;
@property(nonatomic, copy) NSString *avatar;
@property(nonatomic, copy) NSString *birthday;
@property(nonatomic, copy) NSString *email;
@property(nonatomic, copy) NSString *mobile;
@property(nonatomic, copy) NSString *gender;

@end

NS_ASSUME_NONNULL_END
