//
//  XNLabel.h
//  sdk
//
//  Created by Andreas Farmakis on 15/04/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XNGradient.h"
#import "XNStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface XNLabel : UILabel

- (void)setGradientWithColors:(CGFloat *)colors
            gradientLocations:(CGFloat *)gradientLocations
               locationsCount:(NSUInteger)locationsCount
              andGradientType:(XNGradientType)type;

- (void)setShadowColor:(UIColor *)glowColor
                radius:(CGFloat)glowRadius
             andOffset:(CGSize)glowOffset;

- (void)setStrokeWithColor:(UIColor *)strokeColor
                  andWidth:(CGFloat)strokeWidth;

- (void)setTitleUnderlineEnabled:(BOOL)state style:(NSUnderlineStyle)style;

- (void)setStyle:(XNStyle *)style;

- (CGRect)boundingRectWithSize:(CGSize)size;

- (void)setLineSpacing:(CGFloat)spacing;

@end

NS_ASSUME_NONNULL_END
