//
//  XNTextAsset.h
//  sdk
//
//  Created by Andreas Farmakis on 18/07/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import "XNAsset.h"

NS_ASSUME_NONNULL_BEGIN

@interface XNTextAsset : XNAsset
- (NSString *)text;
- (instancetype)initWithDictionary:(NSDictionary *)json;
- (NSMutableDictionary*)attributesWithBaseSize:(CGFloat)size inRect:(CGRect)rect;
@end


NS_ASSUME_NONNULL_END
