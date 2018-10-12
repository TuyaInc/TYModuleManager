//
//  TYModuleRouteBlueprint.h
//  BlocksKit
//
//  Created by 朱盼 on 2018/8/21.
//

#import <Foundation/Foundation.h>

#import "TYModuleBaseBlueprint.h"

NS_ASSUME_NONNULL_BEGIN

@class TYModuleRouteInfo;

@protocol TYModuleRouteBlueprint <TYModuleBaseBlueprint>

@property (nonatomic, copy) NSString *appSchema;

- (void)registRoute:(NSString *)route forModule:(id)module;
- (void)unregistRouteOfSchema:(NSString *)schema host:(nullable NSString *)host;

- (nullable NSArray<NSString *> *)routeInfoOfModule:(id)module;
- (nullable id)moduleOfRoute:(NSString *)route;

- (BOOL)openRoute:(NSString *)url withParams:(nullable NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END
