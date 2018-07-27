//
//  TYModuleManagerProtocol.h
//  TYModuleManager
//
//  Created by 房栋 on 2018/5/8.
//

#import <Foundation/Foundation.h>

#import "TYModuleTabbarMapping.h"
#import "TYModuleProtocol.h"
#import "TYModuleLoginLifeCycleProtocol.h"
#import "TYModuleAppDelegateProtocol.h"
#import "TYModuleTaskExecuteCompleteProtocol.h"
#import "TYModuleTabbarUtilProtocol.h"
#import "TYModuleManagerEnum.h"

#import "TYModuleManagerProtocol.h"
#import "TYModuleAppDelegateProtocol.h"
#import "TYModuleConfigManager.h"

@protocol TYModuleManagerProtocol <NSObject>
- (void)registerModuleConfig:(TYModuleConfigManager *)config;
- (void)loadModulesWithAllDelegates:(id<TYModuleAppDelegateProtocol, TYModuleTaskExecuteCompleteProtocol>)allDelegate;
- (void)registerModuleSchema:(NSString *)schema;
- (void)registerModuleTabbarItemImpl:(NSString *)impl;
- (void)registerModuleTabbar:(Class<UITabBarControllerDelegate>)tabbarCls tabbarUtil:(Class<TYModuleTabbarUtilProtocol>)tabbarUtilCls;
- (void)loadModules;

- (void)setupLoginDelegate:(id<TYModuleLoginLifeCycleProtocol>)loginDelegate;
- (void)setupAppDelegate:(id<TYModuleAppDelegateProtocol>)appDelegate;
- (void)setupTaskExecuteCompleteDelegate:(id<TYModuleTaskExecuteCompleteProtocol>)taskDelegate;

- (BOOL)openURL:(NSURL *)url parameters:(NSDictionary *)parameters;

- (id)moduleServiceForProtocol:(Protocol *)protocol;

- (NSArray<TYModuleTabbarMapping *> *)modulesForTabbar;

- (void)lifeCycleForSel:(SEL)sel;
- (void)loginLifeCycleForType:(TYLoginLifeCycleType)type;
- (id<TYModuleProtocol>)modulesForLogin;

- (void)startTask;

- (void)moduleServiceResetRoot:(UIViewController *)viewController;
- (UIViewController *)moduleServiceMainViewController;

- (void)updateCurrentMainViewController:(UIViewController *)mainViewController;
- (void)showTabbarWithModuleName:(NSString *)moduleName;

//- (id<TYModuleAppDelegateProtocol>)applicationInstance;
@end
