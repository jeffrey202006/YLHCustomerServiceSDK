//
//  Utils.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/15.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ConnectionState) {
    NEW,
    CONNECTING,
    CONNECTED,
    CLOSED,
};

@interface Utils : NSObject
+(NSString*)getProtocUrl:(NSString*)roomId peerId:(NSString*)mPeerId h264:(BOOL)forceH264 VP9:(BOOL)forceVP9;
+(NSString*)getLinkUrl:(NSString*)roomId h264:(BOOL)forceH264 VP9:(BOOL)forceVP9;

+(NSNumber *)randomNumWithLength:(NSUInteger)lenght;

+(NSString *)randomStringWithLength:(NSUInteger)lenght;

/** jsonStr转字典对象 */
+(NSDictionary *)parseJSONStringToNSDictionary:(NSString *)jsonString;

/** data转字典对象 */
+(NSDictionary *)dataToDict:(NSData *)obj;

/** dictionary 转jsonstr */
+(NSString *)objectToJsonStr:(id)json;
@end

NS_ASSUME_NONNULL_END
