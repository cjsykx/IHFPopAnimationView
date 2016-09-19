//
//  UIImage+blur.h
//  IHFPopAnimationView
//
//  Created by chenjiasong on 16/8/9.
//  Copyright © 2016年 chenjiasong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (blur)

- (UIImage *)applyBlurWithRadius:(CGFloat)blurRadius tintColor:(UIColor *)tintColor saturationDeltaFactor:(CGFloat)saturationDeltaFactor maskImage:(UIImage *)maskImage;
@end
