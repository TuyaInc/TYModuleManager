# TYModuleManager



## 概述

TYModuleManager 是涂鸦所使用的模块化工具，它也能提供诸如 route管理、tab管理、notify管理、launchTask管理、service管理 等功能

TYModuleManager 能够帮助开发者的代码更好的接入 "涂鸦智能"APP

更多关于TYModuleManager的介绍  🔗[TYModuleManager客户使用指南](https://tuyainc.github.io/2018/10/12/TYModuleManager%E5%AE%A2%E6%88%B7%E4%BD%BF%E7%94%A8%E6%8C%87%E5%8D%97/)



## 使用

```ruby
source 'https://github.com/TuyaInc/TYPublicSpecs.git'

pod 'TYModuleManager'
```



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

  
