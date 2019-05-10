Pod::Spec.new do |s|
  s.name             = 'TYModuleManager'
  s.version          = '1.2.0'

  s.summary          = 'Module Manager Powered By Tuya'
  s.homepage         = 'https://www.tuya.com'
  s.author           = { 'tuyaInc' => 'https://www.tuya.com' }
  s.license          = 'None'
  s.source           = { :git => 'https://github.com/TuyaInc/TYModuleManager.git', :tag => s.version.to_s }
  
  s.ios.deployment_target = '8.0'

  s.frameworks = 'UIKit', 'Foundation'
  
  s.source_files = 'TYModuleManager/Headers/**/*'
  s.vendored_library = 'TYModuleManager/libTYModuleManager.a'

end
