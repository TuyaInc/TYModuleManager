//
//  TYModuleTaskBlueprint.h
//  TYModuleManager
//
//  Created by 朱盼 on 2018/9/18.
//

#import <Foundation/Foundation.h>

#import "TYModuleBaseBlueprint.h"

@protocol TYTaskProtocol;

NS_ASSUME_NONNULL_BEGIN

@protocol TYModuleTaskBlueprint <TYModuleBaseBlueprint>

@property (nonatomic, copy) void (^basicTaskCompleteBlock)(void);

- (void)registTasks:(NSArray<Class<TYTaskProtocol>> *)tasks forModule:(id)module;
- (void)unregistModuleTasks:(id)module;
//- (void)unregistTask:(Class<TYTaskProtocol>)task ofModule:(id)module;

- (void)generateTaskQueue;

@end

NS_ASSUME_NONNULL_END
