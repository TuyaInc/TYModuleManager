//
//  TYModuleMixBridge.h
//  TYModuleManager
//
//  Created by 朱盼 on 2018/10/10.
//

#import <Foundation/Foundation.h>

#define TuyaNative ((id)[TYModuleMixBridge bridgeTargetOfObj:self])
#define TuyaNativeTarget(obj) ((id)[TYModuleMixBridge bridgeTargetOfObj:obj])

@interface TYModuleMixBridge : NSObject

/**
 如果obj是class，则返回class
 如果obj是instance，则返回instance
 */
+ (id)bridgeTargetOfObj:(id)obj;

@end
