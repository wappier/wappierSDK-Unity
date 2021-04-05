//
//  XNColor.h
//  sdk
//
//  Created by Andreas Farmakis on 11/06/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface XNGradient : NSObject

typedef NS_ENUM(NSInteger, XNGradientType) {
    XNLinearHorizontalGradient,
    XNLinearVerticalGradient,
    XNRadialGradient
};

+ (UIImage *)gradientImageWithColors:(CGFloat *)colors
                           locations:(CGFloat *)gradientLocations
                      locationsCount:(NSUInteger)locationsCount
                                type:(XNGradientType)type
                              inRect:(CGRect)bounds
                                 rtl:(BOOL)isRTL;

+ (UIColor *)gradientColorWithColors:(CGFloat *)colors
                           locations:(CGFloat *)gradientLocations
                      locationsCount:(NSUInteger)locationsCount
                                type:(XNGradientType)type
                              inRect:(CGRect)bounds;

+ (UIColor *)gradientColorWithColors:(CGFloat *)colors
                           locations:(CGFloat *)gradientLocations
                      locationsCount:(NSUInteger)locationsCount
                                type:(XNGradientType)type
                              inRect:(CGRect)bounds
                                 rtl:(BOOL)isRTL;

@end

NS_ASSUME_NONNULL_END
