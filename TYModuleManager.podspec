Pod::Spec.new do |s|
  s.name             = 'TYModuleManager'
  s.version          = '0.0.19.2'
  s.summary          = '涂鸦模板组件'
  s.homepage         = 'https://docs.tuya.com/cn/'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'isfang' => 'fangdong@tuyasmart.com' }
  s.source           = { :git => 'https://github.com/TuyaInc/TYModuleManager.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  #s.source_files = 'TYModuleManager/Classes/**/*'
  #s.resources = ['TYModuleManager/Assets/*.{png,xib,plist,xcassets,bundle}']

  s.frameworks = 'UIKit', 'Foundation'
  
  s.vendored_frameworks  = 'TYModuleManager/TYModuleManager.framework'

end
