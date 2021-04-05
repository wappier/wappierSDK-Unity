//
//  XNDQuestStepDetail.h
//  sdk
//
//  Created by Andreas Farmakis on 07/08/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XNDQuestStepDetail : NSObject
@property (nonatomic, retain, readonly) XNImageAsset* icon;
@property (nonatomic, retain, readonly) XNTextAsset* description;
@property (nonatomic, retain, readonly) XNTextAsset* title;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
@end

NS_ASSUME_NONNULL_END
