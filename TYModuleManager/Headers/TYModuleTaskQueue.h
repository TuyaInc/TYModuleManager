//
//  TYModuleTaskQueue.h
//  Pods
//
//  Created by 房栋 on 2018/4/16.
//

#import <Foundation/Foundation.h>

#import "TYTaskProtocol.h"

@interface TYModuleTaskQueue : NSObject
@property (nonatomic, copy) void (^basicTaskCompleteBlock)(void);
- (instancetype)initWithTaskdDescribe:(NSDictionary<NSString *, NSArray<Class<TYTaskProtocol>> *> *)taskClsDictionary;
- (void)executeQueue;
@end
