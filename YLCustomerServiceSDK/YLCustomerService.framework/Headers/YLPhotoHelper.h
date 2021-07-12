//
//  YLPhotoHelper.h
//  YLCustomerService
//
//  Created by 永亮iOS on 2021/3/17.
//  Copyright © 2021 永亮iOS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YLPhotoHelperDelegate <NSObject>

- (void)photoDidSingleTapedPageAtIndex:(NSInteger)index;

@end

@interface YLPhotoHelper : NSObject

@property (nonatomic, weak) id<YLPhotoHelperDelegate>delegate;
@property (nonatomic, assign) NSInteger index;
@property (nonatomic, strong) NSArray *photos;

- (void)show:(NSInteger)index photos:(NSArray *)photos;

@end

NS_ASSUME_NONNULL_END
