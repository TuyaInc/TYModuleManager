//
//  TYModuleAppDelegateProtocol.h
//  TYModuleManager
//
//  Created by 房栋 on 2018/5/7.
//

#import <Foundation/Foundation.h>

@protocol TYModuleAppDelegateProtocol <NSObject>
- (void)resetRootViewController:(UIViewController *)controller;
- (UIViewController *)moduleServiceMainViewController;
@end
