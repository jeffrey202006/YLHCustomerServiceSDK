//
//  DeviceInfo.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/14.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DeviceInfo : NSObject

@property(nonatomic, copy) NSString *mFlag;
@property(nonatomic, copy) NSString *mDeviceName;
@property(nonatomic, copy) NSString *mVersion;

-(DeviceInfo*)setFlag:(NSString *)mFlag;
-(DeviceInfo*)setName:(NSString *)mName;
-(DeviceInfo*)setVesrion:(NSString *)mVersion;

-(NSDictionary*)toDictionary;

@end

NS_ASSUME_NONNULL_END
