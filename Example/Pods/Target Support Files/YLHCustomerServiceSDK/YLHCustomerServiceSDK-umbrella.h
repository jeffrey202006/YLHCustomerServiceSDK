#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "PasteboardTextView.h"
#import "RTRootNavigationController.h"
#import "UIImage+YLSkin.h"
#import "UIViewController+RTRootNavigationController.h"
#import "YLAttributedString.h"
#import "YLAttributeTextView.h"
#import "YLBaseNavVC.h"
#import "YLBaseVC.h"
#import "YLBundle.h"
#import "YLChangeLanguageTool.h"
#import "YLCustomDeskHomeVC.h"
#import "YLCustomerService.h"
#import "YLCustomerServiceManager.h"
#import "YLCustomListVC.h"
#import "YLHomeCstmVC.h"
#import "YLLoginUserModel.h"
#import "YLPhotoHelper.h"
#import "YLSkinPlist.h"
#import "YLVoiceConvert.h"

FOUNDATION_EXPORT double YLHCustomerServiceSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char YLHCustomerServiceSDKVersionString[];

