//
//  XNStrokeStyle.h
//  sdk
//
//  Created by Andreas Farmakis on 25/07/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XNColorStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface XNStrokeStyle : NSObject
@property (nonatomic, retain, readonly) XNColorStyle* color;
@property (nonatomic, retain, readonly) NSNumber* width;

- (instancetype)initWithDictionary:(NSDictionary *)json;
@end

NS_ASSUME_NONNULL_END
