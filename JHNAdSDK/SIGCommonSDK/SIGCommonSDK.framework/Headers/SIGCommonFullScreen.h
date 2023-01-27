//
//  SIGCommonFullScreen.h
//  SIGCommonSDK
//
//  Created by MQ on 2022/12/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SIGCommonFullScreen : NSObject
- (NSDictionary *)ExecuteWithBidEcpm:(NSDictionary *)response;
- (void)AdvertisingBeginsToExecute:(id)obj AdData:(NSMutableDictionary *)data;
@end

NS_ASSUME_NONNULL_END
