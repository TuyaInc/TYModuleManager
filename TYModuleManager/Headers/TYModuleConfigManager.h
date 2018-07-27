//
//  TYModuleConfigManager.h
//  Pods
//
//  Created by 房栋 on 2018/3/20.
//

#import <Foundation/Foundation.h>

@interface TYModuleConfigManager : NSObject
@property (nonatomic, copy, readonly) NSArray<NSString *> *tabModules;
@property (nonatomic, copy, readonly) NSArray<NSString *> *modules;
@property (nonatomic, copy, readonly) NSString            *loginModule;
@property (nonatomic, copy, readonly) NSString            *tabSelectModule;
@property (nonatomic, copy, readonly) NSString            *appDelegateModule;
@end
