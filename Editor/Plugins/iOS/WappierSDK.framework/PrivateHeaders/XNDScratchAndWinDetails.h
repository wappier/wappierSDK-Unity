//
//  XNDScratchAndWinDetails.h
//  sdk
//
//  Created by Andreas Farmakis on 29/07/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XNAsset.h"
#import "XNTextAsset.h"
#import "XNColorAsset.h"
#import "XNImageAsset.h"

NS_ASSUME_NONNULL_BEGIN

@interface XNDScratchAndWinCardSelection : NSObject
@property (nonatomic, retain, readonly) XNImageAsset *icon;
@property (nonatomic, retain, readonly) XNTextAsset *description;

- (instancetype)initWithDictionary:(NSDictionary *)json;
@end

@interface XNDScratchAndWinCardScratcher : NSObject
@property (nonatomic, retain, readonly) XNAsset *overlay; // can be image or color
@property (nonatomic, retain, readonly) XNImageAsset *background;
@property (nonatomic, retain, readonly) XNTextAsset *description;

- (instancetype)initWithDictionary:(NSDictionary *)json;
@end

@interface XNDScratchAndWinDetails : XNOfferDetails
@property (nonatomic, retain, readonly) XNTextAsset *title;
@property (nonatomic, retain, readonly) XNTextAsset *winText;
@property (nonatomic, retain, readonly) XNTextAsset *loseText;
@property (nonatomic, retain, readonly) XNTextAsset *unavailableText;
@property (nonatomic, retain, readonly) XNImageAsset *loseIcon;
@property (nonatomic, retain, readonly) XNTextAsset *description;

@property (nonatomic, retain, readonly) XNDScratchAndWinCardSelection *cardSelection;
@property (nonatomic, retain, readonly) XNDScratchAndWinCardScratcher *scratcher;

- (instancetype)initWithDictionary:(NSDictionary *)json;
@end

NS_ASSUME_NONNULL_END
