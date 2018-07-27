//
//  TYModuleServiceManager.h
//  TYModuleManager
//
//  Created by 房栋 on 2018/3/27.
//

#import <Foundation/Foundation.h>

#import "TYModuleProtocol.h"

@interface TYModuleServiceImplMapping : NSObject

@property (nonatomic, copy) NSString *protocolString;
@property (nonatomic, strong) id impl;
@property (nonatomic, copy) NSString  *implString;

@end

@interface TYModuleServiceManager : NSObject
+ (id)moduleServiceForProtocol:(Protocol *)protocol;
+ (void)moduleServiceResetRoot:(UIViewController *)viewController;
+ (UIViewController *)moduleServiceMainViewController;
- (void)serviceRegisterWithModule:(id<TYModuleProtocol>)module;
- (id)implForProtocol:(Protocol *)protocol;
@end

