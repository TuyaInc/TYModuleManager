//
//  TYModuleApplication.h
//  BlocksKit
//
//  Created by 房栋 on 2018/7/13.
//

#import <Foundation/Foundation.h>

#import "TYModuleApplicationBlueprint.h"

/**
 TYModuleApplication 只是一个基类, 其主要功能如下
 1、帮助创建 AppDelegate 中的 window
 2、对于 TYModuleApplicationBlueprint 中的 optional 类型方法提供默认实现
 3、基类未实现任何 UIApplicationDelegate 中的方法
 */
@interface TYModuleApplication : NSObject<TYModuleApplicationBlueprint>

@end
