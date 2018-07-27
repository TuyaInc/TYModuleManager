//
//  TYModuleTabbarMapping.h
//  Pods
//
//  Created by 房栋 on 2018/3/29.
//

#import <Foundation/Foundation.h>

@interface TYModuleTabbarMapping : NSObject

@property (nonatomic, assign) BOOL showBadge;
@property (nonatomic, assign) BOOL selected;

@property (nonatomic, copy) NSString *viewController;
@property (nonatomic, copy) NSString *moduleName;
@property (nonatomic, copy) NSString *pageTitle;
@property (nonatomic, copy) NSString *normalImage;
@property (nonatomic, copy) NSString *selectedImage;

@end
