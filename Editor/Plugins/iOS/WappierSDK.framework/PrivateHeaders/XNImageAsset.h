//
//  XNImageAsset.h
//  sdk
//
//  Created by Andreas Farmakis on 18/07/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import "XNAsset.h"
#import "XNSlicedImages.h"

NS_ASSUME_NONNULL_BEGIN

@interface XNImageAsset : XNAsset

+ (NSArray<XNImageAsset *> *)parseArray:(NSArray *)jsonArray;
- (instancetype)initWithDictionary:(NSDictionary *)json;
- (void)retrieveImages:(void (^)(XNSlicedImages *))completion;
- (void)updateView:(UIImageView*)imageView;
- (void)updateReusableView:(UIImageView*)imageView;
- (void)imageInRect:(CGRect)rect withCompletion:(void (^)(UIImage *))completion;
- (void)updateIcon:(UIImageView *)imageView;
- (void)updateIcon:(UIImageView * _Nullable)imageView withCompletion:(void (^_Nullable)(UIImage *))completion;
- (NSArray<NSString *> *)getImageUrls;

@end

NS_ASSUME_NONNULL_END
