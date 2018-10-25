//
//  TYTabCustomButtonProtocol.h
//  TYModuleManager
//
//  Created by 朱盼 on 2018/9/12.
//

#import <Foundation/Foundation.h>

/*
 涂鸦已经包含了 UIControl对以下属性的存取方法
 所以请放心使用
 */

@protocol TYTabCustomButtonProtocol <NSObject>

@property (nonatomic) CGPoint ty_centerOffset;
@property (nonatomic, strong) UIImage *ty_hitMask; /**< 用来处理异形点击区域，hitMask上透明度>85%的点可以响应点击 */

@end
