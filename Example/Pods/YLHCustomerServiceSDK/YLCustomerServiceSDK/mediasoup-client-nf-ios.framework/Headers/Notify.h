//
//  Notify.h
//  mediasoup-client-ios
//
//  Created by zhangyun on 2020/8/14.
//  Copyright © 2020 Denvir Ethan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Notify : NSObject

@property(nonatomic, copy) NSString* mId;
@property(nonatomic, copy) NSString* mType;
@property(nonatomic, copy) NSString* mText;
@property(nonatomic, assign) NSInteger mTimeout;
@property(nonatomic, copy) NSString* mText2;

-(instancetype)initNotify:(NSString*)mType text:(NSString*)mText;
-(instancetype)initNotify:(NSString*)mType text:(NSString*)mText timeout:(NSInteger)mTimeout;
-(instancetype)initNotify:(NSString*)mType text:(NSString*)mText text2:(NSString*)mText2;

@end

NS_ASSUME_NONNULL_END
