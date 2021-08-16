//
//  RTCUtils.h
//  mediasoup-client-ios
//
//  Created by Ethan.
//  Copyright © 2019 Ethan. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "BeautyParam.h"
#import "MDWebRTC.h"
#import "Mediasoupclient.h"
#import "MDEnumerate.h"
#import "GPUImage.h"

#ifndef RTCUtils_h
#define RTCUtils_h

@interface RTCUtils : NSObject<RTCCaptureSessionDelegate>

/** 视频开启状态 */
@property (nonatomic, assign) BOOL videoOpen;

/** 音频开启状态 */
@property (nonatomic, assign) BOOL audioOpen;

/** 录屏状态 */
@property (nonatomic, assign) BOOL screenRenderOpen;

/** 道具名称  */
@property (atomic, copy) NSString* mStickerName;

/** 滤镜  */
@property (atomic, copy) NSString* mFilterName;

/** 瘦脸，腮红  */
@property (nonatomic, strong) BeautyParam* mBeautyParam;

/** 手动控制旋转方向  */
@property (atomic, assign) BOOL manualOrientation;

/** 人脸识别开关  */
@property (nonatomic, assign) BOOL ultraFaceEnable;

/** 切换摄像头方向（1：横屏 0：竖屏） */
@property (atomic, assign) NSInteger mScreenOrientation;

@property (nonatomic, strong) RTCScreenRecorder *screenRender;

@property (nonatomic, strong) RTCCameraVideoCapturer *videoCapture;

@property (nonatomic, assign) int32_t frameRate;

/** 切换前后置摄像头*/
- (void)setPreferCameraFace:(BOOL)bFrontCamera;

/** 创建视频 */
- (RTCVideoTrack *)createVideoTrack;

/** 创建音频 */
- (RTCAudioTrack *)createAudioTrack;

/**创建录屏*/
- (RTCVideoTrack *)createScreenRenderTrack;

/** 切换摄像头 */
- (void)swichCamera;

/** 切换摄像头方向（1：横屏 0：竖屏） */
- (void)switchVideoOrientationWithScreen:(NSInteger)screen;

/** 采集关闭 */
- (void)mediaClose;

/*!
    @brief Encoding Settings
    @param isActive Indicates that this encoding is actually sent
    @param maxBitrateBps The maximum bitrate used for this encoding
    @param minBitrateBps The minimum bitrate used for this encoding
    @param maxFramerate The maximum framerate used for this encoding
    @param numTemporalLayers The requested number of temporal layers
    @param scaleResolutionDownBy Scale the width and height down by this factor for video
 */
+(RTCRtpEncodingParameters *)genRtpEncodingParameters:(bool)isActive maxBitrateBps:(NSInteger)maxBitrateBps minBitrateBps:(NSInteger)minBitrateBps maxFramerate:(NSInteger)maxFramerate numTemporalLayers:(NSInteger)numTemporalLayers scaleResolutionDownBy:(NSInteger)scaleResolutionDownBy;

- (void)changeShape:(float*)shapeArray;

- (void)changeShapeByParam:(BeautyParam*)beautyParam;

- (void)changeBeautyParam:(float)param1 brightness:(float)param2;

- (void)changeRuddyParam:(float)ruddyness;

- (void)changeBlushParam:(float)blushness;

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

@end

#endif /* RTCUtils_h */
