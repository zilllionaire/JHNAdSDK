//
//  CSJCommonSDKInit.h
//  CSJCommonSDKInit
//
//  Created by QWFW on 2022/07/06.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CSJCommonSDKInit : NSObject
+ (void)initCSJSDK:(NSDictionary *)paramsAd;
+ (NSError *)getError:(NSString *)errorString code:(NSInteger)code;
@end

NS_ASSUME_NONNULL_END
