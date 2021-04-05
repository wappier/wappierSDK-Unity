//
//  XNAchievement.h
//  sdk
//
//  Created by Dimitrios Tzoulas on 17/11/2017.
//  Copyright © 2017 Dimitrios Tzoulas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XNPrice.h"
#import "XNMetadata.h"
#import "XNAssets.h"

@interface XNDItemDetail : NSObject
@property (nonatomic, retain, readonly) XNImageAsset* icon;
@property (nonatomic, retain, readonly) XNTextAsset* title;
@property (nonatomic, retain, readonly) XNTextAsset* description;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
@end

@interface XNDItemInfo : NSObject
@property (nonatomic, retain, readonly) XNImageAsset* icon;
@property (nonatomic, retain, readonly) XNTextAsset* title;
@property (nonatomic, retain, readonly) XNTextAsset* description;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
@end


@interface XNItem : NSObject

@property (nonatomic) NSString *rewardId;
@property (nonatomic) XNDItemInfo *info;
@property (nonatomic) XNDItemDetail *detail;
@property (nonatomic) XNMetadata *metadata;
@property (nonatomic) XNPrice *price;
@property (nonatomic) BOOL locked;
@property (nonatomic) BOOL claimed;

+ (NSArray<XNItem *> *)parse:(NSArray *)json;

@end

@interface XNAchievement : NSObject

@property (nonatomic) NSString *offerId;
@property (nonatomic) NSArray<XNItem *>*items;

+ (NSArray<XNAchievement *> *)parse:(NSArray *)json;

@end

