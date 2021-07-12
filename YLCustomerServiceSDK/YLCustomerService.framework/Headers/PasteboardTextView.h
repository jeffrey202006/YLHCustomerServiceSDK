//
//  PasteboardTextView.h
//  GraspCourse
//
//  Created by admin10 on 2019/3/18.
//  Copyright © 2019年 sun. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PasteboardTextViewDelegateall <NSObject>

@optional
- (void)getContentSelected:(NSString *)content selectedIndex:(int)selectIndex;

- (void)getContentSelected:(NSTextAttachment *)attach;

@end

@interface PasteboardTextView : UITextView

@property (nonatomic, weak) id <PasteboardTextViewDelegateall> delegates;
@property (nonatomic, copy) NSString *showContent;

@property (nonatomic, copy) NSArray <NSString *> *imageArr;

- (void)textViewImageLocation;

//获取webView中的所有图片URL
- (void)setImgTags:(NSString *)htmlText;

//html img标签外包 p标签
- (NSString *)regxHtmlImgOutWithP:(NSString *)htmlStr;

//设置html
- (void)setHtml:(NSString *)str attributeStr:(NSAttributedString *)attributeStr;

@end
