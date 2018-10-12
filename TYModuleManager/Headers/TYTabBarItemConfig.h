//
//  TYTabBarItemConfig.h
//  TYModuleTabbar
//
//  Created by 朱盼 on 2018/9/9.
//

#import <Foundation/Foundation.h>

@interface TYTabBarItemConfig : NSObject

@property (nonatomic, readonly) NSUInteger tabIndex;

@property (nonatomic, strong) __kindof UIViewController *viewController;

@property (nonatomic, copy) NSString *itemTitle;
@property (nonatomic, strong) UIImage *normalImage;
@property (nonatomic, strong) UIImage *selectedImage;

@property (nonatomic, copy) NSString *badgeValue;
@property (nonatomic, strong) UIColor *badgeColor NS_AVAILABLE_IOS(10_0);

@property (nonatomic) UIEdgeInsets imageInsets;
@property (nonatomic) UIOffset titleOffset;

@property (nonatomic, copy) NSString *tag;

@property (nonatomic, strong) __kindof UIControl *customTabButton;
@property (nonatomic) CGPoint customBtnCenterOffset;

@property (nonatomic, strong) NSDictionary *userInfo;

@end
