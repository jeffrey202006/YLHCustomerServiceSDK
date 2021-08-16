//
//  Me.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/14.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import "Info.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Me : Info

@property (nonatomic, copy) NSString* mId;
@property (nonatomic, copy) NSString *mDisplayName;
@property (nonatomic, assign) BOOL mDisplayNameSet;
@property (nonatomic, strong) DeviceInfo *mDevice;

@property (nonatomic, assign) BOOL mCanSendMic;
@property (nonatomic, assign) BOOL mCanSendCam;

@property (nonatomic, assign) BOOL mCanChangeCam;
@property (nonatomic, assign) BOOL mCamInProgress;

@property (nonatomic, assign) BOOL mShareInProgress;
@property (nonatomic, assign) BOOL mAudioOnly;

@property (nonatomic, assign) BOOL mAudioInProgress;
@property (nonatomic, assign) BOOL mAudioMuted;
@property (nonatomic, assign) BOOL mRestartIceInProgress;

-(void)clear;

-(NSString*)getId;
-(NSString*)getDisplayName;
-(DeviceInfo*)getDevic;
@end

NS_ASSUME_NONNULL_END
