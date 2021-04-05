//
//  WappierSDK.h
//  sdk
//
//  Created by Dimitrios Tzoulas on 27/04/2017.
//  Copyright © 2017 Dimitrios Tzoulas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class XNStoreItem;
@class WappierRedeemedReward;
@class XNIAdOptions;
@class XNDInventory;
@protocol XNRedemptionDelegate;
@protocol XNIAdContentDelegate;

@interface WappierSDK : NSObject

#pragma mark - Xanadu
#pragma mark -

/*
 *  @brief Predefined purchase types
 */
extern NSString *const PurchaseTypeCURRENCY;
extern NSString *const PurchaseTypePREMIUM_CURRENCY;
extern NSString *const PurchaseTypeEXTRA_CONTENT;
extern NSString *const PurchaseTypeCOSMETIC_ITEMS;
extern NSString *const PurchaseTypeUPGRADE_ITEMS;
extern NSString *const PurchaseTypeREMOVE_ADS;
extern NSString *const PurchaseTypeITEM_BUNDLES;

/*
 * @brief Start Session Callback type
 */
typedef void (^XNStartCallback)(BOOL);

/*
 * @brief Redemption Callback Types
 */
typedef void (^XNRedemptionCallback)(WappierRedeemedReward *);
typedef void (^XNBalanceIncreasedCallback)(NSString *, NSArray<WappierRedeemedReward *> *);
typedef void (^XNRedemptionCallbackV2)(NSDictionary *, NSError *);
typedef void (^XNLoyaltyResponseCallbackV2)(NSDictionary *, NSError *);

/*
 * @brief Loylaty Data Callback type
 */
typedef void (^XNDLoyaltyCallback)(NSDictionary *);
typedef void (^XNDLoyaltyStatusCallback)(BOOL);
typedef void (^XNInstallQuestCommandCallback)(NSDictionary *);

/*
 * @brief Loylaty Data Callback type
 */
typedef void (^XNDNotificationCountCallback)(int);

/*
 * @brief Inventory Callback type
 */
typedef void (^XNDInventoryCallback)(NSArray<XNDInventory*>*);


/*
 *  @brief SDK methods
 */
+ (void)startSessionWithApiKey:(NSString *)apiKey;

+ (void)startSessionWithApiKey:(NSString *)apiKey
                      username:(NSString *)username;

+ (void)startSessionWithApiKey:(NSString *)apiKey
                      username:(NSString *)username
                     andLocale:(NSString *)uiLocale;

+ (void)startSessionWithApiKey:(NSString *)apiKey
                      username:(NSString *)username
                        locale:(NSString *)uiLocale
                 andCompletion:(XNStartCallback)block;

+ (void)startSessionWithApiKey:(NSString *)apiKey
                      username:(NSString *)username
                        locale:(NSString *)uiLocale
                    attributes:(NSDictionary *)attributes
                 andCompletion:(XNStartCallback)block;

+ (void)trackInAppAction:(NSString *)action;

+ (void)trackInAppAction:(NSString *)action
                withData:(id)data;

+ (void)queryRewardForEvent:(NSString *)action
                   withData:(id)data
              andCompletion:(void(^)(NSDictionary*))completion;

+ (void)queryInventoryWithTypes:(NSArray *)types
                    andStatuses:(NSArray *)statuses;

+ (void)queryInventoryWithTypes:(NSArray *)types
                       statuses:(NSArray *)statuses
                  andCompletion:(void(^)(NSDictionary*))completion;

+ (void)trackPurchaseWithRevenue:(double)revenue
                        currency:(NSString *)currency
                   transactionId:(NSString *)transactionId
                       productId:(NSString *)productId
                     receiptData:(NSString *)receiptData
                    purchaseType:(NSString *)purchaseType;

+ (void)purchaseStatusForTransactionId:(NSString *)transactionId
                               success:(void (^)(NSArray *response))successBlock
                               failure:(void (^)(NSString *error))failureBlock;

+ (void)trackUserProfile:(NSDictionary *) userAttributes;

+ (void)trackTagAdded:(NSString *) tag;

+ (void)trackTagRemoved:(NSString *) tag;

+ (void)trackKVPWithDictionary:(NSDictionary *)kvpDictionary;

+ (void)trackKVPWithKey:(NSString *)key andValue:(NSString *)value;

+ (void)trackBalanceWithType:(NSString *)balanceType
                      amount:(int64_t)amount
              currentBalance:(int64_t)balance
                   andReason:(NSString *)reason;

+ (void)trackStoreImpressionWithStoreName:(NSString *)storeName
                           availableItems:(NSArray<XNStoreItem*> *)storeItems;

+ (void)trackStoreExitWithStoreName:(NSString *)storeName;

+ (void)trackPurchaseIntentForItem:(XNStoreItem *)storeItem;

+ (void)getLoyaltyWithParams:(NSDictionary*) params
               andCompletion:(XNDLoyaltyCallback)block;

+ (void)getLoyaltyDetailsWithCallback:(XNLoyaltyResponseCallbackV2)callback;

+ (void)getLoyaltyDetailsWithAssetLevel:(NSString *)assetLevel
                                   card:(NSString *)card
                                  level:(NSString *)level
                               callback:(XNLoyaltyResponseCallbackV2)callback;

#pragma mark - Parameters

