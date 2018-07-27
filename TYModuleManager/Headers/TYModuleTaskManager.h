//
//  TYModuleTaskManager.h
//  AutoCoding
//
//  Created by 房栋 on 2018/4/8.
//

#import <Foundation/Foundation.h>

#import "TYModuleProtocol.h"

@interface TYModuleTaskManager : NSObject
    
@property (nonatomic, copy) void (^basicTaskCompleteBlock)(void);

- (void)registerTasks:(id<TYModuleProtocol>)module;

- (void)generateTaskQueue;
@end
