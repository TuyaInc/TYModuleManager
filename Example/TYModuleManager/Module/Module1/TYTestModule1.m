//
//  TYTestModule1.m
//  TYModuleManager_Example
//
//  Created by 朱盼 on 2018/10/12.
//  Copyright © 2018 Tuya. All rights reserved.
//

#import "TYTestModule1.h"

#import "TYModuleTabRegisterProtocol.h"

@interface TYTestModule1 () <TYModuleTabRegisterProtocol>

@end

@implementation TYTestModule1

#pragma mark - <TYModuleTabRegisterProtocol>
- (NSArray<TYTabItemAttribute *> *)registModuleTabItems {
    TYTabItemAttribute *tabAttr = [TYTabItemAttribute new];
    
    // 为tabItem配置viewController，根据需求自己包装navi
    UIViewController *pageVC = [UIViewController new];
    pageVC.title = @"Hello";
    UINavigationController *navi = [[UINavigationController alloc] initWithRootViewController:pageVC];
    tabAttr.viewController = navi;
    
    UIImage *normalImage = [[UIImage imageNamed:@"YourTabIcon"] imageWithRenderingMode:UIImageRenderingModeAlwaysTemplate];
    UIImage *selectImage = [[UIImage imageNamed:@"YourTabIcon"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    
    tabAttr.normalImage = normalImage;
    tabAttr.selectedImage = selectImage;
    
    tabAttr.itemTitle = @"Hello";
    
    return @[tabAttr];
}

@end
