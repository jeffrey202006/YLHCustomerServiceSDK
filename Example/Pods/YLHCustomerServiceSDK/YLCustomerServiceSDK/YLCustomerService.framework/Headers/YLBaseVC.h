//
//  YLBaseVC.h
//  ylcstmsv
//
//  Created by 永亮iOS on 2020/9/1.
//  Copyright © 2020 永亮iOS. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void (^ClickBlock)(void);
@interface YLBaseVC : UIViewController

@property (nonatomic, strong) UITapGestureRecognizer *gestureRecognizer;

- (void)setNavHidden;  //导航栏隐藏

- (void)setNavTransparent; //导航栏透明

- (void)setNavWithImage:(UIImage *__nullable)image; //导航栏背景

- (void)setNavTitle:(NSString *)title; //导航栏title

- (void)setNavTitle:(NSString *)title color:(UIColor *)color; //导航栏title，颜色

- (void)setRightItemWith:(UIButton *)btn; //导航栏右侧按钮

- (void)setLeftItemWith: (UIButton *)btn; //导航栏左侧按钮

- (void)backAction; //导航栏返回

- (void)setNavBackgroundColor:(UIColor *)color; //导航栏颜色

- (void)setNavBackWhite; //导航栏白色

- (void)hideKeyboardFor:(UITableView *)tab;

//下拉刷新
- (void)headerRefresh;
//上拉刷新
- (void)footerRefresh;

/** 设置上下拉刷新 */
- (void)setupRefreshFortableView:(id)tableView headerReresh:(BOOL)headerReresh footderReResh:(BOOL)footderReResh;

- (void)endHeaderRefresh:(id)tableView;
- (void)endFooterRefresh:(id)tableView;

@property (nonatomic, strong) UIButton *cancelButton; //返回

/// 左边按钮
@property (nonatomic, strong) UIButton *leftBtn;

///
@property (nonatomic, copy) ClickBlock leftBtnClickBlock;

@end

NS_ASSUME_NONNULL_END
