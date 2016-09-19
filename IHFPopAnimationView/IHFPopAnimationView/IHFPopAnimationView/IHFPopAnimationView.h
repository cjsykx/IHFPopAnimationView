//
//  IHFPopAnimationView.h
//
//  Copyright (c) 2013-2016 IHEFE CO., LIMITED. All rights reserved.
//

#import <UIKit/UIKit.h>
//页面弹出样式
#import "IHFPopStyle.h"

/*  使用方法参考如下：
 
 //for test
 - (void)popDemo
 {
    UIView *view = [[UIView alloc]initWithFrame:CGRectMake(100, 100, 100, 100)];
    view.backgroundColor = [UIColor redColor];
 
    IHFPopStyle *pop = [[IHFPopStyle alloc] init];
    pop.animationType = PopAnimation_FromBottom;
    pop.alignmentType = PopAlignmentType_Center;
    [IHFPopAnimationView popAnimationView:view popStyle:pop];
 }
 
 */
@class IHFPopAnimationView;
@protocol IHFPopAnimationViewDelegate <NSObject>

@optional
/**
 Tell delegate the popup view have completed present!
 
 @popAnimationView : telegate can get the IHFPopStyle
 @popupView : telegate can get the view which is pop
 */
- (void)popAnimationView:(IHFPopAnimationView *)popAnimationView didPresentPopupView:(UIView *)popupView;

/**
 Tell delegate the popup view have completed dismiss!
 
 @popAnimationView : telegate can get the IHFPopStyle
 @popupView : telegate can get the view which is pop
 */
- (void)popAnimationView:(IHFPopAnimationView *)popAnimationView didDismissPopupView:(UIView *)popupView;

@end

@interface IHFPopAnimationView : UIView

//************************ Class method present view *************************

/**
 Present the view with default pop Style
 @ default IHFPopStyle : Type -> PopAnimation_Transform , PopAlignmentType -> PopAlignmentType_Center , PopBackgroundStyle -> PopBackgroundStyleBlur.
 */
+ (instancetype)presentPopAnimationView:(UIView *)view;

/**
 Present the view with user-defined pop Style
 @ IHFPopStyle : You can set what your want style . If nil , it will be a default popStyle
 */
+ (instancetype)presentPopAnimationView:(UIView *)view popStyle:(IHFPopStyle *)popStyle;


//************************ instance method present view *************************
// If you use instance method , you need call present method to show the view!

/**
 Create a animation view with user-defined pop Style
 @ IHFPopStyle : You can set what your want style , if nil , it will be a default popStyle
 */

- (instancetype)initAnimationView:(UIView*)view popStyle:(IHFPopStyle *)popStyle;

- (void)present;
- (void)dismiss;

@property (nonatomic, strong) IHFPopStyle *popStyle; /**< Pop style you can get */
@property (nonatomic, weak) id <IHFPopAnimationViewDelegate> delegate; /**< Be the delegate */

@end













