//
//  TYModuleManager.h
//  TYModuleManager
//
//  Created by 房栋 on 2018/3/20.
//

#import <Foundation/Foundation.h>

#import "TYModuleManagerProtocol.h"

// 一个用来提供快速方法的类
#import "TYModule.h"

// 一个用来提供涂鸦的Native方法的调用的类
#import "TYModuleMixBridge.h"

@interface TYModuleManager : NSObject<TYModuleManagerProtocol>

@end
