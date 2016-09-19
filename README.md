# IHFPopAnimationView

IHFPopAnimation主要是用来动画方式弹出一个View.
通过一个专门控制样式的类"PopStyle"来设置弹出的动画样式，位置和背景。

PopStyle 介绍:

1.动画样式
presentAnimation: 出现动画 , 默认为 PopAnimation_Transform.
dismissAnimation: 消失动画 , 一般不用设置 , 会根据出现动画来决定消失动画

2.位置 
alignmentType : 默认 PopAlignmentType_Center 居中

3.背景
popBackgroundStyle : 默认为PopBackgroundStyleBlur 模糊样式。 也可以设置 PopBackgroundStyleColor 或者 PopBackgroundStyleNone 。 
PopBackgroundStyleColor为颜色， 默认为黑色，alpha为0.3 , 你可以更改popBackgroundColor 为你想要的颜色.

4.交互
clickBackgroundToDismiss : 默认为YES， 点击背景会Dismiss该弹出的view . 如果你要Dismiss, 可以设置为No.


// --------------------------   使用方法

1. 以一个默认样式来弹出一个View. 代码如下
UIView *view = [[UIView alloc]initWithFrame:CGRectMake(100, 100, 100, 100)];
view.backgroundColor = [UIColor redColor];
IHFPopAnimationView *popView = [IHFPopAnimationView presentPopAnimationView:view];
popView.delegate = self;

2. 自己设置PopStyle
UIView *view = [[UIView alloc]initWithFrame:CGRectMake(100, 100, 100, 100)];
view.backgroundColor = [UIColor redColor];

IHFPopStyle *pop = [[IHFPopStyle alloc] init];
pop.popBackgroundStyle = PopBackgroundStyleColor;
pop.presentAnimation = PopAnimation_CurveEaseInOut;
IHFPopAnimationView *popView = [IHFPopAnimationView presentPopAnimationView:view popStyle:pop];
popView.delegate = self;

>代理： didPresentPopupView 出现 和 didDismissPopupView 消失的代理方法

简书地址 : http://www.jianshu.com/writer#/notebooks/4993145/notes/5873482