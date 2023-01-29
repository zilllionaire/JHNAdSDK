//
//  JHNContentPageAd.h
//  JiHuoNiaoAdSDK
//
//  Created by QWFW on 2022/10/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JHNContentPageDelegate <NSObject>

@optional
/**
 * 内容拉取失败
 */
- (void)JHN_videoFailWithCode:(NSInteger)code TipStr:(NSString *)tipStr ErrorMessage:(NSString *)errorMessage;

/**
 * 视频开始播放
 */
- (void)JHN_videoDidStartPlay;
/**
* 视频暂停播放
*/
- (void)JHN_videoDidPause;
/**
* 视频恢复播放
*/
- (void)JHN_videoDidResume;
/**
* 视频停止播放
* @param finished     是否播放完成
*/
- (void)JHN_videoDidEndPlayisFinished:(BOOL)finished;
/**
* 视频播放失败
* @param error        失败原因
*/
- (void)JHN_videoDidFailedToPlayWithError:(NSError *)error;


/**
* 内容展示
*/
- (void)JHN_contentDidFullDisplay:(NSString *)publicContentId;
/**
* 内容隐藏
*/
- (void)JHN_contentDidEndDisplay;
/**
* 内容暂停显示，ViewController disappear或者Application resign active
*/
- (void)JHN_contentDidPause;
/**
* 内容恢复显示，ViewController appear或者Application become active
*/
- (void)JHN_contentDidResume;

@end

@interface JHNContentPageAd : NSObject

@property (nonatomic, readonly) UIViewController *viewController;

@property(nonatomic,weak) id<JHNContentPageDelegate> delegate;

- (instancetype)initWithSlotID:(NSString *)slotID;
//加载并显示
- (void)loadAdContentPageWithCurrentController:(UIViewController *)Controller Width:(CGFloat)width Height:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END
