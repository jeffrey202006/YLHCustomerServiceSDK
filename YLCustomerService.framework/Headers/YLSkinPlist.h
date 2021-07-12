//
//  YLSkinPlist.h
//  ylcstmsv
//
//  Created by 永亮iOS on 2020/9/28.
//  Copyright © 2020 永亮iOS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YLSkinPlist : NSObject

// 读取skin plist
+ (instancetype)shared;

@property (nonatomic, strong) UIImage *inComing_bubble;
@property (nonatomic, strong) UIImage *outComing_bubble;

/**读取info plist*/
- (NSDictionary *)getSkinBundlePlist;
/**读取字符串转颜色值*/
- (UIColor *)colorWithHexString:(NSString *)color;
/**获取home Select 高度*/
- (CGFloat)getHomeItemHeight;
/**获取渐变色（起始）*/
- (UIColor *)getGradientStartColor;
/**获取渐变色（结束）*/
- (UIColor *)getGradientEndColor;
/**获取渐变的文字颜色*/
- (UIColor *)getGradientTitleColor;
/**获取select屏幕左右间距（平分）*/
- (CGFloat)getHomeItemInfoWithAlign;
/**获取select上下间距（平分）*/
- (CGFloat)getHomeItemInfoHeightAlign;
/**获取select 下方留白高度*/
- (CGFloat)getItemHeightMoreAlign;
/**select 上方间距*/
- (CGFloat)getHomeItemSelectTopAlign;
/**获取select item图片宽度*/
- (CGFloat)getItemWidth;
/**获取select item背景色*/
- (UIColor *)getHomeItemInfoBackColor;
/**获取select 背景色*/
- (UIColor *)getHomeBackColor;
/**获取select圆角*/
- (BOOL)getHomeTableRadius;

+ (void)resetDispatchOnce;

@end
