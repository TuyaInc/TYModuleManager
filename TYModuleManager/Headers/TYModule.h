//
//  TYModule.h
//  TYModuleManager
//
//  Created by 朱盼 on 2018/8/28.
//

#import <Foundation/Foundation.h>

#import "TYModuleServiceBlueprint.h"
#import "TYModuleConfigBlueprint.h"
#import "TYModuleRouteBlueprint.h"
#import "TYModuleApplicationBlueprint.h"
#import "TYModuleTabBarBlueprint.h"
#import "TYModuleNotifyBlueprint.h"
#import "TYModuleTaskBlueprint.h"


/**
 TYModule类主要用于提供一些快捷的方法，便于书写
 没有其它实质意义
 */
@interface TYModule : NSObject

#pragma mark - Service
+ (nullable id)serviceOfProtocol:(nonnull Protocol *)protocol;
+ (void)registService:(Class)implCls withProtocol:(nonnull Protocol *)protocol;

#pragma mark - Module
+ (nullable id)moduleImplOfClass:(nonnull Class)cls;

#pragma mark - CoreService
+ (nullable id<TYModuleServiceBlueprint>)moduleService;
+ (nullable id<TYModuleConfigBlueprint>)configService;
+ (nullable id<TYModuleRouteBlueprint>)routeService;
+ (nullable id<TYModuleApplicationBlueprint>)applicationService;
+ (nullable id<TYModuleTabBarBlueprint>)tabService;
+ (nullable id<TYModuleNotifyBlueprint>)notifyService;
+ (nullable id<TYModuleTaskBlueprint>)taskService;

@end