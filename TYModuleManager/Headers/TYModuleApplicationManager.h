//
//  TYModuleApplicationManager.h
//  Pods
//
//  Created by 房栋 on 2018/7/12.
//

#import <Foundation/Foundation.h>

#import "TYModuleApplicationProtocol.h"
#import "TYModuleConfigManager.h"

@import UIKit;

@interface TYModuleApplicationManager : NSObject
+ (instancetype)sharedInstance;
- (BOOL)application:(UIApplication *_Nullable)application didFinishLaunchingWithOptions:(nullable NSDictionary *)launchOptions;
@end