+ (void)setUsername:(NSString *)username;
+ (void)setDebugMode:(BOOL)debugMode;
+ (BOOL)isUserControlGroup;
+ (NSString*)version;
+ (BOOL)isUserPricingControlGroup;

#pragma mark - Loyalty

/*
 *  @brief Gift Button Position
 */
typedef NS_ENUM(NSInteger, XNLoyIconPosition) {
    WappierLoyIconPositionDefault,
    WappierLoyIconPositionTopLeft,
    WappierLoyIconPositionTopRight,
    WappierLoyIconPositionBottomLeft,
    WappierLoyIconPositionBottomRight = WappierLoyIconPositionDefault
};

#pragma mark - Loy Icon
+ (void)setLoySounds:(BOOL)flag;
+ (void)showLoyIconWithCompletionBlock:(void (^)(BOOL success, NSString *error))completionBlock;
+ (void)showLoyIconWithCompletionBlock:(void (^)(BOOL success, NSString *error))completionBlock referrer:(NSString *)referrer;
+ (void)hideLoyIcon;
+ (void)setLoyIconPosition:(XNLoyIconPosition)position;
+ (void)setLoyIconPosition:(XNLoyIconPosition)position margin:(CGFloat)margin;
+ (void)setLoyIconFrame:(CGRect)frame;
+ (void)setCustomFont:(NSString*)font withSizeAdjustment:(int)sizeAdjustment;
+ (void)setCustomRegularFont:(NSString *)regularFont
                    boldFont:(NSString *)boldFont
                  italicFont:(NSString *)italicFont
          withSizeAdjustment:(int)adjustment;

+ (NSInteger)getNotificationsCount;
+ (void)clearNotificationsForOfferId:(NSString *)offerId callback:(XNDNotificationCountCallback)callback;
+ (void)addNotificationCountListener:(XNDNotificationCountCallback)listener;
+ (void)addLoyaltyStatusListener:(XNDLoyaltyStatusCallback)listener;
+ (void)addBalanceIncreasedListener:(XNBalanceIncreasedCallback)listener;
+ (void)addRewardUnlockedListener:(XNBalanceIncreasedCallback)listener;
+ (void)addInventoryListener:(XNDInventoryCallback)listener;

#pragma mark - Loy View
+ (void)trackLoyaltyIconImpression:(NSString *)referrer;
+ (void)trackLoyIconHide;
+ (void)showLoyViewWithCompletionBlock:(void (^)(BOOL success, NSString *error))completionBlock;
+ (void)showLoyViewWithCompletionBlock:(void (^)(BOOL success, NSString *error))completionBlock referrer:(NSString *)referrer;

#pragma mark - Reward Redemption
+ (void)setRedemptionBlock:(XNRedemptionCallback)block;
+ (void)setRedemptionSelector:(SEL)selector target:(id)target;
+ (void)setRedemptionDelegate:(__weak id<XNRedemptionDelegate>)delegate;
+ (void)completeRedemptionWithID:(NSString *)redemptionID andResult:(BOOL)result;
+ (void)startRewardRedemptionWithId:(NSString *)rewardId completion:(XNRedemptionCallbackV2)completion;
+ (void)completeRewardRedemptionWithId:(NSString *)redemptionId
                                result:(BOOL)result
                            completion:(XNRedemptionCallbackV2)completion;
+ (void)getOfferRewardWithId:(NSString *)offerId callback:(XNDLoyaltyCallback)callback;
+ (void)updateOfferStatusWithOfferId:(NSString *)offerId status:(NSString *)status;

@end

#pragma mark - Pricing

@interface WappierSDK (Pricing)

/*!
    @abstract Tag types for personal pricing
    @discussion Available tag types are @code XNTagTypeLoyalty | XNTagTypePricing
 */
typedef NS_ENUM(NSInteger, XNTagType) {
    XNTagTypeLoyalty,
    XNTagTypePricing
};

typedef void (^XNDGetOffersCallback)(NSDictionary *);
typedef void (^XNDOfferTagsCallback)(NSArray<NSString *> *);

/*!
    @abstract Retrieves the dynamically allocated equivalent of a given IAP SKU.
    @param sku The original static sku.
    @return A dynamic SKU identifier or the original sku if not found.
 */
+ (NSString *)getSKU:(NSString*)sku;

+ (NSDictionary<NSString *, NSString *> *)getSKUs:(NSArray<NSString *> *)skus;

/*!
    @abstract Request to fetch personalized pricing offers for the user.
 */
+ (void)getOffers:(NSArray<NSString *> *)tags callback:(XNDGetOffersCallback)callback;

/*!
    @abstract Sets a callback listener for offer tags.
    @param listener A registered callback listener for offer tags.
 */
+ (void)setOfferTagNotificationListener:(XNDOfferTagsCallback)listener;

@end

#pragma mark - Content Service
@interface WappierSDK (ContentService)

typedef void (^XNGetTagsCallback)(NSString*, NSArray<NSString *> *);

+ (void)getAdWithOptions:(XNIAdOptions *)options delegate:(__weak id<XNIAdContentDelegate>)delegate;
+ (void)showAdWithOptions:(XNIAdOptions *)options delegate:(__weak id<XNIAdContentDelegate>)delegate;
+ (void)cancelAdRequest;
+ (void)addGetTagsListenerWithTypes:(NSArray *)types callback:(XNGetTagsCallback)callback;

@end
