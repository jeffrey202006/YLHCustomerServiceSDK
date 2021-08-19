//
//  RoomStore.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/14.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//
#import "RoomInfo.h"
#import "Me.h"
#import "Producers.h"
#import "Consumers.h"
#import "Peers.h"
#import "Notify.h"
#import "Utils.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SLDataUpdateDelegate <NSObject>

/** 数据更新事件回调 */
- (void)updateEvent:(Notify * _Nullable)notify;

@end

@interface RoomStore : NSObject

@property (nonatomic, weak) id<SLDataUpdateDelegate> delegate;

@property (nonatomic, strong) RoomInfo *mRoomInfo;

@property (nonatomic, strong) Me *mMe;

@property (nonatomic, strong) Producers *mProducers;

@property (nonatomic, strong) Consumers *mConsumers;

@property (nonatomic, strong) Peers *mPeers;

@property (nonatomic, strong) Notify *mNotify;

// RoomInfo
-(void)setRoomUrl:(NSString*)roomId url:(NSString*)strUrl;
-(void)setRoomState:(ConnectionState)status;
-(void)setRoomActivitySpeaker:(NSString*)peerId;
-(void)setRoomStatsPeerId:(NSString*)peerId;

// Me
-(void)setMe:(NSString*)peerId name:(NSString*)displayName info:(DeviceInfo*)device;
-(void)setMediaCapabilities:(BOOL)canSendMic cam:(BOOL)canSendCam;
-(void)setCanChangeCam:(BOOL)canChangeCam;
-(void)setDisplayName:(NSString*)displayName;
-(void)setAudioOnlyState:(BOOL)enabled;
-(void)setAudioOnlyInProgress:(BOOL)enabled;
-(void)setAudioMuteState:(BOOL)enabled;
-(void)setRestartIceInProgress:(BOOL)restartInProgress;
-(void)setCamInProgress:(BOOL)inProgress;

// Producer
-(void)addProducer:(Producer*)producer;
-(void)setProducerPaused:(NSString*)producerId;
-(void)setProducerResumed:(NSString*)producerId;
-(void)removeProducer:(NSString*)producerId;
-(void)setProducerScore:(NSString*)producerId score:(NSString*)strScore;

// Peer
-(void)addPeer:(NSString*)peerId peerInfo:(NSDictionary*)peer;
-(void)setPeerDisplayName:(NSString*)peerId name:(NSString*)displayName;
-(void)setIsAnchor:(NSString*)peerId anchor:(BOOL)bAnchor;
-(void)removePeer:(NSString*)peerId;

// Consumer
-(void)addConsumer:(NSString*)peerId type:(NSString*)mType consumer:(Consumer*)mConsumer paused:(BOOL)remotePaused;
-(void)removeConsumer:(NSString*)peerId consumerId:(NSString*)mId;
-(void)setConsumerPaused:(NSString*)consumerId type:(NSString*)originator;
-(void)setConsumerResumed:(NSString*)consumerId type:(NSString*)originator;
-(void)setConsumerScore:(NSString*)consumerId score:(NSString*)mScore;
-(void)setConsumerCurrentLayers:(NSString*)consumerId param1:(NSInteger)spatiallayer param2:(NSInteger)temprallayer;

// Notify
-(void)addNotify:(NSString*)mText;
-(void)addNotify:(NSString*)mText timeout:(NSInteger)mTimeout;
-(void)addNotify:(NSString*)mType text:(NSString*)mText;
-(void)addNotify:(NSString*)mType text:(NSString*)mText text2:(NSString*)mText2;

@end

NS_ASSUME_NONNULL_END
