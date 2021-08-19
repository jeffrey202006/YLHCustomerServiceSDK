//
//  MediasoupClientIosManager.h
//  mediasoup-client-ios
//
//  Created by 永亮iOS on 2020/12/9.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MediasoupClientIosManager : NSObject

+ (MediasoupClientIosManager *)shareManager;

+ (void)setWebRTCAudioSession;

+ (void)initWebRTCAudioSpeakerSession;

+ (void)initWebRTCAudioSession;

/**
    设置服务地址
    参数：host 服务器地址  port 服务端口
 */
- (void)setMediaServerAddrWith:(NSString *)host port:(NSString *)port;

/**
   设置服务地址
   参数：host 服务器地址 （不含端口）
*/
- (void)setMediaServerAddrWith:(NSString *)host;

- (NSString *)getHost;
- (NSString *)getPort;

@end

NS_ASSUME_NONNULL_END
