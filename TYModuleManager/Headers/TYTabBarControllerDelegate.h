//
//  TYTabBarControllerDelegate.h
//  TYModuleTabbar
//
//  Created by 朱盼 on 2018/8/23.
//

#import <Foundation/Foundation.h>

@class TYTabBarItemConfig;

@protocol UITabBarControllerDelegate;
@protocol TYTabBarControllerProtocol;


@protocol TYTabBarControllerDelegate <UITabBarControllerDelegate>

@optional

- (NSUInteger)ty_defaultTabIndex;

/**
 设置tabItem上title的样式
 */
- (NSDictionary<NSAttributedStringKey,id> *)ty_tabItemTitleTextAttributesForState:(UIControlState)state;

/**
 将要添加到tabbar
 */
- (void)ty_tabBar:(UITabBarController<TYTabBarControllerProtocol> *)controller willAdd:(UIViewController *)childController withTabBarItem:(UITabBarItem *)tabItem customButton:(__kindof UIControl *)button config:(TYTabBarItemConfig *)config;

/**
 item是否允许被选中
 该方法仅在defaultSelect无效时回调
 如果实现此方法
 请 不要 在此回调中处理业务逻辑
 请 务必仅返回 YES/NO
 默认根据TYTabBarItemConfig.viewController判断
 */
- (BOOL)ty_tabBar:(UITabBarController<TYTabBarControllerProtocol> *)controller itemCanBeSelected:(UIViewController *)childController withTabBarItem:(UITabBarItem *)tabItem customButton:(__kindof UIControl *)button config:(TYTabBarItemConfig *)config;

/**
 用户点击tab后，是否允许展示对应vc
 */
- (BOOL)ty_tabBar:(UITabBarController<TYTabBarControllerProtocol> *)controller shouldShow:(UIViewController *)childController withTabBarItem:(UITabBarItem *)tabItem customButton:(__kindof UIControl *)button config:(TYTabBarItemConfig *)config;

/**
 选中
 */
- (void)ty_tabBar:(UITabBarController<TYTabBarControllerProtocol> *)controller didSelect:(UIViewController *)childController withTabBarItem:(UITabBarItem *)tabItem customButton:(__kindof UIControl *)button config:(TYTabBarItemConfig *)config;
/**
 取消选中
 */
- (void)ty_tabBar:(UITabBarController<TYTabBarControllerProtocol> *)controller didUnselect:(UIViewController *)childController withTabBarItem:(UITabBarItem *)tabItem customButton:(__kindof UIControl *)button config:(TYTabBarItemConfig *)config;

/**
 设置badge
 */
- (BOOL)ty_tabBarItem:(__kindof UITabBarItem *)item atIndex:(NSUInteger)index shouldSetBadge:(NSString *)value withCustomButton:(__kindof UIControl *)button config:(TYTabBarItemConfig *)config;

@end
