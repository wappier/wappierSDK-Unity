//
//  XNRedeemable.h
//  sdk
//
//  Created by Andreas Farmakis on 04/06/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XNRedeemable : NSObject
@property (readonly, nonatomic) NSString* redeemableId;
@property (readonly, nonatomic) NSString* type;
@property (readonly, nonatomic) NSString* sku;
@property (readonly, nonatomic) NSString* referenceCode;
@property (readonly, nonatomic) NSNumber* amount;
@property (readonly, nonatomic) NSString* title;
@property (readonly, nonatomic) NSString* description;
@property (readonly, nonatomic) NSString* image;
@property (readonly, nonatomic) NSString *extra;
@property (readonly, nonatomic) NSArray<XNRedeemable*>* itemList;

+ (NSArray<XNRedeemable *> *)parseArray:(NSArray *)json;
- (instancetype)initWithJsonData:(NSDictionary*)data;
- (void)updateLocalizedTexts:(NSDictionary *)data;
@end
