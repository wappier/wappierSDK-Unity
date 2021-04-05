//
//  XNShapeStyle.h
//  sdk
//
//  Created by Andreas Farmakis on 25/07/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XNShapeStyle : NSObject
@property (nonatomic, retain, readonly) NSNumber* cornerRadius;

- (instancetype)initWithDictionary:(NSDictionary *)json;
@end

NS_ASSUME_NONNULL_END
