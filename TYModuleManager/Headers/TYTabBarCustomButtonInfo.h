//
//  TYTabBarCustomButtonInfo.h
//  TYModuleTabbar
//
//  Created by 朱盼 on 2018/9/9.
//

#import <Foundation/Foundation.h>

@interface TYTabBarCustomButtonInfo : NSObject

@property (nonatomic, strong) UIControl *button;
@property (nonatomic) NSUInteger tabIndex;
@property (nonatomic) CGPoint centerOffset;

@end
