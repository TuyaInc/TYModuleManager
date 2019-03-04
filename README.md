# TYModuleManager



## 概述

TYModuleManager 是涂鸦所使用的模块化工具，它也能提供诸如 route管理、tab管理、notify管理、launchTask管理、service管理 等功能

TYModuleManager 能够帮助开发者的代码更好的接入 "涂鸦智能"APP

更多关于TYModuleManager的介绍  🔗[iOS 模块化TYModuleManager使用说明](https://tuyainc.github.io/2018/09/25/iOS%20%E6%A8%A1%E5%9D%97%E5%8C%96TYModuleManager%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E/)



## 使用

```ruby
source 'https://github.com/TuyaInc/TYPublicSpecs.git'

pod 'TYModuleManager'
```



## 禁用异常警告

在 info.plist 中添加 "TYModuleManager_Disable_Exception" 并设置为 YES 



## 配套工具

- tuya-cli-public

  涂鸦提供的脚手架工具，能够帮助开发者通过简单的命令搭建符合涂鸦规范的工程，并帮助进行相关管理

  - tuya-cli-public  [下载](https://rubygems.org/gems/tycli-public)
  - tuya-cli-public  [使用指南](https://tuyainc.github.io/2018/09/25/tuya-cli-public/)



- TYModuleManagerCompatKit

  如果你曾使用过 TYModuleManager < 1.0 的版本，且在升级后无法通过编译，请使用[TYModuleManagerCompatKit](https://github.com/TuyaInc/TYModuleManagerCompatKit)对你的老代码进行兼容

  ```ruby
  source 'https://github.com/TuyaInc/TYPublicSpecs.git'
  
  pod 'TYModuleManagerCompatKit'
  ```

  
