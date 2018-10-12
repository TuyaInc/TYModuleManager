//
//  TYModuleApplicationProtocol.h
//  TYModuleManager
//
//  Created by 朱盼 on 2018/8/21.
//

#import <Foundation/Foundation.h>

#import "TYModuleBaseBlueprint.h"

@protocol TYModuleConfigBlueprint;

NS_ASSUME_NONNULL_BEGIN

@protocol TYModuleApplicationBlueprint <TYModuleBaseBlueprint, UIApplicationDelegate>

@required

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(nullable NSDictionary *)launchOptions config:(id<TYModuleConfigBlueprint>)config;

- (void)reloadRootViewController;

- (void)resetRootViewController:(__kindof UIViewController *)rootVC;

- (__kindof UIViewController *)currentRootViewController;

@end

NS_ASSUME_NONNULL_END
