//
//  XNAssets.h
//  sdk
//
//  Created by Dimitrios Tzoulas on 07/12/2017.
//  Copyright © 2017 Dimitrios Tzoulas. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XNAssets : NSObject
- (NSString *)title;
- (NSString *)description;
- (NSString *)image;

+ (XNAssets *)parse:(NSDictionary *)json;
@end
