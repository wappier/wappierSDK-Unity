//
//  XNLoyaltyQueryResponse.h
//  WappierSDK
//
//  Created by Spyros Spatharis on 28/1/21.
//  Copyright © 2021 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - XNLoyaltyQueryResponse

@class XNOffer;
@interface XNLoyaltyQueryResponse : NSObject

@property (nonatomic, copy) NSArray <XNOffer *> *items;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
