//
//  RoomOption.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/14.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//
#import "BeautyParam.h"
#import "DeviceInfo.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RoomOption : NSObject
@property (nonatomic, strong) DeviceInfo *mDevice;

@property (nonatomic, assign) BOOL mForceTcp;
@property (nonatomic, assign) BOOL mProduce;

@property (nonatomic, assign) BOOL mConsume;
@property (nonatomic, assign) BOOL mUseDataChannel;

@property (nonatomic, assign) BOOL mProduceVideo;
@property (nonatomic, assign) BOOL mProduceAudio;

@property (nonatomic, copy) NSString* mAnchorId;

@property (nonatomic, assign) BOOL usingFrontCamera;

@property (nonatomic, copy) NSString* mStickerName;

@property (nonatomic, copy) NSString* mFilterName;

@property (nonatomic, strong) BeautyParam* mBeautyParam;

/** 切换摄像头方向（1：横屏 0：竖屏） */
@property (nonatomic, assign) NSInteger mScreenOrientation;

@end

NS_ASSUME_NONNULL_END
