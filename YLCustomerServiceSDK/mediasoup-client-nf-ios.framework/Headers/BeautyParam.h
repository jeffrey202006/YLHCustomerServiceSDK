//
//  BeautyParam.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/10/21.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BeautyParam : NSObject
// 磨皮程度 0.0 ~ 1.0f 默认值 0.5
@property (nonatomic, assign) CGFloat beautyIntensity;

// 美肤程度 0.0 ~ 1.0f 默认值 0.3
@property (nonatomic, assign) CGFloat complexionIntensity;

// 瘦脸程度 0.0 ~ 1.0f  1
@property (nonatomic, assign) CGFloat faceLift;

 // 瘦下巴程度 0.0 ~ 1.0f  2
@property (nonatomic, assign) CGFloat faceShave;

// 大眼 0.0f ~ 1.0f   3
@property (nonatomic, assign) CGFloat eyeEnlargeIntensity;

// 短下巴-1.0f ~ 1.0f  4
@property (nonatomic, assign) CGFloat chinIntensity;

// 额头 0.0 ~ 1.0f  5
@property (nonatomic, assign) float foreheadIntensity;

// 小脸 0.0 ~ 1.0f     6
@property (nonatomic, assign) float faceNarrow;

// 眼距 -1.0f ~ 1.0f   7
@property (nonatomic, assign) float eyeDistanceIntensity;

// 眼角 -1.0f ~ 1.0f   8
@property (nonatomic, assign) float eyeCornerIntensity;

// 瘦鼻 0.0 ~ 1.0f     9
@property (nonatomic, assign) float noseThinIntensity;

// 鼻翼 0.0 ~ 1.0f    10
@property (nonatomic, assign) float alaeIntensity;

// 长鼻子 0.0 ~ 1.0f   11
@property (nonatomic, assign) float proboscisIntensity;

// 嘴型 0.0 ~ 1.0f;    12
@property (nonatomic, assign) float mouthEnlargeIntensity;

// 卧蚕 0.0f ~ 1.0f
@property (nonatomic, assign) float eyeFurrowsIntensity;

// 眼袋 0.0 ~ 1.0f
@property (nonatomic, assign) float eyeBagsIntensity;

// 亮眼 0.0 ~ 1.0f
@property (nonatomic, assign) float eyeBrightIntensity;

// 美牙 0.0 ~ 1.0f
@property (nonatomic, assign) float teethBeautyIntensity;

// 法令纹 0.0 ~ 1.0f
@property (nonatomic, assign) float nasolabialFoldsIntensity;

// 腮红 0.0 ~ 1.0f
@property (nonatomic, assign) CGFloat blushIntensity;

// 红润 0.0 ~ 1.0f
@property (nonatomic, assign) CGFloat ruddyIntensity;

-(instancetype)initBeautyParam;
@end

NS_ASSUME_NONNULL_END
