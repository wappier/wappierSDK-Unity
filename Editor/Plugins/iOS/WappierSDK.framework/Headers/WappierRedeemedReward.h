//
//  WappierRedeemedReward.h
//  sdk
//
//  Created by Dimitrios Tzoulas on 20/06/2017.
//  Copyright © 2017 Dimitrios Tzoulas. All rights reserved.
//

#import <Foundation/Foundation.h>
@class XNRedeemable;

@interface WappierRedeemedReward : NSObject
@property (nonatomic) NSString *redemptionId;
@property (nonatomic) XNRedeemable *redeemable;
@property (nonatomic) NSNumber *quantity;
@end
