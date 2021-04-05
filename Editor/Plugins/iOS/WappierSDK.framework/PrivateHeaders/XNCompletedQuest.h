//
//  XNCompletedQuest.h
//  WappierSDK
//
//  Created by Spyros Spatharis on 18/12/20.
//  Copyright © 2020 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XNCompletedQuest : NSObject

@property (nonatomic, strong, readonly) XNTextAsset *title;
@property (nonatomic, strong, readonly) XNTextAsset *subtitle;
@property (nonatomic, strong, readonly) XNAsset *background;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
