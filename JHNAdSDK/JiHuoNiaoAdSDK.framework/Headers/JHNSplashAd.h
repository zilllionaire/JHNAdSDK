//
//  JHNSplashAd.h
//  JiHuoNiaoAdSDK
//
//  Created by QWFW on 2022/07/24.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@protocol JHNSplashAdDelegate <NSObject>
/**
 This method is called when rendering a splash successed.
 */
- (void)JHNSplashViewRenderSuccess;

/**
 This method is called when nativeExpressSplashAdView is clicked.
 */
- (void)JHNSplashViewDidClick;

/**
 This method is called when nativeExpressSplashAdView closed.
 */
- (void)JHNSplashViewDidClose;

/**
 This method is called when when video ad play completed or an error occurred.
 */
- (void)JHNSplashViewFailWithCode:(NSInteger)code TipStr:(NSString *)tipStr ErrorMessage:(NSString *)errorMessage;

@end

@interface JHNSplashAd : NSObject

@property(nonatomic,weak) id<JHNSplashAdDelegate> delegate;


/*
 初始化
 **/
- (instancetype)initWithSlotID:(NSString *)slotID;

/*
 如果需要设置logo则调用，非必需
 **/
- (void)setLogoBottom:(UIView *)logoBottom;

/*
 加载成功后直接显示，暂无预加载
 */
- (void)loadSplashAd;


@end

NS_ASSUME_NONNULL_END
