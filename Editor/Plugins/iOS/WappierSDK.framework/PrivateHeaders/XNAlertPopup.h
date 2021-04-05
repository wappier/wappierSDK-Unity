//
//  XNAlertPopup.h
//
//  Created by Dimitrios Tzoulas on 30/01/2017.
//  Copyright © 2017 Dimitrios Tzoulas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XNLabel.h"
#import "XNButton.h"
#import "XNImageAsset.h"
#import "XNTextAsset.h"
@class XNError;

typedef NS_ENUM(NSInteger, XNAlertType) {
    XNAlertTypeNone = 0,
    XNAlertTypeRedemptionSuccessful = 1,
    XNAlertTypeRedemptionFailedNotEnoughPoints = 2,
    XNAlertTypeRedemptionFailedUnknownError = 3,
    XNAlertTypeNoNetwork = 4,
    XNAlertTypeServerDown = 5,
    XNAlertTypeUnknownError = 6,
    XNAlertTypeAchievementRedemptionSuccessful = 7
};

@interface XNAlertPopup : UIViewController

@property (weak, nonatomic) IBOutlet UIView *alertWindow;
@property (weak, nonatomic) IBOutlet UIImageView *icon;
@property (weak, nonatomic) IBOutlet XNLabel *titleLabel;
@property (weak, nonatomic) IBOutlet XNLabel *messageLabel;
@property (weak, nonatomic) IBOutlet XNButton *okButton;
@property (nonatomic, strong) NSArray *gradientColors;

+ (void)showAlertForError:(XNError *)error;
+ (void)showAlertType:(XNAlertType)alertType;
+ (void)showAlertType:(XNAlertType)alertType message:(NSString *)message andDismissBlock:(void (^)(void))block;
+ (void)showAlertWithTitle:(NSString *)title message:(NSString *)message success:(BOOL)success andDismissBlock:(void (^)(void))block;
+ (void)showAlertWithTitle:(XNTextAsset*)title description:(XNTextAsset*)description andImage:(XNImageAsset*)image;
+ (void)showAlertWithTitle:(XNTextAsset*)title
               description:(XNTextAsset*)description
                     image:(XNImageAsset*)image
           andDismissBlock:(void (^)(void))block;
+ (void)showAlertWithTitle:(XNTextAsset*)title
               description:(XNTextAsset*)description
                     image:(XNImageAsset*)image
            gradientColors:(NSArray<NSString *> *)colors
           andDismissBlock:(void (^)(void))block;
@end
