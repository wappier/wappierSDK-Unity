//
//  XNAssetView.h
//  WappierSDK
//
//  Created by Spyros Spatharis on 28/1/21.
//  Copyright © 2021 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XNAssetView : NSObject

@property (nonatomic, strong, readonly) XNAsset *background;
@property (nonatomic, strong, readonly) XNImageAsset *icon;
@property (nonatomic, strong, readonly) XNTextAsset *title;
@property (nonatomic, strong, readonly) XNTextAsset *description;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
