//
//  XNStyle.h
//  sdk
//
//  Created by Andreas Farmakis on 18/07/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XNFontStyle.h"
#import "XNColorStyle.h"
#import "XNStrokeStyle.h"
#import "XNShadowStyle.h"
#import "XNShapeStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface XNStyle : NSObject
@property (nonatomic, retain, readonly) XNFontStyle *fontStyle;
@property (nonatomic, retain, readonly) XNColorStyle *colorStyle;
@property (nonatomic, retain, readonly) XNShadowStyle *shadowStyle;
@property (nonatomic, retain, readonly) XNStrokeStyle *strokeStyle;
@property (nonatomic, retain, readonly) XNShapeStyle *shapeStyle;

- (instancetype)initWithDictionary:(NSDictionary *)json;
@end

NS_ASSUME_NONNULL_END
