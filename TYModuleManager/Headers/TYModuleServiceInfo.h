//
//  TYModuleServiceInfo.h
//  TYModuleManager
//
//  Created by 朱盼 on 2018/8/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TYModuleServiceInfo : NSObject <NSCopying>

@property (nonatomic, strong) Protocol *protocol; /**< 服务的协议 */
@property (nonatomic, strong) Class implClass;   /**< 提供服务的类 */

// 暂时不对外开放
@property (nonatomic, getter=isSingleton, readonly) BOOL singleton;   /**< 是否是单例，如果是，则会在moduleManager内部对实例进行保留 [default:YES] */

@end

NS_ASSUME_NONNULL_END
