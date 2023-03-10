//
//  AdSpaceSDKManager.h
//  AdSpaceSDKManager
//
//  Created by xm on 2022/07/03.50
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
//Version @"1.1.3.57"

@interface AdSpaceSDKManager : NSObject

+ (instancetype)shareAdSpaceSDKManager;
- (void)FoundationAPP:(NSString *)foundationAPP ManagerClass:(NSString *)managerClass;
- (NSString *)SpaceSDKConfig;
@end

NS_ASSUME_NONNULL_END
