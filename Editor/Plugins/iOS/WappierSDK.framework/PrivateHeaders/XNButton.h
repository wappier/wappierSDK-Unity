//
//  XNButton.h
//  sdk
//
//  Created by Andreas Farmakis on 16/04/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XNSlicedImages.h"

NS_ASSUME_NONNULL_BEGIN

@class XNImageAsset;
@class XNTextAsset;
@interface XNButton : UIButton

@property (nonatomic, strong, readonly) XNImageAsset *background;
@property (nonatomic, strong, readonly) XNTextAsset *title;

- (instancetype)initWithDictionary:(NSDictionary *)json;

/** Set Stroke of Button's titleLabel */
-(void)setTitleStrokeColor:(UIColor*)strokeColor
                  andWidth:(CGFloat)strokeWidth;

/** Set Gradient of Button's titleLabel */
-(void)setTitleGradientColors:(CGFloat*)colors
            gradientLocations:(CGFloat*)gradientLocations
               locationsCount:(NSUInteger)locationsCount
              andGradientType:(XNGradientType)type;

/** Set Shadow of Button's titleLabel */
-(void)setTitleShadowColor:(UIColor*)glowColor
                    radius:(CGFloat)glowRadius
                 andOffset:(CGSize)glowOffset;

/** set Underline of Button's titleLabel */
-(void)setTitleUnderlineEnabled:(BOOL)state style:(NSUnderlineStyle)style;

/** Draw a Sliced 3 or 9 Patch Image inside Button */
-(void)drawRectWithSlicedImage:(XNSlicedImages*)image;

/** Uses a Style object to set font, color, shadow, stroke for the title */
- (void)setTitleStyle:(XNStyle*)style;

@end

NS_ASSUME_NONNULL_END
