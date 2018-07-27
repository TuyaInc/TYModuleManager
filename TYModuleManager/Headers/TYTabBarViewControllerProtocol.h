//
//  TYTabBarViewControllerProtocol.h
//  TYModuleManager
//
//  Created by 房栋 on 2018/3/30.
//

#import <Foundation/Foundation.h>

@protocol TYTabBarViewControllerProtocol <NSObject>

@optional
- (void)badgeNeedUpdate;
- (void)tabBarShouldSelected;
- (void)tabBarDidSelected;
@end
