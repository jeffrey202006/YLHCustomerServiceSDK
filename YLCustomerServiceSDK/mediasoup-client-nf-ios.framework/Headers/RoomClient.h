//
//  RoomClient.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/15.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//
#import "BeautyParam.h"
#import "RTCUtils.h"
#import "RoomStore.h"
#import "RoomOption.h"
#import "MediasoupDevice.h"
#import "MDEnumerate.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RoomClient : NSObject

@property(nonatomic, copy) RoomOption* mRoomOption;

@property(nonatomic, copy) NSString* mDisplayName;

@property(nonatomic, copy) NSString* mProtocUrl;

@property(nonatomic, strong) MediasoupDevice* mMediasoupDevice;

@property(nonatomic, strong) SendTransport* mSendTransport;

@property(nonatomic, strong) RecvTransport* mRecvTransport;

@property(nonatomic, strong) RTCVideoTrack* mVideoTrack;

@property(nonatomic, strong) RTCAudioTrack* mAudioTrack;

@property(nonatomic, strong) Producer* mCamProducer;
@property(nonatomic, strong) Producer* mMicProducer;

@property(nonatomic, strong) RoomStore* mRoomStrore;
@property(nonatomic, strong) NSMutableDictionary* mConsumers;

@property(nonatomic, strong) RTCUtils* mRtcUtils;

@property(nonatomic, assign) BOOL screenRenderEnable; //录屏直播

-(void)join;

-(void)enableMic;
-(void)disableMic;
-(void)muteMic;
-(void)unmuteMic;

-(void)enableCam;
-(void)disableCam;
-(void)changeCam;

-(void)enableAudioOnly;
-(void)disableAudioOnly;

-(void)muteAudio;
-(void)unmuteAudio;

-(void)createProducer;
-(void)destroyProducer;

/**
 关闭mediasoup
*/
-(void)close;

/**
 开启级连，连麦功能
 roomId：房间id
*/
- (void)cascade:(NSString *)roomId;

/**
 取消级连
 roomId：房间id
*/
- (void)cascadeClose:(NSString *)roomId;

/**
 切换滤镜
 type：滤镜类型
*/
- (void)changeFilter:(MD_ENUM_FILTER_TYPE)type;

/**
 切换道具
 type：滤镜类型
*/
- (void)changeSticker:(MD_ENUM_STICKER_TYPE)type;

/**
 获取当前美颜配置
*/
- (BeautyParam*)getBeautyParam;

/**
 切换美颜
 beautyParam：磨皮程度
 ntype：滤镜类型
*/
- (void)changeBeautyParam:(BeautyParam*)beautyParam type:(MD_ENUM_BEAUTY_TYPE)nType;

/**
 切换摄像头方向
 screen：1：横屏， 0：竖屏
 */
- (void)switchVideoOrientationWithScreen:(NSInteger)screen;

/**
 录屏传递流
 sampleBuffer：屏幕抓取的sample buffer
*/
- (void)processRecorderSampleBuffer:(CMSampleBufferRef)sampleBuffer;

/**
 初始化room client，
 roomStore：房间信息，消费者，生产者
 roomId：房间id
 peerId：观看id
 name：显示昵称
 h264：支持h246编码
 VP9：支持VP9编码
 option：画面设置选项
*/
-(instancetype)init:(RoomStore*)roomStore roomId:(NSString*)mRoomId peerId:(NSString*)mPeerId name:(NSString*)displayName
               h264:(BOOL)forceH264 VP9:(BOOL)forceVP9 option:(RoomOption*)options;

@end

NS_ASSUME_NONNULL_END
