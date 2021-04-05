//
//  XNMetadata.h
//  sdk
//
//  Created by Dimitrios Tzoulas on 07/12/2017.
//  Copyright © 2017 Dimitrios Tzoulas. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XNMetadata : NSObject

@property (nonatomic, strong) NSNumber *amount;
@property (nonatomic, copy) NSString *sku;
@property (nonatomic, strong) NSNumber *quantity;
@property (nonatomic, strong) NSDictionary *descriptionMap;

- (instancetype)initWithDictionary:(NSDictionary *)json;
+ (XNMetadata *)parse:(NSDictionary *)json;
- (NSString*)description;

@end
