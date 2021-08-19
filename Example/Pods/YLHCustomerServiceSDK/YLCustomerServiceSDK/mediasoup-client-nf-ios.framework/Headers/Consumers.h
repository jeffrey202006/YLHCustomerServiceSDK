//
//  Consumers.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/14.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import "ConsumerExtend.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Consumers : NSObject

@property(nonatomic, strong) NSMutableDictionary* mConsumers;

-(void)addConsumer:(NSString*)type comsumer:(Consumer*)mConsumer paused:(BOOL)remotePaused;
-(void)removeConsumer:(NSString*)consumerId;

-(void)setConsumerPaused:(NSString*)consumerId type:(NSString*)originator;
-(void)setConsumerResumed:(NSString*)consumerId type:(NSString*)originator;

-(void)setConsumerCurrentLayers:(NSString*)consumerId spatial:(NSInteger)spatialLayer temporal:(NSInteger)temporalLayer;

-(void)setConsumerScore:(NSString*)consumerId score:(NSString*)mScore;

-(ConsumerExtend*)getConsumer:(NSString*)consumerId;

-(void)clear;
@end

NS_ASSUME_NONNULL_END
