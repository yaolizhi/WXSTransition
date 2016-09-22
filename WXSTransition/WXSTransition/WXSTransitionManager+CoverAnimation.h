//
//  WXSTransitionManager+CoverAnimation.h
//  WXSTransition
//
//  Created by AlanWang on 16/9/22.
//  Copyright © 2016年 王小树. All rights reserved.
//

#import "WXSTransitionManager.h"

@interface WXSTransitionManager (CoverAnimation)

-(void)coverNextTransitionAnimationWithContext:(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)coverBackTransitionAnimationWithContext:(id<UIViewControllerContextTransitioning>)transitionContext;

@end
