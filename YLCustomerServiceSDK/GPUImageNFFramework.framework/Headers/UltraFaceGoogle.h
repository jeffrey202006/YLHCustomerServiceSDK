//
//  UltraFaceGoogle.h
//  YLCamera
//
//  Created by 永亮iOS on 2020/10/22.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UltraFaceGoogleDelegate <NSObject>
- (void)checkFaceFinished:(NSArray*)points hasFace:(BOOL)bHasFace theta:(GLfloat)theta;
@end

@interface UltraFaceGoogle : NSObject

@property (nonatomic, strong) UIImageView *imageView;

@property (assign, atomic) BOOL hasFace; //是否有人脸
@property (strong, atomic) NSArray *facepoints; //人脸坐标
@property (nonatomic, assign) BOOL usingFrontCamera;

@property (nonatomic, weak) id<UltraFaceGoogleDelegate> delegate;

@property (nonatomic, assign) double theta;

+ (UltraFaceGoogle *)shareManager;

- (void)faceWithPixelBufferRef:(CVPixelBufferRef)pixelBuffer;
- (void)faceWithSampleBuffer:(CMSampleBufferRef)sampleBuffer;

- (void)facesForSampleBuffer:(CMSampleBufferRef)sampleBuffer;

- (BOOL)performSemaphoreGet;

- (void)facesForPixelBuffer:(CVPixelBufferRef)pixelBuffer;

-(CMSampleBufferRef)pixelBufferToSampleBuffer:(CVPixelBufferRef)pixelBuffer;

@end

NS_ASSUME_NONNULL_END
