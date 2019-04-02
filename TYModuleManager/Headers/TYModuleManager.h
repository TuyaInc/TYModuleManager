//
//  TYModuleManager.h
//  TYModuleManager
//
//  Created by TuyaInc on 2018/3/20.
//

#import <Foundation/Foundation.h>

// 一个用来提供快速方法的类
#import "TYModule.h"

// 一个用来提供涂鸦的Native方法的调用的类
#import "TYModuleMixBridge.h"

@interface TYModuleManager : NSObject

+ (_Nonnull instancetype)sharedInstance;

- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions;

/*
 if you need to use TYModuleManager in extension or widget
 call this method once before you use it
 */
- (void)extensionDidFinishInitial;

@end
