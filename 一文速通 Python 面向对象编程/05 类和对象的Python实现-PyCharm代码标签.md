# 摘要：
本文介绍了PyCharm IDE中代码标签的定义、类型和使用方法。
# 往期推荐：
[**学嵌入式的你，还不会面向对象？？！**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483825&idx=1&sn=149aaf3baa6a96703713e554d4a888db&chksm=c0b08a82f7c70394074a24b722a1caddb0ad598a7303e61133216ae61423df0b5bc57a6b82b2&scene=21#wechat_redirect "**学嵌入式的你，还不会面向对象？？！**")

[**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**](https://mp.weixin.qq.com/s/sycnlnMhtFji8q2fYh0MFQ "**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**")

[**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483853&idx=1&sn=c7685237216b8dd1cadf95f3353fde8e&chksm=c0b08afef7c703e8ce7b76958718ebe381220a199fac9e872710ea1cb4f8fc6f93d36d151279&scene=21#wechat_redirect "**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**")

[**全网最适合入门的面向对象编程教程：02 类和对象的 Python 实现-使用 Python 创建类**](https://mp.weixin.qq.com/s/XKpEAGY9WJ7GRFc98E6dcw)

[**全网最适合入门的面向对象编程教程：03 类和对象的 Python 实现-为自定义类添加属性**](https://mp.weixin.qq.com/s/LsNtLbHLNtVBtiQ3eaJnSg)

[**全网最适合入门的面向对象编程教程：04 类和对象的Python实现-为自定义类添加方法**](https://mp.weixin.qq.com/s/A5rMO3ppTZTUwRPL2NQxdg)

# 更多精彩内容可看：
[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483747&idx=1&sn=0e203586516fd6e925085b9c1244dbee&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483719&idx=1&sn=7ece9da65d002fdc3df9539cc43f3a8d&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483671&idx=1&sn=c267a0c6f4ab93d6b6d934bf803b5919&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483774&idx=1&sn=46d57506febe92c1719c8567ebe95269&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483854&idx=1&sn=fd666dc501a0de850abfbd8793abff00&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")

# 文档和代码获取
可访问如下链接进行对文档下载：
https://github.com/leezisheng/Doc
![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240630011711046-2038305759.png)

本文档主要介绍如何使用 Python 进行面向对象编程，需要读者对 Python 语法和单片机开发具有基本了解。相比其他讲解 Python 面向对象编程的博客或书籍而言，本文档更加详细、侧重于嵌入式上位机应用，以上位机和下位机的常见串口数据收发、数据处理、动态图绘制等为应用实例，同时使用 Sourcetrail代码软件对代码进行可视化阅读便于读者理解。
相关示例代码获取链接如下：https://github.com/leezisheng/Python-OOP-Demo
# 正文
上一篇在类方法的注释中，你可能已经发现每个方法下面一行都有：
```python
#TODO:打开串口方法待完成
```
在Pycharm中，它长这样：
![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240630011829311-1871075517.png)

你可能在别的代码中看过类似的标识，如FIXME、NOTE、UNDONE等，这些是注释中的标签（tag），有时也被称作“代码标签（codetag）”或“标记（token）”。它们在编写代码中属于非正式使用的记号，但在项目开发中，能够能让代码编写者在代码中起到提示、索引和快速定位的作用。在大多数 IDE 或文本编辑器当中，以如上所述标签作为开头的注释，也会有特殊的语法高亮。代码标签实际上就是一种特殊类型的注释，这些注释在编辑器中突出显示、已编入索引并在 TODO 工具窗口中列出。
![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240630011847975-2025674497.png)

其中，TODO表示即将着手编写的代码，说明需要完成的任务或实现的功能。
TODO格式如下：
```python
# TODO(name): Need implementation
```
在Pycharm中，我们可以在下方导航栏中看到所有TODO标识的函数：
![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240630011919066-1939561551.png)

除了TODO外，还有FIXME标签，表示需要修复的bug。通过使用代码标签，在对包含多个文件的项目进行编码时，我们可以快速找到待完成的方法/函数以及待修复的bug。
![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240630011930340-1279534211.png)
