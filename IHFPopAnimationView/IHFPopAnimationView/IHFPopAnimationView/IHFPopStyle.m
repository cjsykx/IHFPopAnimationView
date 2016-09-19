//
//  IHFPopStyle.m
//
//  Copyright (c) 2013-2016 IHEFE CO., LIMITED. All rights reserved.
//

#import "IHFPopStyle.h"

@implementation IHFPopStyle

- (id)init
{
    self = [super init];
    if (self) {
        self.presentAnimation = PopAnimation_Transform;
        self.dismissAnimation = PopAnimation_Null;
        self.alignmentType = PopAlignmentType_Center;
        self.popBackgroundStyle = PopBackgroundStyleBlur;

        self.duration = 0.5f;
        self.popBackgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.3f];
        
        self.clickBackgroundToDismiss = YES;
    }
    return self;
}

- (instancetype)initWithPresentAnimation:(PopAnimationType)presentAnimation alignmentType:(PopAlignmentType)alignmentType{
    
    self = [super init];
    if (self) {
        self.presentAnimation = presentAnimation;
        self.dismissAnimation = PopAnimation_Null;
        self.alignmentType = PopAlignmentType_Center;
        self.popBackgroundStyle = PopBackgroundStyleBlur;

        self.duration = 0.5f;
        self.popBackgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.3f];
        self.clickBackgroundToDismiss = YES;
    }

    return self;
}

+ (instancetype)popAnimationViewWithPresentAnimation:(PopAnimationType)presentAnimation alignmentType:(PopAlignmentType)alignmentType{
    return [[self alloc] initWithPresentAnimation:presentAnimation alignmentType:alignmentType];
}

@end
