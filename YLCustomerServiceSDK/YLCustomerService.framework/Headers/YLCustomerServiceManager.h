//
//  YLCustomerServiceManager.h
//  YLCustomerServiceManager
//
//  Created by 永亮iOS on 2020/11/11.
//  Copyright © 2020 永亮iOS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YLLoginUserModel.h"

@interface YLCustomerServiceManager : NSObject

+ (YLCustomerServiceManager *_Nonnull)sharedManager;

@property (nonatomic, assign) BOOL supportSkinChange; //皮肤切换
@property (nonatomic, assign) BOOL hiddenPresentBack; //返回

@property (nonatomic, assign) NSInteger env; //0 生产， 1 测试

/**
 用户登录
 参数
    userInfo：用户信息的用户模型
    success：成功回调
    error：失败回调（code：1:参数不合法 2：im登陆失败 3：用户信息同步失败）
*/
- (void)loginWithUserInfo:(YLLoginUserModel *_Nonnull)userInfo success:(void(^ _Nonnull)(void))success error:(void(^ _Nonnull)(int code, NSString * _Nullable msg))error;


/**
 游客登录
 参数
    success：成功回调
    error：失败回调（code：0）
*/
- (void)loginVisitor:(void(^ _Nonnull)(void))success error:(void(^ _Nonnull)(int code, NSString *_Nullable msg))error;

/**关闭*/
- (void)close;

@end
