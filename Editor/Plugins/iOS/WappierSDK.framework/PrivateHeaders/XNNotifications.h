//
//  XNNotifications.h
//  sdk
//
//  Created by Dimitrios Tzoulas on 13/09/2017.
//  Copyright © 2017 Dimitrios Tzoulas. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XNNotifications : NSObject

@property (nonatomic, strong) NSNumber *total;
@property (nonatomic, assign) BOOL enabled;

+ (instancetype)parse:(NSDictionary *)json;
+ (instancetype)parseNumber:(NSNumber *)total;

@end
