//
//  LZBLoadingAnimation.h
//  LZBLoadingAnimation
//
//  Created by zibin on 16/10/27.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface LZBLoadingAnimation : NSObject

/**
 *  加载正方形
 */
+ (CALayer *)loadingReplicatorLayer_SquareWithWidth:(CGFloat)width;
@end