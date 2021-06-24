//
//  YLBundle.h
//  ylcstmsv
//
//  Created by 永亮iOS on 2020/10/29.
//  Copyright © 2020 永亮iOS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YLBundle : NSObject

- (YLBundle *)bundlePath:(NSString *)name;

- (NSString *)bundleLivePath;

- (NSString *)bundleTempPath;

- (NSString *)pathForResource:(NSString *)Info ofType:(NSString *)ofType;

- (BOOL)isUseFull;

- (BOOL)isExists;

@end



