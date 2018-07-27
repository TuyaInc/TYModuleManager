//
//  TYModuleManager.h
//  Pods
//
//  Created by 房栋 on 2018/3/20.
//

#import <Foundation/Foundation.h>
#import "TYModuleManagerProtocol.h"

@interface TYModuleManager : NSObject <TYModuleManagerProtocol>
+ (instancetype)sharedInstance;
@end
