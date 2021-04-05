//
//  Reward.h
//  libtest
//
//  Created by Dimitrios Tzoulas on 23/05/2017.
//  Copyright © 2017 Dimitrios Tzoulas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <XNPrice.h>
#import <XNMetadata.h>
#import <XNRewardDetail.h>
#import <XNRewardInfo.h>

#pragma mark - 💸 Reward model

@class XNTactic, XNRedeemable, XNAccumulator, XNLimit, XNNotifications;
@interface XNReward : NSObject

@property (nonatomic, strong, readonly) NSString *_id;
@property (nonatomic, copy, readonly) NSString *itemType;
@property (nonatomic, strong, readonly) XNRewardInfo *infoView;
@property (nonatomic, strong, readonly) XNRewardDetail *detailView;
@property (nonatomic, copy, readonly) NSString *status;
@property (nonatomic, strong, readonly) XNPrice *price;
@property (nonatomic, strong, readonly) XNMetadata *metadata;
@property (nonatomic, strong, readonly) NSNumber *leftInStock;
@property (nonatomic, assign, readonly) BOOL eligible;
@property (nonatomic, strong, readonly) XNTactic *tactic;
@property (nonatomic, strong, readonly) XNRedeemable *redeemable;
@property (nonatomic, copy, readonly) NSArray <XNAccumulator *> *accumulators;
@property (nonatomic, strong, readonly) XNNotifications *notifications;
@property (nonatomic, strong, readonly) XNLimit *limit;

+ (NSArray<XNReward *> *)parseArray:(NSArray *)json;
- (instancetype)initWithDictionary:(NSDictionary *)data;
- (void)attachDetailView:(NSDictionary *)dictionary;

@end

#pragma mark - XNLimit

@interface XNLimit: NSObject

@property (nonatomic, assign, readonly) BOOL reached;
@property (nonatomic, assign, readonly) long availableAt;

- (instancetype)initWithDictionary:(NSDictionary *)data;

@end
