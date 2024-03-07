//
//  SYContact.h
//  SYIM
//
//  Created by sunchenglei on 2024/2/17.
//

#import <Foundation/Foundation.h>

@interface SYIMContact : NSObject

@property (nonatomic, copy) NSString  *outUserId;
/// 用户ID(第三方业务用户ID)
@property (nonatomic, copy) NSString  *userId;
/// 用户头像
@property (nonatomic, copy) NSString  *avatar;
/// 用户昵称
@property (nonatomic, copy) NSString  *nickName;
/// 用户类型
@property (nonatomic, copy) NSString  *type;
/// 用户标签
@property (nonatomic, copy) NSString  *label;
/// 生日
@property (nonatomic, copy) NSString  *birthday;
/// 邮箱
@property (nonatomic, copy) NSString  *email;
/// 手机号
@property (nonatomic, copy) NSString  *mobile;
/// 性别
@property (nonatomic, copy) NSString  *gender;
/// 备注
@property (nonatomic, copy) NSString  *remark;
/// 好友类型 1为好友 0为陌⽣⼈
@property (nonatomic, assign) NSInteger  status;
/// 拓展
@property(nonatomic, copy) NSString *extension;

// 男女
- (NSString *)genderString;
// 拓展
- (NSDictionary *)getExtension;
@end
