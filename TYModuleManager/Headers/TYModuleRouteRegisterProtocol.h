//
//  TYModuleRouteRegisterProtocol.h
//  TYModuleManager
//
//  Created by 朱盼 on 2018/8/30.
//

#import <Foundation/Foundation.h>

@protocol TYModuleRouteRegisterProtocol <NSObject>

// 注册路由
- (NSArray<NSString *> *)registModuleRoutes;
// 处理路由事件
- (BOOL)handleRouteWithSchema:(NSString *)schema host:(NSString *)host path:(NSString *)path params:(NSDictionary *)params;

@end
