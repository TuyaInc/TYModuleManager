//
//  TYModuleUtils.h
//  Pods
//
//  Created by 房栋 on 2018/5/22.
//

#import <Foundation/Foundation.h>
#import "TYModuleManagerContext.h"
#import "TYModuleCommonConstant.h"


@interface TYModuleUtils : NSObject
void ty_module_at_dispatch_async_on_default_global_thread(dispatch_block_t block);
void ty_module_at_dispatch_async_on_main_thread(dispatch_block_t block);
void ty_module_at_dispatch_sync_on_main_thread(dispatch_block_t block);

@end
