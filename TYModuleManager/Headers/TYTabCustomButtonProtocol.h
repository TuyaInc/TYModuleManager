//
//  TYTabCustomButtonProtocol.h
//  TYModuleTabbar
//
//  Created by 朱盼 on 2018/9/12.
//

#import <Foundation/Foundation.h>

@protocol TYTabCustomButtonProtocol <NSObject>

@property (nonatomic) CGPoint ty_centerOffset;
@property (nonatomic, strong) UIImage *ty_hitMask; /**< 用来处理异形点击区域，hitMask上透明度>85%的点可以响应点击 */

@end
