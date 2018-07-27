//
//  TYModuleTemplateBundleProtocol.h
//  Pods
//
//  Created by 房栋 on 2018/3/20.
//

#import <Foundation/Foundation.h>

@protocol TYModuleTemplateBundleProtocol <NSObject>

@required

//定义该模块存放模板mist文件的bundle名
- (NSString *)mistBundleName;


@optional
//这个非必要实现, 在mist文件中可以直接指定资源,但是我期望每个模块的图片跟mist资源可以区分开
- (NSString *)mistResourceBundleName;

@end
