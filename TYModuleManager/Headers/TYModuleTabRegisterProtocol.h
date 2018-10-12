//
//  TYModuleTabRegisterProtocol.h
//  TYModuleTabManager
//
//  Created by 朱盼 on 2018/8/30.
//

#import <Foundation/Foundation.h>

#import "TYTabItemAttribute.h"

NS_ASSUME_NONNULL_BEGIN

@protocol TYModuleTabRegisterProtocol <NSObject>

@optional

#pragma mark - Regist

- (nullable NSArray<TYTabItemAttribute *> *)registModuleTabItems;

#pragma mark - Callback

/**
 tab将要被添加到tabBar上
 */
- (void)tabBarWillAdd:(nullable UIViewController *)controller withTabBarItem:(UITabBarItem *)tabItem customButton:(nullable UIControl *)button attribute:(TYTabItemAttribute *)attribute;

/**
 item是否允许被选中
 该方法仅在defaultSelect无效时回调
 如果实现此方法
 请 不要 在此回调中处理业务逻辑
 请 务必仅返回 YES/NO
 默认根据TYTabItemAttribute.viewController判断
 */
- (BOOL)tabBarCanSelect:(nullable UIViewController *)controller withTabBarItem:(UITabBarItem *)tabItem customButton:(nullable UIControl *)button attribute:(TYTabItemAttribute *)attribute;

/**
 用户点击tab后，是否允许展示对应vc
 */
- (BOOL)tabBarShouldShow:(nullable UIViewController *)controller withTabBarItem:(UITabBarItem *)tabItem customButton:(nullable UIControl *)button attribute:(TYTabItemAttribute *)attribute;

/**
 tab选中
 */
- (void)tabBarDidSelect:(nullable UIViewController *)controller withTabBarItem:(UITabBarItem *)tabItem customButton:(nullable UIControl *)button attribute:(TYTabItemAttribute *)attribute;

/**
 tab取消选中
 */
- (void)tabBarDidUnselect:(nullable UIViewController *)controller withTabBarItem:(UITabBarItem *)tabItem customButton:(nullable UIControl *)button attribute:(TYTabItemAttribute *)attribute;

/**
 tab是否允许设置badge
 */
- (BOOL)tabBarShouldSetBadge:(nullable NSString *)badge forIndex:(NSUInteger)index withTabBarItem:(UITabBarItem *)tabItem customButton:(nullable UIControl *)button attribute:(TYTabItemAttribute *)attribute;

@end

NS_ASSUME_NONNULL_END
