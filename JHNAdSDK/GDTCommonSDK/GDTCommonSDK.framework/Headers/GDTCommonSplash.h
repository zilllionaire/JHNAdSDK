//
//  GDTCommonSplash.h
//  GDTCommonSDK
//
//  Created by xq on 2022/7/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GDTCommonSplash : NSObject

- (NSDictionary *)ExecuteWithBidEcpm:(NSDictionary *)response;
- (void)AdvertisingBeginsToExecute:(id)obj AdData:(NSMutableDictionary *)data;
@end

NS_ASSUME_NONNULL_END
