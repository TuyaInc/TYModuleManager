//
//  TYModuleASyncTaskNode.h
//  Pods
//
//  Created by 房栋 on 2018/4/16.
//

#import <Foundation/Foundation.h>

#import "TYTaskProtocol.h"

@interface TYModuleASyncTaskNode : NSObject

@property (nonatomic, assign) NSInteger nodeDep;

@property (nonatomic, copy) NSString *parent;

@property (nonatomic, strong) NSMutableDictionary<NSString *, TYModuleASyncTaskNode *> *nodes;

@property (nonatomic, strong) id<TYTaskProtocol> task;

- (void)joinNode:(TYModuleASyncTaskNode *)node;

- (void)addTask:(id<TYTaskProtocol>)task;

@end
