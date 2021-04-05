//
//  XNAsset.h
//  sdk
//
//  Created by Andreas Farmakis on 18/07/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XNStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface XNAsset : NSObject
@property (nonatomic, retain, readonly)XNStyle *style;
- (instancetype)initWithDictionary:(NSDictionary *)json;
@end
NS_ASSUME_NONNULL_END
