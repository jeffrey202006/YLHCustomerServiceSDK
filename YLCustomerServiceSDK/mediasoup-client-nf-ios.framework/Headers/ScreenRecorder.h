//
//  ScreenRecorder.h
//  mediasoup-client-ios
//
//  Created by 永亮iOS on 2020/10/29.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMedia/CMSampleBuffer.h>

@interface ScreenRecorder : NSObject

@property (nonatomic, assign) int32_t rotation; //方向
@property (nonatomic, assign) int32_t scale; //分辨率

+ (ScreenRecorder *)sharedManager;

- (void)pushExternalVideoFrame:(CMSampleBufferRef)sampleBuffer; //推流

- (void)finish;

@end

