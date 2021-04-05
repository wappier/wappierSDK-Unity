//
//  XNDInventory.h
//  WappierSDK
//
//  Created by Andreas Farmakis on 23/7/20.
//  Copyright © 2020 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <XNDInventoryItem.h>
#import <XNDBalance.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, XNDInventoryType) {
    XNDInventoryTypeLoyalty=0,
    XNDInventoryTypePricing,
    XNDInventoryTypeCampaign
};

@interface XNDInventory : NSObject

@property (readonly, nonatomic) XNDInventoryType type;
@property (readonly, nonatomic) NSDictionary<NSString*, XNDBalance*>* balance;
@property (readonly, nonatomic) NSArray<XNDInventoryItem*>* redeemed;
@property (readonly, nonatomic) NSArray<XNDInventoryItem*>* unlocked;

+ (NSArray<XNDInventory *> *)parseArray:(NSArray *)json;
- (instancetype)initWithJsonData:(NSDictionary*)data;

@end

NS_ASSUME_NONNULL_END
