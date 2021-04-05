//
//  XNFontStyle.h
//  sdk
//
//  Created by Andreas Farmakis on 18/07/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface XNFontStyle : NSObject

- (instancetype)initWithDictionary:(NSDictionary *)json;
- (UIFont*)fontWithBaseSize:(CGFloat)size;
- (BOOL)isUnderline;
@end

NS_ASSUME_NONNULL_END
