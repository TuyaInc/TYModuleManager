//
//  TYModuleAsyncTaskAnalyse.h
//  TYModuleManager
//
//  Created by 房栋 on 2018/4/16.
//

#import <Foundation/Foundation.h>

#import "TYTaskProtocol.h"
#import "TYModuleASyncTaskNode.h"

@interface TYModuleAsyncTaskAnalyse : NSObject
+ (NSArray<id<TYTaskProtocol>> *)analyse:(NSMutableArray<id<TYTaskProtocol>> *)asyncTasks;
+ (NSArray<NSArray<id<TYTaskProtocol>> *> *)analyseMultableTasks:(NSMutableArray<id<TYTaskProtocol>> *)asyncTasks;


+ (TYModuleAsyncTaskAnalyse *)analyseInstance:(NSMutableArray<id<TYTaskProtocol>> *)asyncTasks;


- (id<TYTaskProtocol>)taskInstanceForKey:(NSString *)key;
- (NSArray<id<TYTaskProtocol>> *)diplomaticTasks;
- (NSArray<NSArray<id<TYTaskProtocol>> *> *)diplomaticMultableTasks;
@end
