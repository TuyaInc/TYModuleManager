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

+ (id)bridgeTargetOfObj:(id)obj;

@end
