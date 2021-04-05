//
//  XNQuestGroup.h
//  sdk
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, XNQuestGroupState) {
    XNQuestGroupStateCompleted,
    XNQuestGroupStateCurrent,
    XNQuestGroupStateLocked,
    XNQuestGroupStateClaimed
};

typedef NS_ENUM(NSInteger, XNQuestStrategy) {
    XNQuestStrategyBackfill,
    XNQuestStrategyNoBackfill
};

@class XNQuestStep, XNReward, XNDQuestGroupInfo, XNDQuestGroupDetail;

@interface XNQuestGroup : NSObject
@property (nonatomic) NSArray<XNQuestStep*> *steps;
@property (nonatomic) NSInteger currentStep;
@property (nonatomic) XNQuestGroupState state;
@property (nonatomic) XNReward *reward;
@property (nonatomic, retain, readonly) XNDQuestGroupInfo *info;
@property (nonatomic, retain, readonly) XNDQuestGroupDetail *detail;
@property (nonatomic, readonly) NSInteger notificationCount;
@property (nonatomic, assign, readonly) XNQuestStrategy questStrategy;

+ (NSArray<XNQuestGroup *> *)parseArray:(NSArray *)jsonArray;
- (instancetype)initWithJsonData:(NSDictionary*)data;
- (void)attachDetailView:(NSDictionary *)dictionary;
- (BOOL)allStepsClaimed;
- (BOOL)shouldClaimReward;

@end

NS_ASSUME_NONNULL_END
