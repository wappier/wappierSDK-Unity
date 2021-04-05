//
//  XNColorAsset.h
//  sdk
//
//  Created by Andreas Farmakis on 18/07/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import "XNAsset.h"

NS_ASSUME_NONNULL_BEGIN

@interface XNColorAsset : XNAsset
- (instancetype)initWithDictionary:(NSDictionary *)json;
@end

NS_ASSUME_NONNULL_END
