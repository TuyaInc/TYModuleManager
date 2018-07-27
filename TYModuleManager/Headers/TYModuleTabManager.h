//
//  TYModuleTabManager.h
//  Pods
//
//  Created by 房栋 on 2018/3/28.
//

#import <Foundation/Foundation.h>

#import "TYModuleProtocol.h"
#import "TYModuleTabbarMapping.h"

@interface TYModuleTabManager : NSObject
- (void)tabbarRegisterWithModule:(id<TYModuleProtocol>)module;
- (TYModuleTabbarMapping *)tabbarMappingForModuleName:(NSString *)module;
- (NSInteger)tabbarIndexForModuleName:(NSString *)module;
- (void)updateRegisteredTabs;
@end
