//
//  Peer.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/14.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import "Info.h"
#import "MDWebRTC.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Peer : Info
@property (nonatomic, copy) NSString* mId;
@property (nonatomic, copy) NSString *mDisplayName;
@property (nonatomic, assign) BOOL mIsAnchor; //主播
@property (nonatomic, strong) DeviceInfo *mDevice;

@property (nonatomic, strong) RTCVideoTrack *mVideoTrack;

@property (nonatomic, strong) NSMutableSet *mConsumersSet;

-(NSString*)getId;
-(NSString*)getDisplayName;
-(DeviceInfo*)getDevic;

-(instancetype)initPeer:(NSDictionary *)result;
@end


NS_ASSUME_NONNULL_END
