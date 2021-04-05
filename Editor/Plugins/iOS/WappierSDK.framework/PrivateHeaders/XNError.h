//
//  XNError.h
//  sdk
//
//  Created by Dimitrios Tzoulas on 04/05/2017.
//  Copyright © 2017 Dimitrios Tzoulas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XNAlertPopup.h"

@interface XNError : NSObject

@property (nonatomic) NSString *message;
@property (nonatomic) NSString *title;
@property (nonatomic) NSString *description;
@property (nonatomic) NSNumber *code;
@property (nonatomic) XNAlertType alertType;

- (instancetype)initWithAlertType:(XNAlertType)alertType;

- (instancetype)initWithMessage:(NSString *)message;

- (instancetype)initWithMessage:(NSString *)message
                   andAlertType:(XNAlertType)alertType;


- (instancetype)initWithMessage:(NSString *)message
                        andCode:(NSNumber *)code;

- (instancetype)initWithMessage:(NSString *)message
                           code:(NSNumber *)code
                   andAlertType:(XNAlertType)alertType;

- (instancetype)initWithMessage:(NSString *)message
                           code:(NSNumber *)code
                          title:(NSString *)title
                 andDescription:(NSString *)description;

- (instancetype)initWithMessage:(NSString *)message
                           code:(NSNumber *)code
                          title:(NSString *)title
                    description:(NSString *)description
                   andAlertType:(XNAlertType)alertType;
@end
