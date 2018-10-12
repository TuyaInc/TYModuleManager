//
//  TYTabBarItem.h
//  TYModuleTabbar
//
//  Created by 朱盼 on 2018/9/1.
//

#import <UIKit/UIKit.h>

@class TYTabBarItem;

@protocol TYTabBarItemDelegate <NSObject>

- (BOOL)ty_tabBarItem:(TYTabBarItem *)item shouldSetBadge:(NSString *)value;

@end

@interface TYTabBarItem : UITabBarItem

@property (nonatomic) NSUInteger tabIndex;

@property (nonatomic, weak) id<TYTabBarItemDelegate> ty_delegate;

@end
