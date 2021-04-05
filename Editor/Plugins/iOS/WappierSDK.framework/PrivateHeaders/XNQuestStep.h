//
//  XNQuestStep.h
//  sdk
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, XNQuestStepState) {
    XNQuestStepStateLocked,
    XNQuestStepStateUnlocked,
    XNQuestStepStateCurrent,
    XNQuestStepStateClaimed
};

@class XNDQuestStepInfo, XNDQuestStepDetail;

@interface XNQuestStep : NSObject
@property (nonatomic) XNQuestStepState state;
@property (nonatomic) XNReward *reward;
@property (nonatomic, retain, readonly) XNDQuestStepInfo *info;
@property (nonatomic, retain, readonly) XNDQuestStepDetail *detail;


+ (NSArray<XNQuestStep *> *)parseArray:(NSArray *)jsonArray;
- (instancetype)initWithJsonData:(NSDictionary*)data;
- (void)attachDetailView:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
