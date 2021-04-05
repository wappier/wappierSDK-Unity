//
//  XNRewardInfo.h
//  sdk
//
//  Created by Andreas Farmakis on 22/07/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XNAsset.h"
#import "XNTextAsset.h"
#import "XNColorAsset.h"
#import "XNImageAsset.h"

NS_ASSUME_NONNULL_BEGIN

@interface XNRewardInfo : NSObject
@property (nonatomic, retain, readonly) XNImageAsset* icon;
@property (nonatomic, retain, readonly) XNTextAsset* title;
@property (nonatomic, retain, readonly) XNTextAsset* description;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
