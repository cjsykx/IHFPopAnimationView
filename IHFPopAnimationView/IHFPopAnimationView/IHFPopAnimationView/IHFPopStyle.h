//
//  IHFPopStyle.h
//
//  Copyright (c) 2013-2016 IHEFE CO., LIMITED. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


//弹出动画
typedef NS_ENUM(NSInteger, PopAnimationType)
{
    PopAnimation_Null = -1,
    PopAnimation_None = 0,  //没有动画
    PopAnimation_Transform, //带有 震动 缩放 效果
    PopAnimation_FromBottom,    //从屏幕 下方弹出
    PopAnimation_FromTop,       //从屏幕 上方弹出
    PopAnimation_FromLeft,      //从屏幕 左侧弹出
    PopAnimation_FromRight,     //从屏幕 右侧弹出
    PopAnimation_CurveEaseInOut,    //淡入淡出
    PopAnimation_ExpandFromLeft,    //从左向右  展开
    PopAnimation_ExpandFromRight,   //从右向左  展开
    PopAnimation_ExpandFromBottom,  //从下向上  展开
    PopAnimation_ExpandFromTop,     //从上向下  展开
};

//弹出后显示方式，根据此值 计算最终显示位置
typedef NS_ENUM(NSInteger, PopAlignmentType)
{
    PopAlignmentType_AutoFram = 0,      //根据frame显示
    PopAlignmentType_HorizontallyCenter,//水平居中显示
    PopAlignmentType_VerticalCenter,    //垂直居中显示
    PopAlignmentType_Center             //水平居中显示 //垂直居中显示
};

typedef NS_ENUM(NSInteger, PopBackgroundStyle)
{
    PopBackgroundStyleBlur  = 0,      // Blur style , default!
    PopBackgroundStyleColor = 1,      // Color style , defalut color is black and alpha is 0.3. you can change it by popBackgroundColor
    PopBackgroundStyleNone  = 2,      // NOT use background .
};


@interface IHFPopStyle : NSObject


- (instancetype)initWithPresentAnimation:(PopAnimationType)presentAnimation alignmentType:(PopAlignmentType)alignmentType;

+ (instancetype)popAnimationViewWithPresentAnimation:(PopAnimationType)presentAnimation alignmentType:(PopAlignmentType)alignmentType;

/**弹出动画 (不能为PopAnimation_Null，若为此值，则以PopAnimation_None为准)*/
@property (nonatomic, assign) PopAnimationType presentAnimation;

/**消失动画 (若为PopAnimation_Null，则取 presentAnimation 为准) */
@property (nonatomic, assign) PopAnimationType dismissAnimation;

/**对齐方式，*/
@property (nonatomic, assign) PopAlignmentType alignmentType;



/**动画执行时间 (建议取0.3～0.6之间，此时间对 PopAnimation_Transform 无效)*/
@property (nonatomic, assign) CGFloat duration;

////// Background style

@property (nonatomic, assign) PopBackgroundStyle popBackgroundStyle; /**<  Defalut color is block and alpha is 0.3 , it can take effect only use style of color */

@property (nonatomic, strong) UIColor *popBackgroundColor; /**< Background style ,defalut style is blur*/

@property (assign,nonatomic) BOOL clickBackgroundToDismiss; /**< Uses click background to dismiss popup view , default YES */

@end
























