//
//  MDVideoRecordView.h
//  mediasoup-client-ios
//
//  Created by 永亮iOS on 2020/11/16.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MDEnumerate.h"

typedef void (^MDVideoRecordViewVideoSaveBlock)(NSString * _Nullable filePath, NSError *error);

#define MDVideoRecordPath @"Documents/MediaSoup/Video"

NS_ASSUME_NONNULL_BEGIN

@interface MDVideoRecordView: UIView

// 保存相册
@property (nonatomic, assign) BOOL savedPhotosAlbum;
@property (nonatomic, strong) MDVideoRecordViewVideoSaveBlock videoSaveBlock;

// 录制地址
@property (nonatomic, strong) NSString *pathToMovie;

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

// 美型
- (void)changeShape:(float *)shapeArray;

// 磨皮
- (void)changeBeautyParam:(float)beautyness;

// 美白
- (void)changeBrightParam:(float)brightness;

// 红润
- (void)changeRuddyParam:(float)ruddyness;

// 腮红
- (void)changeBlushParam:(float)blushness;

// 开始录制
- (void)starWrite;

// 结束录制
- (void)stopWrite;

// 切换摄像头
- (void)rotateCamera;

// 关闭
- (void)stopCameraCapture;

// 开始
- (void)startCameraCapture;

// 清除所有的视频缓存
+ (void)clearVideo;

@end

NS_ASSUME_NONNULL_END
