//
//  JHNFullScreenAd.h
//  JiHuoNiaoAdSDK
//
//  Created by MQ on 2022/12/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JHNFullScreenAdDelegate <NSObject>

@optional

/**
 This method is called when video ad material loaded successfully.
 */
- (void)JHNFullScreenAdDidLoad;

/**
 This method is called when video ad materia failed to load.
 */
- (void)JHNFullScreenAdFailWithCode:(NSInteger)code TipStr:(NSString *)tipStr ErrorMessage:(NSString *)errorMessage;

/**
 This method is called when rendering a nativeExpressAdView successed.
 It will happen when ad is show.
 */
- (void)JHNFullScreenAdViewRenderSuccess;

/**
 This method is called when video ad is closed.
 */
- (void)JHNFullScreenAdDidClose;

/**
 This method is called when video ad is clicked.
 */
- (void)JHNFullScreenAdDidClick;

/**
 This method is called when video ad has reward.
 */
- (void)JHNFullScreenAdHasReward:(NSString*)tID;

@end

@interface JHNFullScreenAd : NSObject

@property(nonatomic,weak) id<JHNFullScreenAdDelegate> delegate;

- (instancetype)initWithSlotID:(NSString *)slotID;

/*
 加载成功后直接显示，暂无预加载
 */
- (void)loadAd;

@end


NS_ASSUME_NONNULL_END
