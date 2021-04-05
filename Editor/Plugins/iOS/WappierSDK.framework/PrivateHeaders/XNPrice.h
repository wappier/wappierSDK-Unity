//
//  XNPrice.h
//  sdk
//
//  Created by Dimitrios Tzoulas on 07/12/2017.
//  Copyright © 2017 Dimitrios Tzoulas. All rights reserved.
//

#import <Foundation/Foundation.h>

@class XNAccumulator;
@interface XNPrice : NSObject

@property (nonatomic, strong) NSNumber *points;
@property (nonatomic, copy) NSString *giftPack;
@property (nonatomic, copy) NSString *action;
@property (nonatomic, strong) XNAccumulator *accumulator;

+ (XNPrice *)parse:(NSDictionary *)json;

@end
