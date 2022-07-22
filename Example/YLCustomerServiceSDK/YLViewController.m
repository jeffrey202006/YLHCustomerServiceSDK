//
//  YLViewController.m
//  YLCustomerServiceSDK
//
//  Created by liaohai on 06/02/2021.
//  Copyright (c) 2021 liaohai. All rights reserved.
//

#import "YLViewController.h"
#import <YLCustomerService/YLCustomerService.h>

@interface YLViewController ()

@end

@implementation YLViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
    
}

- (IBAction)icsHomeClickAction:(id)sender {
    [self icsManager:^{
        YLCustomDeskHomeVC *vc = [[YLCustomDeskHomeVC alloc] init];
        YLBaseNavVC *navVC = [[YLBaseNavVC alloc] initWithRootViewController:vc];
        navVC.modalPresentationStyle = UIModalPresentationFullScreen;
        [self presentViewController:navVC animated:true completion:nil];
    }];
}

- (IBAction)icsClickAction:(id)sender {
    [self icsManager:^{
        YLHomeCstmVC *vc = [[YLHomeCstmVC alloc] init];
        YLBaseNavVC *navVC = [[YLBaseNavVC alloc] initWithRootViewController:vc];
        navVC.modalPresentationStyle = UIModalPresentationFullScreen;
        [self presentViewController:navVC animated:true completion:nil];
    }];
}

- (IBAction)icsListClickAction:(id)sender {
    [self icsManager:^{
        YLCustomListVC *vc = [[YLCustomListVC alloc] init];
        YLBaseNavVC *navVC = [[YLBaseNavVC alloc] initWithRootViewController:vc];
        navVC.modalPresentationStyle = UIModalPresentationFullScreen;
        [self presentViewController:navVC animated:true completion:nil];
    }];
}

- (void)icsManager:(void(^ _Nonnull)(void))success {
    //根据需求可自行配置环境 这里是测试环境
    [YLCustomerServiceManager sharedManager].env = 1;
    [[YLCustomerServiceManager sharedManager] setLanguagesType:6];

    YLLoginUserModel *loginModel = [[YLLoginUserModel alloc] init];
    loginModel.accessToken = @"d5bc53fdb45vfg24123324565864";
    loginModel.userUid = @"24834340";
    //来源页 测试使用
    loginModel.sourcePage = @"test";
    [[YLCustomerServiceManager sharedManager] loginWithUserInfo:loginModel success:^{
        //登录验证成功，开始跳转相应页面
        success();
    } error:^(int code, NSString *msg) {
        NSLog(@"code:%d,msg:%@",code,msg);
    }];
}

@end
