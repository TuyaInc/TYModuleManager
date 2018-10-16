//
//  TYModuleConfigProtocol.h
//  TYModuleManager
//
//  Created by 朱盼 on 2018/8/21.
//

#import <Foundation/Foundation.h>

#import "TYModuleApplicationBlueprint.h"
#import "TYModuleTabBarBlueprint.h"
#import "TYModuleServiceRegisterProtocol.h"
#import "TYModuleTabRegisterProtocol.h"

@protocol TYModuleConfigBlueprint <TYModuleBaseBlueprint>

@property (nonatomic, strong, readonly, nonnull) NSDictionary *originalData;

@property (nonatomic, copy, readonly, nonnull) NSString *schema;

/**
 所有需要被加载的模块
 */
@property (nonatomic, strong, readonly, nullable) NSArray<Class<TYModuleServiceRegisterProtocol>> *buildModules;

/**
 app的入口
 */
@property (nonatomic, strong, readonly, nullable) Class<TYModuleApplicationBlueprint> applicationService;

/**
 tabManager
 */
@property (nonatomic, strong, readonly, nullable) Class<TYModuleTabBarBlueprint> tabManagerService;
/**
 需要显示在TabBar上的模块
 */
@property (nonatomic, strong, readonly, nullable) NSArray<Class<TYModuleTabRegisterProtocol>> *moduleOnTabBar;
/**
 tabBar上的默认选中的模块
 */
@property (nonatomic, strong, readonly, nullable) Class<TYModuleTabRegisterProtocol> tabSelectedModule;


/**
 混合模式，支持 module 和 service
 */
@property (nonatomic, strong, readonly, nullable) NSDictionary<NSString *, Class> *mixMapping;


/**
 根据根据所给字符串返回正确的类
 */
- (nullable Class)validClassOfConfigClass:(nonnull NSString *)className;
/**
 根据所给key，在originalData中查找并返回正确的class
 支持点语法 xxx.xxx  支持数组 xxx.[2].xxx
 */
- (nullable Class)validClassOfConfigKeyPath:(nonnull NSString *)keyPath;

@end
