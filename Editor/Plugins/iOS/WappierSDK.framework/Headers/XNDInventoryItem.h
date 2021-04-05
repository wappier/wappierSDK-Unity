//
//  XNDInventoryItem.h
//  sdk
//
//  Created by Andreas Farmakis on 23/7/20.
//  Copyright © 2020 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <XNRedeemable.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, XNDItemStatus) {
    XNDItemStatusAll=0,
    XNDItemStatusUnlocked,
    XNDItemStatusRedeemed
};

@interface XNDInventoryItem : NSObject

@property (readonly, nonatomic) NSNumber* amount;
@property (readonly, nonatomic) NSNumber* total;
@property (readonly, nonatomic) XNRedeemable* redeemable;
@property (readonly, nonatomic) NSString* title;
@property (readonly, nonatomic) NSString* subtitle;
@property (readonly, nonatomic) NSString* icon;

+ (NSArray<XNDInventoryItem *> *)parseArray:(NSArray *)json;
- (instancetype)initWithJsonData:(NSDictionary*)data;
@end

NS_ASSUME_NONNULL_END
