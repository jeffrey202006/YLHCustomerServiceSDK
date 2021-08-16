//
//  Producers.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/14.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import "ProducerExtend.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Producers : NSObject
@property(nonatomic, strong) NSMutableDictionary* mProducers;

-(void)addProducer:(Producer*)mProducer;
-(void)removeProducer:(NSString*)producerId;

-(void)setProducerPaused:(NSString*)producerId;
-(void)setProducerResumed:(NSString*)producerId;

-(void)setProducerScore:(NSString*)producerId score:(NSString*)mScore;

-(ProducerExtend*)filter:(NSString*)kind;

-(void)clear;
@end

NS_ASSUME_NONNULL_END
