//
//  XNOfferTile.h
//  sdk
//
//  Created by Andreas Farmakis on 18/07/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XNAsset.h"
#import "XNTextAsset.h"
#import "XNColorAsset.h"
#import "XNImageAsset.h"
#import "XNAssetView.h"

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Offer info box

@interface XNOfferInfoBox : NSObject

@property (nonatomic, retain, readonly) XNAsset *background;
@property (nonatomic, strong, readonly) XNTextAsset *label;

- (instancetype)initWithDictionary:(NSDictionary *)json;

@end

#pragma mark - Offer info view

@interface XNOfferTile : XNAssetView

@property (nonatomic, retain, readonly) XNOfferInfoBox *infoBox;

- (instancetype)initWithDictionary:(NSDictionary *)json;

@end

NS_ASSUME_NONNULL_END
