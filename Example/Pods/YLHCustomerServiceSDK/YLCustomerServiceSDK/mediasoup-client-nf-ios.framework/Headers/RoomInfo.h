//
//  RoomInfo.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/14.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RoomInfo : NSObject

@property (nonatomic, copy) NSString* mUrl;
@property (nonatomic, copy) NSString *mRoomId;

@property (nonatomic, copy) NSString* mActiveSpeakerId;
@property (nonatomic, copy) NSString *mStatsPeerId;

@end

NS_ASSUME_NONNULL_END
