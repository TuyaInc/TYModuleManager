//
//  TYModuleTaskConstant.h
//  Pods
//
//  Created by 房栋 on 2018/4/16.
//

#ifndef TYModuleTaskConstant_h
#define TYModuleTaskConstant_h


#ifndef ty_queue_task_exeception
#define ty_queue_task_exeception(message)\
@throw [NSException exceptionWithName:NSStringFromClass([self class]) reason:message userInfo:nil];
#endif


typedef enum : NSUInteger {
    TYModuleTaskInternalLevelAsync = 0,
    TYModuleTaskInternalLevelTail,
    TYModuleTaskInternalLevelBasic              //基础队列不对外开放
} TYModuleInternalTaskLevel;


#endif /* TYModuleTaskConstant_h */
