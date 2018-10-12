//
//  TYModuleManagerProtocol.h
//  TYModuleManager
//
//  Created by 房栋 on 2018/5/8.
//

#import <Foundation/Foundation.h>

@protocol TYModuleConfigBlueprint;

@protocol TYModuleManagerProtocol <NSObject>

@property (nonatomic, strong, nullable) Class<TYModuleConfigBlueprint> configImpl;

+ (_Nonnull instancetype)sharedInstance;

- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions;


@end
