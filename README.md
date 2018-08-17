脚手架使用说明:

PS :后续有示例更新,用户直接pod update 即可



使用约定:

1.macOS Version 10.13-10.14 beta 及以上

2.cocoapods Version 1.5.3 及以上

3.xcode Version 9.4.1 及以上

4.可以正常访问github

5.在TYModuleManagerExampleImpl.m中有客户可使用的三方组件及版本, 可以按需使用 不在列表中的组件,需要申请通过才可以使用



使用方法:

ReplaceYourModuleName 替换成你希望的模块名

`pod lib create ReplaceYourModuleName --template-url=<https://github.com/TuyaInc/pod-template.git>`

使用细节:

1. 执行命令后会创建一个默认工程, 工程前缀不允许使用TY , 可使用不包括TY的任何其他前缀 防止跟我们内部的一些名字冲突


2. 在网络正常的情况下, 会自动打开工程, 默认依赖了TYModuleManagerExample工程,里面有更加详细的说明