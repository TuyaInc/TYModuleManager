//
//  TYModuleServiceBlueprint.h
//  TYModuleManager
//
//  Created by TuyaInc on 2018/8/21.
//

#import <Foundation/Foundation.h>

#import "TYModuleBaseBlueprint.h"

@class TYModuleServiceInfo;

NS_ASSUME_NONNULL_BEGIN

@protocol TYModuleServiceBlueprint <TYModuleBaseBlueprint>

// 非覆盖式，相同protocol的service无法注册
- (void)registService:(TYModuleServiceInfo *)serviceInfo;
- (void)unregistServiceOfProtocol:(Protocol *)protocol;

- (nullable id)serviceOfProtocol:(Protocol *)protocol;
- (nullable TYModuleServiceInfo *)serviceInfoOfProtocol:(Protocol *)protocol;


// 以下方法主要用来保证module的实例是单例，避免反复创建
- (nullable id)implOfModuleClass:(Class)cls;
- (void)releaseImplOfModuelClass:(Class)cls;

@end

NS_ASSUME_NONNULL_END

