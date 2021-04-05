#import <Foundation/Foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

#pragma mark - Loyalty

void __startSession(const char* apiKey,
                    const char* userName,
                    const char* uiLocale,
                    const char* attributesJson,
                    const char* objectName,
                    const char* methodName);
void __completeRedemption(const char* redemptionId, bool result);
void __getInventoryRequestWith(int invTypes[],
                               int invTypesSize,
                               int itemStatuses[],
                               int itemStatusesSize,
                               const char* objectName,
                               const char* methodName);
void __getLoyalty(const char* assetLevel, const char* objName, const char* methodName);
void __purchaseStatus(const char* transactionId, const char* objName, const char* methodName);
void __queryRewardForEvent(const char* action, const char* data, const char* objectName, const char* methodName);
void __registerRedeemCallback(const char* objName, const char* methodName);
void __setInventoryStatusListener(const char* objName, const char* methodName);
void __setLoyaltyStatusListener(const char* objName, const char* methodName);
void __setNotificationUpdatesListener(const char* objName, const char* methodName);
void __setRewardUnlockListener(const char* objName, const char* methodName);
void __setBalanceIncreaseListener(const char* objName, const char* methodName);
void __setUserName(const char* userName);
void __hideLoyaltyButton();
void __showLoyaltyButton(int width, int height, float x, float y, const char* referrer);
void __showLoyaltyView(const char* referrer);
BOOL __isUserControlGroup();

#pragma mark - Content Ad Service

void __showAd(const char* adOptions, const char* objName, const char* methodName);
void __getAd(const char* adOptions, const char* objName, const char* methodName);
void __cancelAdRequest();
void __setGetAdTagsListener(char ** adTypes, int adTypesSize, const char* objName, const char* methodName);

#pragma mark - Tracking

void __trackBalance(const char* balanceType, int64_t amount, int64_t balance, const char* reason);
void __trackInAppAction(const char* action);
void __trackInAppActionWithData(const char* action, const char* data);
void __trackKVP(const char* key, const char* value);
void __trackKVPMap(const char* kvpJson);
void __trackLoyaltyIconImpression(const char* referrer);
void __trackPurchase(double revenue, const char* currency,
                     const char* transactionId,
                     const char* productId,
                     const char* receiptData,
                     const char* purchaseType);
void __trackPurchaseIntent(const char* itemJson);
void __trackStoreExit(const char* storeName);
void __trackStoreImpression(const char* storeName, const char* itemsJson);
void __trackTagAdded(const char* tag);
void __trackTagRemoved(const char* tag);
void __trackUserProfile(const char* userProfileJson);

#pragma mark - Pricing

char* __getSkus(const char* skus[], int skuSizes);
void __setOfferTagsListener(const char* objName, const char* methodName);
void __getOffers(const char* tags[], int tagsSize, const char* objectName, const char* methodName);

#pragma mark - Sound Management

/// Enable or disable sounds in loyalty.
void __setLoySounds(bool enabled);

#pragma mark - Helpers

void __wpLog(const char* message);

#ifdef __cplusplus
}
#endif
