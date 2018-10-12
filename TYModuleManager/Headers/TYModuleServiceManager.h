//
//  TYModuleServiceManager.h
//  TYModuleManager
//
//  Created by 房栋 on 2018/3/27.
//

#import <Foundation/Foundation.h>

#import "TYModuleServiceBlueprint.h"

@interface TYModuleServiceImplMapping : NSObject

@property (nonatomic, copy) NSString *protocolString;
@property (nonatomic, strong) id impl;
@property (nonatomic, copy) NSString  *implString;

@end

@interface TYModuleServiceManager : NSObject <TYModuleServiceBlueprint>

@end

