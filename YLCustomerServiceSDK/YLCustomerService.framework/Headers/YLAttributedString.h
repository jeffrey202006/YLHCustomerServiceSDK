//
//  YLAttributedString.h
//  ylcstmsv
//
//  Created by 永亮iOS on 2020/9/5.
//  Copyright © 2020 永亮iOS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YLAttributedString : NSObject

+ (NSMutableAttributedString *)setAttributeWith:(NSString *)str keywords:(NSString*)keywords color:(UIColor *)color;

+ (NSMutableAttributedString *)setAttributeWith:(NSString *)str keywordArray:(NSArray*)keywordArray color:(UIColor *)color font:(UIFont *)font;

@end

NS_ASSUME_NONNULL_END
