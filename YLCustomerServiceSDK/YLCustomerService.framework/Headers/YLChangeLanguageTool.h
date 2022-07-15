//
//  YLChangeLanguageTool.h
//  YLCustomerService
//
//  Created by yltech on 2022/7/4.
//  Copyright © 2022 永亮iOS. All rights reserved.
//

#import <Foundation/Foundation.h>
#define YLLocalizedString(key,comment) [[YLChangeLanguageTool standardHelper] stringWithKey:key]

NS_ASSUME_NONNULL_BEGIN

@interface YLChangeLanguageTool : NSObject
@property (assign , nonatomic) NSString * languageStr;
+ (instancetype)standardHelper;

- (NSBundle *)bundle;

- (NSString *)currentLanguage;

- (void)setUserLanguage:(NSString *)language;

- (NSString *)stringWithKey:(NSString *)key;
@end

NS_ASSUME_NONNULL_END
