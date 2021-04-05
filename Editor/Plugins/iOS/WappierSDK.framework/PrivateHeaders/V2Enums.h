//
//  V2Enums.h
//  sdk
//
//  Created by Spyros Spatharis on 28/1/21.
//  Copyright © 2021 Wappier Ltd. All rights reserved.
//

#ifndef V2Enums_h
#define V2Enums_h

typedef NS_ENUM(NSInteger, XNLoyaltyItemType) {
    XNLoyaltyItemTypeOffer,
    XNLoyaltyItemTypeRewardGroup,
    XNLoyaltyItemTypeReward,
    XNLoyaltyItemTypeComponent
};

XNLoyaltyItemType XNLoyaltyItemTypeΕnumFromNumber(NSNumber *number) {
    if (number.intValue == 0) { return XNLoyaltyItemTypeOffer; }
    if (number.intValue == 1) { return XNLoyaltyItemTypeRewardGroup; }
    if (number.intValue == 2) { return XNLoyaltyItemTypeReward; }
    if (number.intValue == 3) { return XNLoyaltyItemTypeComponent; }
    return XNLoyaltyItemTypeOffer;
}

NSString * XNLoyaltyItemTypeStringFromEnum(XNLoyaltyItemType type) {
    switch (type) {
        case XNLoyaltyItemTypeOffer: return @"OFFER";
        case XNLoyaltyItemTypeRewardGroup: return @"REWARD_GROUP";
        case XNLoyaltyItemTypeReward: return @"REWARD";
        case XNLoyaltyItemTypeComponent: return @"COMPONENT";
        default: return @"NONE";
    }
}

#endif /* V2Enums_h */
