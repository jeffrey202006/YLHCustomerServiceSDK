//
//  YLLoginUserModel.h
//  ylcstmsv
//
//  Created by 永亮iOS on 2020/9/8.
//  Copyright © 2020 永亮iOS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YLLoginUserModel : NSObject

@property (nonatomic, strong) NSString *avatar; //用户头像
@property (nonatomic, strong) NSString *email; //用户email
@property (nonatomic, strong) NSString *mobile; //用户手机号
@property (nonatomic, strong) NSString *nickname; //用户昵称
@property (nonatomic, strong) NSString *realName; //真实名字
@property (nonatomic, strong) NSString *remark; //用户备注
@property (nonatomic, strong) NSString *username; //用户名
@property (nonatomic, strong) NSString *sourcePage; //来源页

@property (nonatomic, strong) NSString *userUid; //用户Uid（必传）
@property (nonatomic, strong) NSString *accessToken; //accessToken（必传）

@end

NS_ASSUME_NONNULL_END
