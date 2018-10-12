//
//  TYModuleServiceRegisterProtocol.h
//  TYModuleServiceManager
//
//  Created by 朱盼 on 2018/8/30.
//

#import <Foundation/Foundation.h>

#import "TYModuleServiceInfo.h"

@protocol TYModuleServiceRegisterProtocol <NSObject>

- (NSArray<TYModuleServiceInfo *> *)registModuleServices;

@end
