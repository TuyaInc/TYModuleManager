//
//  TYModuleNotifyBlueprint.h
//  Pods
//
//  Created by 朱盼 on 2018/9/3.
//

#import <Foundation/Foundation.h>

#import "TYModuleBaseBlueprint.h"

@protocol TYModuleNotifyBlueprint <TYModuleBaseBlueprint>

- (void)registResponder:(id)module forNotify:(SEL)sel;
- (void)unregistResponder:(id)module forNotify:(SEL)sel;

- (void)triggerNotify:(SEL)sel withUserInfo:(id)userInfo;
- (void)triggerNotify:(SEL)sel withUserInfo:(id)userInfo postName:(NSString *)postName;

@end
