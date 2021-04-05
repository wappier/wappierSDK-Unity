//
//  XNErrorHandler.h
//  sdk
//
//  Created by Dimitrios Tzoulas on 16/06/2017.
//  Copyright © 2017 Dimitrios Tzoulas. All rights reserved.
//

#import <Foundation/Foundation.h>

@class XNError;
@interface XNErrorHandler : NSObject

+ (XNError *)handleRequestError:(NSError *)error data:(NSData *)data;
+ (XNError *)handleRequestErrorV2:(NSError *)error data:(NSData *)data;
+ (id)handleResponseError:(id)json forCmd:(NSString *)cmd;

@end
