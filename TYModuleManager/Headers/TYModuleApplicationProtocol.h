//
//  TYAppDelegateProtocol.h
//  Pods
//
//  Created by 房栋 on 2018/7/11.
//

#import <Foundation/Foundation.h>

#import "TYModuleAppDelegateProtocol.h"
#import "TYModuleTaskExecuteCompleteProtocol.h"
#import "TYModuleConfigManager.h"

@protocol TYModuleApplicationProtocol <TYModuleAppDelegateProtocol, TYModuleTaskExecuteCompleteProtocol>
- (BOOL)application:(UIApplication *_Nullable)application didFinishLaunchingWithOptions:(nullable NSDictionary *)launchOptions config:(TYModuleConfigManager *)config;
@end
