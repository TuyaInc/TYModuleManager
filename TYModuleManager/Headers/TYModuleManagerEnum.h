//
//  TYModuleManagerEnum.h
//  TYModuleManager
//
//  Created by 房栋 on 2018/5/7.
//

#ifndef TYModuleManagerEnum_h
#define TYModuleManagerEnum_h

typedef enum : NSUInteger {
    TYLoginLifeCycleTypeLoginSuccess = 0,
    TYLoginLifeCycleTypeLogOut,
    TYLoginLifeCycleTypeForceLogOut,
    TYLoginLifeCycleTypeAutoLoginSuccess
} TYLoginLifeCycleType;

#endif /* TYModuleManagerEnum_h */
