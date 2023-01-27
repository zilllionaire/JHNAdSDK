//
//  JHNCpuAd.h
//  JiHuoNiaoAdSDK
//
//  Created by MQ on 2022/12/05.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@protocol JHNCpuAdDelegate <NSObject>

@optional

- (void)JHNCpuAdFailWithCode:(NSInteger)code TipStr:(NSString *)tipStr ErrorMessage:(NSString *)errorMessage;
@end

@interface JHNCpuAd : NSObject

@property(nonatomic,weak) id<JHNCpuAdDelegate> delegate;

- (instancetype)initWithSlotID:(NSString *)slotID;

- (void)loadAd:(NSString *)channelId url:(void(^)(NSString *_Nonnull urlString))urlStr;;

@end

NS_ASSUME_NONNULL_END
