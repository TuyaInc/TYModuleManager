//
//  TYModuleRouteManager.h
//  Pods
//
//  Created by 房栋 on 2018/3/21.
//

#import <Foundation/Foundation.h>

#import "TYModuleProtocol.h"

@interface TYModuleRouteManager : NSObject

- (void)urlRegisterWithModule:(id<TYModuleProtocol>)module;

- (NSString *)moduleForSchema:(NSString *)schema host:(NSString *)host;

+ (NSDictionary *)dictionaryFromQuery:(NSString *)query;

+ (BOOL)openURL:(NSString *)targetURL parameters:(NSDictionary *)parameters;
@end

