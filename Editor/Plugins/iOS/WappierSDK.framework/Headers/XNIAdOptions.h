//
//  XNIAdOptions.h
//  WappierSDK
//
//  Created by Spyros Spatharis on 11/6/20.
//  Copyright © 2020 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XNIAdOptions : NSObject

@property (nonatomic, assign, readonly, getter=hasHTML) BOOL html;
@property (nonatomic, assign, readonly, getter=hasImage) BOOL image;
@property (nonatomic, copy, readonly) NSString *adType;
@property (nonatomic, copy, readonly) NSString *tag;

- (instancetype)initWithHTML:(BOOL)html image:(BOOL)image adType:(NSString *)adType tag:(NSString *)tag;

@end

NS_ASSUME_NONNULL_END
