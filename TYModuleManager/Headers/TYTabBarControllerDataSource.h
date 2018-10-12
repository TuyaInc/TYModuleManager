//
//  TYTabBarControllerDataSource.h
//  TYModuleTabbar
//
//  Created by 朱盼 on 2018/8/23.
//

#import <Foundation/Foundation.h>

#import "TYTabBarItemConfig.h"
#import "TYTabBarItemConfig.h"


@protocol TYTabBarControllerDataSource <NSObject>

@required
- (NSArray<TYTabBarItemConfig *> *)ty_tabItemConfigs;

@optional
- (UIControl *)ty_customTabButtonForIndex:(NSUInteger)index withAttribute:(TYTabBarItemConfig *)attribute;

@end
