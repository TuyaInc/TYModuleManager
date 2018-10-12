Pod::Spec.new do |s|
  s.name             = 'TYModuleManager'
  s.version          = '1.0.1'
  s.summary          = '涂鸦模板组件'
  s.homepage         = 'https://docs.tuya.com/cn/'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'ios' => 'ios@tuya.com' }
  s.source           = { :git => 'https://github.com/TuyaInc/TYModuleManager.git', :tag => s.version.to_s }
  
  s.source_files = 'TYModuleManager/Headers/**/*'

  s.ios.deployment_target = '8.0'

  s.frameworks = 'UIKit', 'Foundation'
  
  s.vendored_library = 'TYModuleManager/libTYModuleManager.a'

end
