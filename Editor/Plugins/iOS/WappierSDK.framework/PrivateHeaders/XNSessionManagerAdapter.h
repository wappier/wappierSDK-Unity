//
//  XNSessionManagerAdapter.h
//  WappierSDK
//
//  Created by Spyros Spatharis on 9/2/21.
//  Copyright © 2021 Wappier Ltd. All rights reserved.
//

typedef void (^QueryCompletion)(NSDictionary *_Nullable);

@protocol XNSessionManagerAdapterProtocol <NSObject>

- (void)queryLoyaltyItems:(NSArray<NSString *> *_Nonnull)ids
                 offerType:(NSString * _Nonnull)offerType
                     level:(NSString * _Nonnull)level
                assetLevel:(NSString * _Nonnull)assetLevel
               completion:(QueryCompletion _Nullable )completion;
- (void)queryForRewardOfLotteryWithOfferId:(NSString * _Nonnull)offerId andCallback:(QueryCompletion _Nullable)callback;
+ (void)resetSession;
+ (void)deathSignal;
+ (void)permanentDeathSignal;
+ (void)setSdkMode:(NSInteger)mode;

@end

NS_ASSUME_NONNULL_BEGIN

@interface XNSessionManagerAdapter : NSObject <XNSessionManagerAdapterProtocol>

- (instancetype)init;
    
@end

NS_ASSUME_NONNULL_END
