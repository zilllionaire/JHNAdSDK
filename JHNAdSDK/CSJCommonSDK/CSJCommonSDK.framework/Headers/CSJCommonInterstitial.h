//
//  CSJCommonInterstitial.h
//  CSJCommonSDKInit
//
//  Created by QWFW on 2022/07/06.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CSJCommonInterstitial : NSObject

- (NSDictionary *)ExecuteWithBidEcpm:(NSDictionary *)response;

- (void)AdvertisingBeginsToExecute:(id)obj AdData:(NSMutableDictionary *)data;

@end

NS_ASSUME_NONNULL_END
