//
//  TYModuleLoginUtil.h
//  TYModuleManager
//
//  Created by 房栋 on 2018/5/7.
//

#import <Foundation/Foundation.h>

@interface TYModuleLoginUtil : NSObject
+ (void)userDidLoginSuccess;
+ (void)userDidAutoLoginSuccess;
+ (void)userDidLogOut;
+ (void)userDidForcedLogOut;
@end
