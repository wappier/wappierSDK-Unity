//
//  XNColorStyle.h
//  sdk
//
//  Created by Andreas Farmakis on 18/07/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XNColorStyle : NSObject
@property (nonatomic, retain, readonly) UIColor *color;
@property (nonatomic, retain, readonly) NSArray<NSString *> *colors;

- (instancetype)initWithDictionary:(NSDictionary *)json;
- (UIColor*)colorForRect:(CGRect)rect;
@end

NS_ASSUME_NONNULL_END
