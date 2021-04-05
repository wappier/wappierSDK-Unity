//
//  XNStoreItem.h
//  sdk
//
//  Created by Andreas Farmakis on 07/03/2019.
//  Copyright © 2019 Dimitrios Tzoulas. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XNStoreItem : NSObject
@property (nonatomic) NSString *sku;
@property (nonatomic) NSString *currency;
@property (nonatomic) NSNumber *initialPrice;
@property (nonatomic) NSNumber *price;
@property (nonatomic) NSString *promoText;

- (instancetype)initWithSku:(NSString *)sku
                   currency:(NSString *)currency
               initialPrice:(NSNumber *)initialPrice
                      price:(NSNumber *)price
               andPromoText:(NSString *)text;

- (instancetype)initWithJsonData:(NSDictionary *)dictionary;
+ (NSArray<XNStoreItem *> *)parseArray:(NSArray *)json;
@end

NS_ASSUME_NONNULL_END
