//
//  XNOffer.h
//  sdk
//
//  Created by Dimitrios Tzoulas on 12/07/2017.
//  Copyright © 2017 Dimitrios Tzoulas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XNOfferTile.h"

#pragma mark - Offer Kind & Types

#define OFFER_KIND_BONUS         @"BONUS"
#define OFFER_KIND_REWARD        @"REWARD"
#define OFFER_KIND_COUPON        @"COUPONS"
#define OFFER_KIND_LOTTERY       @"LOTTERY"
#define OFFER_KIND_POINT_BOOSTER @"POINT_BOOSTER"
#define OFFER_TYPE_GIFTPACK      @"MASTERGIFTPACK"
#define OFFER_TYPE_ACHIEVEMENTS  @"ACHIEVEMENTS"
#define OFFER_TYPE_QUEST         @"QUEST"
#define OFFER_TYPE_SCRATCH       @"SCRATCH"
#define OFFER_TYPE_HAPPY_HOUR    @"HAPPY_HOUR"
#define OFFER_TYPE_HAPPY_DAY     @"HAPPY_DAY"
#define OFFER_TYPE_STEP          @"STEP"

#pragma mark - XNDOfferStatus

typedef NS_ENUM(NSInteger, XNDOfferStatus) {
    XNDOfferStatusActive,
    XNDOfferStatusInactive,
    XNDOfferStatusPending,
    XNDOfferStatusCompleted
};

#pragma mark - Offer Model

@class XNNotifications, XNOfferDetails, XNRewardGroup, XNReward;
@interface XNOffer : NSObject

@property (nonatomic, copy) NSString *_id;
@property (nonatomic, strong) NSNumber *timeLeft;
@property (nonatomic, assign) XNDOfferStatus status;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *itemType;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic, assign) BOOL featured;
@property (nonatomic, assign) BOOL activeNow;
@property (nonatomic, strong) NSDictionary *metadata;
@property (nonatomic, strong) XNNotifications *notifications;
@property (nonatomic, strong, readonly) XNOfferTile *offerTile;
@property (nonatomic, strong) XNOfferDetails *details;
@property (nonatomic, copy, readonly) NSArray <XNRewardGroup *> *rewardGroups;
@property (nonatomic, copy, readonly) NSArray <XNReward *> *rewards;

+ (NSArray <XNOffer *> *)parse:(NSArray *)json;
- (instancetype)initWithDictionary:(NSDictionary *)json;
- (void)attachDetails:(NSDictionary *)details;
- (NSString *)getCountdownText;

@end

#pragma mark - Offer detail view

@class XNAssetView;
@interface XNOfferDetails : XNAssetView

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
@end
