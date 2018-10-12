//
//  TYModuleNotifyRegisterProtocol.h
//  TYModuleManager
//
//  Created by 朱盼 on 2018/9/3.
//

#import <Foundation/Foundation.h>

@protocol TYModuleNotifyRegisterProtocol <NSObject>

/**
 返回本模块能响应的通知方法名
 
 @return NSArray<SEL>
 */
- (NSArray<NSString *> *)registRespondsNotifies;

@end
