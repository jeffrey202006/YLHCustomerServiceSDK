//
//  YLViewController.m
//  YLCustomerServiceSDK
//
//  Created by liaohai on 06/02/2021.
//  Copyright (c) 2021 liaohai. All rights reserved.
//

#import "YLViewController.h"
//#import "HBRSAHandler.h"
#import <YLCustomerService/YLCustomerService.h>
//#import <YLHCustomerServiceSDK/YLCustomerService.h>

static NSString * _Nullable appKey = @"JFOIhKxj";
static NSString * _Nullable appSecret = @"755eed37afea3bda04d932479448eb5eb52fe319";
static NSString * _Nullable privateKey = @"MIICdQIBADANBgkqhkiG9w0BAQEFAASCAl8wggJbAgEAAoGBAI+jWul3oeF+ZLTDPnDCS7kwn3iVxe9D+d07WUCIbW49xhReQnsRXYio4rD7MOstLfqgLgele/QmjT5NM6M2HVW3tUP/+4rG+YmhnzCrHiWV5pEh9PLnFgYXUIDuNc0qyEKsktt5ycY/o3V1A3BWvU0XYBCUrMZkC1UnosLeCQrtAgMBAAECgYBm/rqEqDzSpT/vAgU284s6umvPGo44l+SFxzWjeXAGWZM8La678mLASGFsiGG2cMoEaXE4GGg+VJp47wC06muzYLwjdrBvrRs2hckI6mGdT9XuM04tbmlnaQsHxDiMLdJSkl8wDWpZCYY5arlkYypIak3411/r73d1YEgpZRKD3QJBAOVtJPzDcUZF5RQqMSnKNxHNo67TiYaS6isAVxVwJgqePxfDJxopTsq4rvDOV+e2lIDQlJcBqFZz/DRhALvsYeMCQQCgRnP9rfDHYTeEuhYfFonoKzhvV6Tk/P6+QxLpMeffwRGjSBKoXHu6dFxheA6WOULKgcLQQiPbrvPuVExgUDjvAkBdZF6oHg8gYhdsa/hzYIOmVaWJ50aWZ3u3YX4RlgOGUwCv9ZsXRTVzxFZCZFzYUDSHc2DpT51tA+3ojIw183WtAkBI5mLBwwkelvB6tW10bHsDmA0OT84XvZ9dCQMkAGgYVSfhndmmrJI2h9CxILt5xsfDdmwW786BkL0w7TTkJfkPAkBdHmW2luQQFldE/xAvdldAiwFS6HalyKbgNt1hNCf8Eao+g4bNO1WZFWzUZYnIMEvXo9V0pfiMhjHLv+iSZJZL";

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
    [[YLCustomerServiceManager sharedManager] setAppKey:appKey appSecret:appSecret privateKey:privateKey];
    [YLCustomerServiceManager sharedManager].env = 3;
    YLLoginUserModel *loginModel = [[YLLoginUserModel alloc] init];
    loginModel.avatar = @"";
    loginModel.userUid = @"20016304";
    loginModel.nickname = @"test";
    loginModel.mobile = @"15800000001";
    loginModel.username = @"test";
    loginModel.sourcePage = @"test";

    [[YLCustomerServiceManager sharedManager] loginWithUserInfo:loginModel success:^{
        success();
    } error:^(int code, NSString *msg) {
        
    }];
}

@end
