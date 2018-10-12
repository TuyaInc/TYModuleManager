//
//  TYAppDelegate.m
//  TYModuleManager
//
//  Created by Tuya on 06/14/2018.
//  Copyright (c) 2018 Tuya. All rights reserved.
//

#import "TYAppDelegate.h"

#import "TYModuleManager.h"

@implementation TYAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // 调用TYModuleManager，启动模块化加载
    // TYModuleManager将在模块化加载完成以后，调用 TYTestApplication
    // 你可以在 TYTestApplication 完成你的其它任务
    
    return [[TYModuleManager sharedInstance] application:application didFinishLaunchingWithOptions:launchOptions];
}

- (BOOL)respondsToSelector:(SEL)aSelector {
    return [super respondsToSelector:aSelector] || [[TYModule applicationService] respondsToSelector:aSelector];
}

- (id)forwardingTargetForSelector:(SEL)aSelector {
    return [[TYModule applicationService] respondsToSelector:aSelector] ? [TYModule applicationService] : nil;
}

@end
