//
//  XNShadowStyle.h
//  sdk
//
//  Created by Andreas Farmakis on 25/07/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XNColorStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface XNShadowStyle : NSObject
@property (nonatomic, retain, readonly) XNColorStyle* color;
@property (nonatomic, retain, readonly) NSArray<NSNumber*>* offset;
@property (nonatomic, retain, readonly) NSNumber* radius;
@property (nonatomic, retain, readonly) NSShadow* shadow;

- (instancetype)initWithDictionary:(NSDictionary *)json;
@end

NS_ASSUME_NONNULL_END
