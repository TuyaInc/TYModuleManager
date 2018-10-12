//
//  TYTabBarControllerProtocol.h
//  TYModuleTabbar
//
//  Created by 朱盼 on 2018/8/27.
//

#import <Foundation/Foundation.h>

@class TYTabBarItemConfig;

@protocol TYTabBarControllerDataSource;
@protocol TYTabBarControllerDelegate;

@protocol TYTabBarControllerProtocol <NSObject>

#pragma mark - DataSource & Delegate
@property (nonatomic, weak) id<TYTabBarControllerDataSource> ty_dataSource;
@property (nonatomic, weak) id<TYTabBarControllerDelegate> ty_delegate;

#pragma mark - TabBar Attribute
@property (nonatomic) CGFloat tabBarHeight;

@property (nonatomic, strong) UIImage *tabSeparatorImage;   /**< 如果设置tabSeparatorImage，请一并设置tabBackgroundColor/tabBackgroundImage 否则tabbar将是透明的 */

@property (nonatomic, strong) UIColor *tabBackgroundColor;
@property (nonatomic, strong) UIImage *tabBackgroundImage;

#pragma mark - TabItem Attribute
@property (nonatomic) UIEdgeInsets itemImageInsets;
@property (nonatomic) UIOffset itemTitleOffset;

@property (nonatomic, strong, readonly) NSArray<TYTabBarItemConfig *> *itemConfigArr;

- (void)reloadData;

- (TYTabBarItemConfig *)itemConfigAtIndex:(NSUInteger)index;
- (TYTabBarItemConfig *)itemConfigOfViewController:(UIViewController *)childController;

- (UIViewController *)childViewControllerAtIndex:(NSUInteger)index;

- (UIControl *)customTabButtonAtIndex:(NSUInteger)index;
- (UIControl *)systemTabButtonAtIndex:(NSUInteger)index;

@end
