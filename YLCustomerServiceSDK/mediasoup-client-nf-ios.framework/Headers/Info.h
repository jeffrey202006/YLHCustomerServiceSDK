//
//  Info.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/14.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import "DeviceInfo.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Info : NSObject

-(NSString*)getId;
-(NSString*)getDisplayName;
-(DeviceInfo*)getDevic;

@end

NS_ASSUME_NONNULL_END
