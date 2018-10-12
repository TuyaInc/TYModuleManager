//
//  TYModuleTaskRegisterProtocol.h
//  TYModuleManager
//
//  Created by 朱盼 on 2018/9/18.
//

#import <Foundation/Foundation.h>

#import "TYTaskProtocol.h"

@protocol TYModuleTaskRegisterProtocol <NSObject>

- (NSArray<Class<TYTaskProtocol>> *)registModuleTasks;

@end
