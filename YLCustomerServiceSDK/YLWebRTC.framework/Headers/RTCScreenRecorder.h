//
//  RTCScreenRecorder.h
//  sources
//
//  Created by 永亮iOS on 2020/10/30.
//

#import "RTCMacros.h"
#import "RTCVideoCapturer.h"

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#endif

RTC_OBJC_EXPORT
@interface RTC_OBJC_TYPE (RTCScreenRecorder) : RTC_OBJC_TYPE (RTCVideoCapturer)

- (void)processSampleBuffer:(CMSampleBufferRef)sampleBuffer;

@end

