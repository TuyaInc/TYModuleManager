//
//  TYModuleAppDelegateProtocol.h
//  BlocksKit
//
//  Created by 房栋 on 2018/7/13.
//

#import <Foundation/Foundation.h>

@protocol TYModuleApplicationImplProtocol <NSObject>
+ (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
//+ (void)resetRootViewController:(UIViewController *)controller;
//+ (UIViewController *)moduleServiceMainViewController;
//+ (void)moduleBasicTaskExecuteCompleteWithWindow:(UIWindow *)window;
@end
