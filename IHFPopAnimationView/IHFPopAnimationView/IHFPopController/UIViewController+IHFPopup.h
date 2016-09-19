//
//  UIViewController+IHFPopup.h
//  IHFPopAnimationView
//
//  Copyright © 2016年 chenjiasong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (IHFPopup)

@property (nonatomic, readwrite) UIViewController *popupViewController;
@property (nonatomic, readwrite) BOOL useBlurForPopup;

- (void)presentPopupViewController:(UIViewController *)viewControllerToPresent animated:(BOOL)flag completion:(void (^)(void))completion;
- (void)dismissPopupViewControllerAnimated:(BOOL)flag completion:(void (^)(void))completion;

- (void)reloadPopupViewControllerData;
- (void)setUseBlurForPopup:(BOOL)useBlurForPopup;
- (BOOL)useBlurForPopup;

@end
