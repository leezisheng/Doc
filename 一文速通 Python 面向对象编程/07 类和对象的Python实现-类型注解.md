# 全网最适合入门的面向对象编程教程：07 类和对象的 Python 实现-类型注解-提高代码可读性的利器

# 摘要：

本文对类型注解的定义、使用原因进行了基本介绍，同时对使用 typing 模块实现类型提示和类型检查进行了基本讲解，通过使用类型注解可以让开发者更清晰地了解函数和变量的预期类型。

# 原文链接：

# 往期推荐：
[**学嵌入式的你，还不会面向对象？？！**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483825&idx=1&sn=149aaf3baa6a96703713e554d4a888db&chksm=c0b08a82f7c70394074a24b722a1caddb0ad598a7303e61133216ae61423df0b5bc57a6b82b2&scene=21#wechat_redirect "**学嵌入式的你，还不会面向对象？？！**")

[**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**](https://mp.weixin.qq.com/s/sycnlnMhtFji8q2fYh0MFQ "**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**")

[**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483853&idx=1&sn=c7685237216b8dd1cadf95f3353fde8e&chksm=c0b08afef7c703e8ce7b76958718ebe381220a199fac9e872710ea1cb4f8fc6f93d36d151279&scene=21#wechat_redirect "**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**")

[**全网最适合入门的面向对象编程教程：02 类和对象的 Python 实现-使用 Python 创建类**](https://mp.weixin.qq.com/s/XKpEAGY9WJ7GRFc98E6dcw)

[**全网最适合入门的面向对象编程教程：03 类和对象的 Python 实现-为自定义类添加属性**](https://mp.weixin.qq.com/s/LsNtLbHLNtVBtiQ3eaJnSg)

[**全网最适合入门的面向对象编程教程：04 类和对象的Python实现-为自定义类添加方法**](https://mp.weixin.qq.com/s/A5rMO3ppTZTUwRPL2NQxdg)

[**全网最适合入门的面向对象编程教程：05 类和对象的Python实现-PyCharm代码标签**](https://mp.weixin.qq.com/s/YjM1JPzLakfyWiDkyy4LQw)

[**全网最适合入门的面向对象编程教程：06 类和对象的Python实现-自定义类的数据封装**](https://mp.weixin.qq.com/s/z7CmgHJXf0QlAgIIRRTXlw)

# 更多精彩内容可看：
[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483747&idx=1&sn=0e203586516fd6e925085b9c1244dbee&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483719&idx=1&sn=7ece9da65d002fdc3df9539cc43f3a8d&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483671&idx=1&sn=c267a0c6f4ab93d6b6d934bf803b5919&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483774&idx=1&sn=46d57506febe92c1719c8567ebe95269&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483854&idx=1&sn=fd666dc501a0de850abfbd8793abff00&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")
# **文档和代码获取**

可访问如下链接进行对文档下载：

[**FreakStudio-一文速通Python面向对象编程**](https://github.com/leezisheng/Doc)

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240703011040244-1843255268.png)


**本文档主要介绍如何使用 Python 进行面向对象编程，需要读者对 Python 语法和单片机开发具有基本了解。相比其他讲解 Python 面向对象编程的博客或书籍而言，本文档更加详细、侧重于嵌入式上位机应用，以上位机和下位机的常见串口数据收发、数据处理、动态图绘制等为应用实例，同时使用 Sourcetrail 代码软件对代码进行可视化阅读便于读者理解。**

**相关示例代码获取链接如下：**
[**FreakStudio-一文速通Python面向对象编程-示例代码**](https://github.com/leezisheng/Python-OOP-Demo)

# 正文

众所周知，Python 是一门动态语言，当我们定义一个变量时，其数据类型可随时改变，同样的，当我们定义一个函数或类时，我们无法强制对传入的变量规定其数据类型。而通过类型注解，我们可以实现类型提示和类型检查，让开发者更清晰地了解函数和变量的预期类型。

对于常用 C/C++ 的嵌入式工程师来说，Python 的函数调用可是有些头疼，**Python 是动态语言，其显著特点是在声明变量时，你不需要显式声明它的类型。**尽管大部分时候你不用纠结类型声明、类型转化等麻烦事，可以用很少的代码完成各种骚操作，但是当你和其他成员协作编程时，**你不希望你的函数被传入错误类型的参数而引发不必要的麻烦**。

这时，我们可以使用 Python 中的类型注解避免这种问题，其作用就是让你可以明确的声明变量的类型，使代码不再那么的自由（放飞自我）。具体怎么操作可以查看官方文档：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240703011144569-476015199.png)


typing 模块为 Python 带来了类型提示和类型检查的能力。它允许开发者在代码中添加类型注解，提高代码的可读性和可维护性。`typing` 模块中有多种内置的类型别名，比如 `List`、`Tuple`、`Dict` 等，可以用于注解变量和函数的预期类型。我们可以通过 typing 模块对函数参数和返回值进行注解。

在我们的代码中 Serial 类的初始化方法中（类的定义可看上一篇文章），使用类型注解如下：

```python
def __init__(self,
                 devport:str     = "COM17",
                 devbaudrate:int = 115200,
                 devbytesize:int = serial.EIGHTBITS,
                 devparity  :str = serial.PARITY_NONE,
                 devstopbits:int = serial.STOPBITS_ONE):
                 pass
```

此时，类型注解能够提供给编辑器进行类型检查的机会，**但需要注意，也仅仅起提示的作用，对 Python 程序的运行不会产生任何影响。**也就是说，Python 跟以前一样自由，即使你进行了错误的类型赋值，只要不直接引发错误，程序依旧可以运行。

这里，我们使用错误的类型给 devport 赋值，可以看到 Pycharm 进行提示：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240703011152337-74720347.png)


那么，如何使得我们对函数进行了错误类型赋值时，程序发出提示并精确定位错误的代码行？这些在之后的异常类中会讲到。

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240703011217375-1706394072.png)


