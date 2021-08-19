//
//  MDKeepBGRunManager.h
//  mediasoupdemo
//
//  Created by 永亮iOS on 2020/11/4.
//  Copyright © 2020 ch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MDKeepBGRunManager : NSObject

+ (MDKeepBGRunManager *)shareManager;

/**
 开启后台运行
 */
- (void)startBGRun;

/**
 关闭后台运行
 */
- (void)stopBGRun;

@end

NS_ASSUME_NONNULL_END
