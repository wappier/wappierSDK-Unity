//
//  XNDBalance.h
//  WappierSDK
//
//  Created by Andreas Farmakis on 23/7/20.
//  Copyright © 2020 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XNDBalance : NSObject

@property (readonly, nonatomic) NSNumber* current;
@property (readonly, nonatomic) NSNumber* total;

- (instancetype)initWithJsonData:(NSDictionary*)data;
@end

NS_ASSUME_NONNULL_END
