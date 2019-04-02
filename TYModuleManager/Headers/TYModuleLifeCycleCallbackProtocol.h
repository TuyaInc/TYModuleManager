//
//  TYModuleLifeCycleCallbackProtocol.h
//  TYModuleManager
//
//  Created by Pany on 2019/3/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 if you need any callback in this protocol
 use <TYModuleLifeCycleCallbackProtocol> or [TYModule notifyService] to regist
 */
@protocol TYModuleLifeCycleCallbackProtocol <NSObject>

- (void)applicationModulesDidFinishLoadingNotify;

@end

NS_ASSUME_NONNULL_END
