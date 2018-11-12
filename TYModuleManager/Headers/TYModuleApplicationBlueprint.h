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

@optional
// 以下方法TYModuleApplication类已经实现，可以根据需要覆写

// window的创建
- (UIWindow *)window;

// 重置keyWindow的root
- (void)resetRootViewController:(__kindof UIViewController *)rootVC;

// keyWindow当前的root
- (__kindof UIViewController *)currentRootViewController;

@end

NS_ASSUME_NONNULL_END
