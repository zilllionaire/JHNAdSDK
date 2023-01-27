//
//  ExpressCpu.h
//  AdSpaceLib
//
//  Created by MQ on 2022/12/05.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@protocol ExpressCpuAdDelegate <NSObject>

- (void)nativeExpressCpuAdFailWithCode:(NSInteger)code TipStr:(NSString *)tipStr ErrorMessage:(NSString *)errorMessage;

@end

@interface ExpressCpu : NSObject
@property(nonatomic,weak) id<ExpressCpuAdDelegate> delegate;

- (instancetype)initWithSlotID:(NSString *)slotID;
- (void)loadAd:(NSString *)channelId url:(void(^)(NSString *_Nonnull urlString))urlStr;;
- (void)native_Selector:(SEL)selector
                      withOptions:(NSDictionary*)options
                       usingBlock:(id)block
                            error:(NSError **)error;
@end

NS_ASSUME_NONNULL_END
