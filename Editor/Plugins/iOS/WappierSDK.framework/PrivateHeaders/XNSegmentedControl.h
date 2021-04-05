//
//  XNSegmentedControl.h
//  sdk
//
//  Created by Kyriakos Leivadas on 25/06/2019.
//  Copyright © 2019 Wappier Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface XNSegmentedControl : UISegmentedControl
- (void)setTheme:(id)theme;
- (void)underlinePositionChanged;
- (void)updateUnderlineWidth;
@end

NS_ASSUME_NONNULL_END
