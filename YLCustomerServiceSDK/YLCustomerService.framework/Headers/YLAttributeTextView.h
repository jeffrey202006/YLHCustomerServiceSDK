//
//  YLAttributeTextView.h
//  YLCustomerService
//
//  Created by 永亮iOS on 2020/11/17.
//  Copyright © 2020 永亮iOS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface YLAttributeTextView : UITextView

+ (NSMutableAttributedString *)setAttributedString:(NSString *)str font:(CGFloat)font lineSpacing:(CGFloat)lineSpacing imgWidth:(CGFloat)imgWidth;

+ (CGSize)getHTMLHeightByStr:(NSString *)str font:(CGFloat)font lineSpacing:(CGFloat)lineSpacing width:(CGFloat)width;

+ (CGSize)getHTMLWidthByStr:(NSString *)str font:(CGFloat)font lineSpacing:(CGFloat)lineSpacing height:(CGFloat)height;

+ (CGFloat)getAttributedTextHeight:(NSString *)text width:(CGFloat)width font:(CGFloat)font;

+ (CGSize)getAttributedTextSize:(NSString *)text width:(CGFloat)width;

+ (CGSize)getAttributedTextSize:(NSString *)text width:(CGFloat)width font:(CGFloat)font;

+ (CGSize)getAttributedOriginalTextSize:(NSString *)text width:(CGFloat)width font:(CGFloat)font;

+ (CGFloat)getAttributedTextHeight:(NSString *)text width:(CGFloat)width font:(CGFloat)font lineSpacing:(CGFloat)lineSpacing;

+ (CGFloat)getAttributedTextWidth:(NSString *)text;

+ (CGFloat)getAttributedTextWidth:(NSString *)text font:(CGFloat)font;

- (void)showAttributedText:(NSString *)text;

- (void)showAttributedText:(NSString *)text color:(UIColor *)color;

- (void)showAttributedText:(NSString *)text font:(CGFloat)font color:(UIColor *)color;

- (void)showAttributedText:(NSString *)text font:(CGFloat)font color:(UIColor *)color lineSpacing:(CGFloat)lineSpacing;

+ (CGSize )getHeightByAttrStr:(NSAttributedString *)str font:(CGFloat)font lineSpacing:(CGFloat)lineSpacing width:(CGFloat)width;

- (void)showAttributedTextNotN:(NSString *)text font:(CGFloat)font color:(UIColor *)color;

+ (CGFloat)getAttributedTextWidthNotN:(NSString *)text font:(CGFloat)font;

@end
