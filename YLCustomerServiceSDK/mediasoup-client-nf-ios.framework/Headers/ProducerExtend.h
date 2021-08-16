//
//  ProducerExtend.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/14.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import "Producer.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ProducerExtend : NSObject
@property (nonatomic, copy) NSString* mType;
@property (nonatomic, copy) NSString* mScore;

@property (nonatomic, strong) Producer *mProducer;

-(instancetype)init:(Producer*)producer;
@end

NS_ASSUME_NONNULL_END
