//
//  XNIAdContentDelegate.h
//  WappierSDK
//
//  Created by Spyros Spatharis on 11/6/20.
//  Copyright © 2020 Wappier Ltd. All rights reserved.
//

#ifndef XNIAdContentDelegate_h
#define XNIAdContentDelegate_h

@protocol XNIAdContentDelegate <NSObject>

- (void)adContentDidLoad;
- (void)adContentDidLoadWithResponse:(NSDictionary *)response;
- (void)adContentDidFailWithError:(NSError *)error;
- (void)adContentDidOpen;
- (void)adContentDidClickWithUrl:(NSDictionary *)url;
- (void)adContentDidClose;

@end

#endif /* XNIAdContentDelegate_h */
