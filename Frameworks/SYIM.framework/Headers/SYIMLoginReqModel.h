//
//  SYIMLoginReqModel.h
//  SYIM
//
//  Created by 张国梁 on 2024/2/20.
//

#import "SYIMBaseRequestModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SYIMLoginReqModel : SYIMBaseRequestModel
@property(nonatomic, copy) NSString *account;
@property(nonatomic, copy) NSString *password;
@end

NS_ASSUME_NONNULL_END
