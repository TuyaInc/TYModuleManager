//
//  TYModuleLaunchTaskRegisterProtocol.h
//  TYModuleManager
//
//  Created by 朱盼 on 2018/9/18.
//

#import <Foundation/Foundation.h>

#import "TYLaunchTaskProtocol.h"

@protocol TYModuleLaunchTaskRegisterProtocol <NSObject>

- (NSArray<Class<TYLaunchTaskProtocol>> *)registLaunchTasks;

@end