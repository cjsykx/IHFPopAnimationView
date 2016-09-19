//
//  ViewController.m
//  IHFPopAnimationView
//
//  Created by chenjiasong on 16/8/2.
//  Copyright © 2016年 chenjiasong. All rights reserved.
//

#import "ViewController.h"
#import "IHFPopAnimationView.h"
#import "IHFPopStyle.h"

@interface ViewController ()<IHFPopAnimationViewDelegate>
@property (strong,nonatomic) NSDate *selectedDate;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.

    UIButton *popAnimationBtn = [[UIButton alloc] initWithFrame:CGRectMake(20, 20, 30, 30)];
    [popAnimationBtn addTarget:self action:@selector(didClickpopAnimationBtn:) forControlEvents:UIControlEventTouchUpInside];
    [popAnimationBtn setTitle:@"点击" forState:UIControlStateNormal];
    popAnimationBtn.backgroundColor = [UIColor blueColor];
    [self.view addSubview:popAnimationBtn];
}

- (void)didClickpopAnimationBtn:(UIButton *)sender {
    [self popDefaultView];
}

- (void)popDefaultView {
    UIView *view = [[UIView alloc]initWithFrame:CGRectMake(100, 100, 100, 100)];
    view.backgroundColor = [UIColor redColor];
    IHFPopAnimationView *popView = [IHFPopAnimationView presentPopAnimationView:view];
    popView.delegate = self;
}

- (void)popupView {
    
    UIView *view = [[UIView alloc]initWithFrame:CGRectMake(100, 100, 100, 100)];
    view.backgroundColor = [UIColor redColor];

    IHFPopStyle *pop = [[IHFPopStyle alloc] init];
    pop.popBackgroundStyle = PopBackgroundStyleBlur;
    pop.presentAnimation = PopAnimation_CurveEaseInOut;
    IHFPopAnimationView *popView = [IHFPopAnimationView presentPopAnimationView:view popStyle:pop];
    popView.delegate = self;
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)popAnimationView:(IHFPopAnimationView *)popAnimationView didPresentPopupView:(UIView *)popupView {
    NSLog(@"popupView = %@",popupView);
}

- (void)popAnimationView:(IHFPopAnimationView *)popAnimationView didDismissPopupView:(UIView *)popupView {
    NSLog(@"popupView = %@",popupView);

}

@end
