//
//  ExpressContentPage.h
//  AdSpaceLib
//
//  Created by QWFW on 2022/10/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ExpressContentPageDelegate <NSObject>

@optional


/**
 * 视频开始播放
 */
- (void)nativeExpress_videoDidStartPlay;
/**
* 视频暂停播放
*/
- (void)nativeExpress_videoDidPause;
/**
* 视频恢复播放
*/
- (void)nativeExpress_videoDidResume;
/**
* 视频停止播放
* @param finished     是否播放完成
*/
- (void)nativeExpress_videoDidEndPlayisFinished:(BOOL)finished;
/**
* 视频播放失败
* @param error        失败原因
*/
- (void)nativeExpress_videoDidFailedToPlayWithError:(NSError *)error;

/**
 * 内容拉取失败
 */
- (void)nativeExpress_videoFailWithCode:(NSInteger)code TipStr:(NSString *)tipStr ErrorMessage:(NSString *)errorMessage;
/**
* 内容展示
*/
- (void)nativeExpress_contentDidFullDisplay:(NSString *)publicContentId;
/**
* 内容隐藏
*/
- (void)nativeExpress_contentDidEndDisplay;
/**
* 内容暂停显示，ViewController disappear或者Application resign active
*/
- (void)nativeExpress_contentDidPause;
/**
* 内容恢复显示，ViewController appear或者Application become active
*/
- (void)nativeExpress_contentDidResume;

@end

@interface ExpressContentPage : NSObject
@property(nonatomic,weak) id<ExpressContentPageDelegate> delegate;
@property (nonatomic, readonly) UIViewController *pageViewController;

- (instancetype)initWithSlotID:(NSString *)slotID;
- (void)loadAdContentPageWithCurrentController:(UIViewController *)Controller Width:(CGFloat)width Height:(CGFloat)height;
- (void)native_Selector:(SEL)selector
                      withOptions:(NSDictionary*)options
                       usingBlock:(id)block
                            error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
