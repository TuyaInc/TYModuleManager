//
//  UIControl+TYTabCustomButton.h
//  TYModuleTabbar
//
//  Created by 朱盼 on 2018/9/12.
//

#import <UIKit/UIKit.h>

#import "TYTabCustomButtonProtocol.h"

@interface UIControl (TYTabCustomButton) <TYTabCustomButtonProtocol>

@property (nonatomic, strong) NSData *ty_hitMaskData;   /**< Internal Property, Not Accessible */

@end
