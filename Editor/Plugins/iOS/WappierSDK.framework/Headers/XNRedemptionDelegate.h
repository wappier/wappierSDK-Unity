//
//  XNRedemptionDelegate.h
//  sdk
//
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

@class WappierRedeemedReward;

@protocol XNRedemptionDelegate <NSObject>
- (void)redeem:(WappierRedeemedReward *)redeemable;

@end
