//
//  ConsumerExtend.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/14.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import "Consumer.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ConsumerExtend : NSObject
@property (nonatomic, copy) NSString* mType;
@property (nonatomic, copy) NSString* mScore;

@property (nonatomic, assign) BOOL mLocalPaused;
@property (nonatomic, assign) BOOL mRemotePaused;

@property (nonatomic, assign) NSInteger mSpatialLayer;
@property (nonatomic, assign) NSInteger mTempralLayer;

@property (nonatomic, assign) NSInteger mPreferredSpatialLayer;
@property (nonatomic, assign) NSInteger mPreferredTempralLayer;

@property (nonatomic, strong) Consumer *mConsumer;

-(instancetype)init:(NSString*)type paused:(BOOL)bRemotePaused consumer:(Consumer*)mConsumer;
@end

NS_ASSUME_NONNULL_END
