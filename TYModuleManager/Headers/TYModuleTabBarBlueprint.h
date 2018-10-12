//
//  TYModuleTabBarBlueprint.h
//  TYModuleManager
//
//  Created by 朱盼 on 2018/9/3.
//

#import <Foundation/Foundation.h>

@class TYTabItemAttribute;

NS_ASSUME_NONNULL_BEGIN

@protocol TYModuleTabBarBlueprint <NSObject>

@property (nonatomic, strong) NSArray<TYTabItemAttribute *> *tabItemAttributes;
@property (nonatomic, strong) Class defaultSelectModule;

@property (nonatomic, strong, nullable) UIColor *titleColorForNormal;
@property (nonatomic, strong, nullable) UIColor *titleColorForSelect;

- (__kindof UITabBarController *)tabBarController;
- (__kindof UITabBar *)tabBar;

- (NSUInteger)indexOfModule:(Class)moduleCls;

- (void)reloadTabs;
- (void)reloadTabsWithSelectModule:(nullable Class)moduleCls;

- (void)showTabWithModule:(Class)moduleCls;

// 使用customButton的item不支持角标
- (void)setBadgeForIndex:(NSUInteger)index badge:(nullable NSString *)badge;
- (void)setBadgeForModule:(Class)moduleCls badge:(nullable NSString *)badge;
- (void)cleanAllBadge;

// 设置tab的分割线，nil则使用系统默认，[UIImage new]则去除分割线
- (void)setTabSeparatorImage:(UIImage *)image;

// 设置tab的背景
- (void)setTabBackgroundColor:(UIColor *)color;
- (void)setTabBackgroundImage:(UIImage *)image;

// 获取系统的TabBarButton
- (__kindof UIControl *)systemTabButtonForModule:(Class)moduleCls;
- (__kindof UIControl *)systemTabButtonForIndex:(NSUInteger)idx;

// 获取自定义的TabBarButton
- (__kindof UIControl *)customTabButtonForModule:(Class)moduleCls;
- (__kindof UIControl *)customTabButtonForIndex:(NSUInteger)idx;

@end

NS_ASSUME_NONNULL_END
