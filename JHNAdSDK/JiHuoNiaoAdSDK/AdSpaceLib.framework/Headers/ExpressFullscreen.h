//
//  ExpressFullscreen.h
//  AdSpaceLib
//
//  Created by MQ on 2022/12/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ExpressFullscreenAdDelegate <NSObject>

/**
 This method is called when video ad material loaded successfully.
 */
- (void)nativeExpressFullscreenAdDidLoad;

/**
 This method is called when video ad materia failed to load.
 */
- (void)nativeExpressFullscreenFailWithCode:(NSInteger)code TipStr:(NSString *)tipStr ErrorMessage:(NSString *)errorMessage;

/**
 This method is called when rendering a nativeExpressAdView successed.
 It will happen when ad is show.
 */
- (void)nativeExpressFullscreenAdViewRenderSuccess;

/**
 This method is called when video ad is closed.
 */
- (void)nativeExpressFullscreenAdDidClose;

/**
 This method is called when video ad is clicked.
 */
- (void)nativeExpressFullscreenAdDidClick;

@end

@interface ExpressFullscreen : NSObject

@property(nonatomic,weak) id<ExpressFullscreenAdDelegate> delegate;
- (instancetype)initWithSlotID:(NSString *)slotID;
- (void)loadAd;
- (void)native_Selector:(SEL)selector
                      withOptions:(NSDictionary*)options
                       usingBlock:(id)block
                            error:(NSError **)error;
@end

NS_ASSUME_NONNULL_END
