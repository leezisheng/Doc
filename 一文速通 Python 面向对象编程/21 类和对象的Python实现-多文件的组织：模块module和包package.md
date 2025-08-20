# 全网最适合入门的面向对象编程教程：21 类和对象的 Python 实现-多文件的组织：模块 module 和包 package

# 摘要：

本文主要介绍了在使用 Python 面向对象编程时，如何实现多文件的组织，介绍了模块和包的定义及使用优点，同时讲解了如何在包中导入模块或类。

# 原文链接：
[**FreakStudio的博客**](https://www.cnblogs.com/FreakEmbedded)

# 往期推荐：
[**学嵌入式的你，还不会面向对象？？！**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483825&idx=1&sn=149aaf3baa6a96703713e554d4a888db&chksm=c0b08a82f7c70394074a24b722a1caddb0ad598a7303e61133216ae61423df0b5bc57a6b82b2&scene=21#wechat_redirect "**学嵌入式的你，还不会面向对象？？！**")

[**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**](https://mp.weixin.qq.com/s/sycnlnMhtFji8q2fYh0MFQ "**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**")

[**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483853&idx=1&sn=c7685237216b8dd1cadf95f3353fde8e&chksm=c0b08afef7c703e8ce7b76958718ebe381220a199fac9e872710ea1cb4f8fc6f93d36d151279&scene=21#wechat_redirect "**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**")

[**全网最适合入门的面向对象编程教程：02 类和对象的 Python 实现-使用 Python 创建类**](https://mp.weixin.qq.com/s/XKpEAGY9WJ7GRFc98E6dcw)

[**全网最适合入门的面向对象编程教程：03 类和对象的 Python 实现-为自定义类添加属性**](https://mp.weixin.qq.com/s/LsNtLbHLNtVBtiQ3eaJnSg)

[**全网最适合入门的面向对象编程教程：04 类和对象的Python实现-为自定义类添加方法**](https://mp.weixin.qq.com/s/A5rMO3ppTZTUwRPL2NQxdg)

[**全网最适合入门的面向对象编程教程：05 类和对象的Python实现-PyCharm代码标签**](https://mp.weixin.qq.com/s/YjM1JPzLakfyWiDkyy4LQw)

[**全网最适合入门的面向对象编程教程：06 类和对象的Python实现-自定义类的数据封装**](https://mp.weixin.qq.com/s/z7CmgHJXf0QlAgIIRRTXlw)

[**全网最适合入门的面向对象编程教程：07 类和对象的Python实现-类型注解**](https://mp.weixin.qq.com/s/7r4hgM3a187si_D5ReEMCA)

[**全网最适合入门的面向对象编程教程：08 类和对象的Python实现-@property装饰器**](https://mp.weixin.qq.com/s/sSO-L_NQHarXh160xiVZVg)

[**全网最适合入门的面向对象编程教程：09 类和对象的Python实现-类之间的关系**](https://mp.weixin.qq.com/s/cAZzXr9MSL0nVxVcTgNlQA)

[**全网最适合入门的面向对象编程教程：10 类和对象的Python实现-类的继承和里氏替换原则**](https://mp.weixin.qq.com/s/29Lr_nigsMuIJMmWEObk1g)

[**全网最适合入门的面向对象编程教程：11 类和对象的Python实现-子类调用父类方法**](https://mp.weixin.qq.com/s/HEvQNiVXkjlnbhz8Sdt_4Q)

[**全网最适合入门的面向对象编程教程：12 类和对象的Python实现-Python使用logging模块输出程序运行日志**](https://mp.weixin.qq.com/s/QHYLu7Mrs2ErUHvy_k59QA)

[**全网最适合入门的面向对象编程教程：13 类和对象的Python实现-可视化阅读代码神器Sourcetrail的安装使用**](https://mp.weixin.qq.com/s/EbJJpqIq8v_eRQZfdWONFA)

[**全网最适合入门的面向对象编程教程：全网最适合入门的面向对象编程教程：14 类和对象的Python实现-类的静态方法和类方法**](https://mp.weixin.qq.com/s/fLSGXknzwY8FHzavunfQXg)

[**全网最适合入门的面向对象编程教程：15 类和对象的 Python 实现-__slots__魔法方法**](https://mp.weixin.qq.com/s/fLSGXknzwY8FHzavunfQXg)

[**全网最适合入门的面向对象编程教程：16 类和对象的Python实现-多态、方法重写与开闭原则**](https://mp.weixin.qq.com/s/VNlMnPhSyglZ9FalqIfw-A)

[**全网最适合入门的面向对象编程教程：17 类和对象的Python实现-鸭子类型与“file-like object“**](https://mp.weixin.qq.com/s/mffQ0sdsI5yt_tJrZRxe-g)

[**全网最适合入门的面向对象编程教程：18 类和对象的Python实现-多重继承与PyQtGraph串口数据绘制曲线图**](https://mp.weixin.qq.com/s/JSIKlWJ4pNShBGkfXolkQg)

[**全网最适合入门的面向对象编程教程：19 类和对象的 Python 实现-使用 PyCharm 自动生成文件注释和函数注释**](https://www.cnblogs.com/FreakEmbedded/p/18308599)

[**全网最适合入门的面向对象编程教程：20 类和对象的Python实现-组合关系的实现与CSV文件保存**](https://mp.weixin.qq.com/s/_TuErM5YRBsy2wixYbbbkw)

# 更多精彩内容可看：
[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483747&idx=1&sn=0e203586516fd6e925085b9c1244dbee&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483719&idx=1&sn=7ece9da65d002fdc3df9539cc43f3a8d&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483671&idx=1&sn=c267a0c6f4ab93d6b6d934bf803b5919&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483774&idx=1&sn=46d57506febe92c1719c8567ebe95269&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483854&idx=1&sn=fd666dc501a0de850abfbd8793abff00&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")

# **文档和代码获取：**

可访问如下链接进行对文档下载：

[https://github.com/leezisheng/Doc](https://github.com/leezisheng/Doc)

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240711215550373-1274223674.png)


**本文档主要介绍如何使用 Python 进行面向对象编程，需要读者对 Python 语法和单片机开发具有基本了解。相比其他讲解 Python 面向对象编程的博客或书籍而言，本文档更加详细、侧重于嵌入式上位机应用，以上位机和下位机的常见串口数据收发、数据处理、动态图绘制等为应用实例，同时使用 Sourcetrail 代码软件对代码进行可视化阅读便于读者理解。**

**相关示例代码获取链接如下：**[https://github.com/leezisheng/Python-OOP-Demo](https://github.com/leezisheng/Python-OOP-Demo)

# 正文

现在我们知道了如何创建类和实例化对象，如何使用组合和继承来编写代码，但是应该如何组织它们？对于小程序来说，我们可以把所有的类放到一个文件里，然后在文件最后添加一小段代码，让它们交互起来。然而，随着项目规模的增长，很难从众多类中找出我们需要修改的那一个。

这时就需要模块（module），模块就是 Python 文件，仅此而已。我们小程序中的一个文件就是一个模块。两个 Python 文件就是两个模块。如果我们在同一个目录下有两个文件，我们可以从其中一个模块中导入类到另一个模块中使用。

例如，我们正在构建一个串口上位机程序，其各个模块组织很可能如下：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240719113417963-271108847.png)


我们可以将不同模块保存到统一文件夹的不同 python 文件中，在创建 main.py 导入并控制不同模块交替运行或交换数据。import 语句用于从模块中导入模块或特定的类、函数。通过将函数、变量、类存储在存储在独立的.py 文件中，可隐藏代码实现的细节，将不同代码块重新组织，与主程序分离，简化主程序的逻辑，提高主程序的可读性。

如下为我们的文件组织：

| **文件名称** | **文件描述**                                           |
| ------------ | ------------------------------------------------------ |
| Main.py      | 定义了传感器类和主机类的属性和方法主程序，调用其他模块 |
| FileIO.py    | 定义了 FileIOClass 的属性和方法                        |
| Plot.py      | 定义了 PlotClass 的属性和方法                          |
| Serial.py    | 定义了 SerialClass 的属性和方法                        |
| my.log       | 程序日志                                               |
| file.csv     | 保存传感器数据                                         |

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240719113425214-1449576962.png)


![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240719113431229-949480539.png)


我们可以在主文件中，通过如下语句导入自定义模块：

```python
_# 引用自定义模块_
from FileIO import FileIOClass
from Plot   import PlotClass
from Serial import SerialClass
```

随着项目中模块变得越来越多，我们可能会想要添加另外一层抽象，为模块层次添加某种嵌套的等级。但是我们不能将模块添加到模块中，毕竟一个文件只能容纳一个文件，而模块就只是 Python 文件而已。

但是文件可以存储在目录下，模块也可以。一个包（package）是一个目录下模块的集合。包的名字就是目录的名字。我们只需要在目录下添加一个名为__init__.py 的文件（通常是空文件）就可以告诉 Python 这个目录是一个包。

在包之间导入模块或类的时候要注意语法。在 Python 3 中，有两种导入模块的方法：绝对导入和相对导入：

- 绝对导入是指定我们想要导入的模块、函数或路径的完整路径。import 语句用点号操作符（period operator）来区分包和模块。
- 相对导入基本上是一种寻找与当前模块在位置上有相对关系的类、函数或模块的方式。常用于处理同一个包下的相关模块。

具体使用方法可以点击：<u>[https://zhuanlan.zhihu.com/p/376426708](https://zhuanlan.zhihu.com/p/376426708)</u>

这里需要注意，所有模块层的代码都会在导入的时候立即执行。开发人员通常会在模块下方增加一些测试代码，为了避免这些测试代码在模块被导入后执行，可以利用__name__属性。

__name__属性是 Python 的一个内置属性，记录了一个字符串：

- 若是在当前文件，name 是 main；
- 若是导入的文件，name 是模块名。

当你要导入某个模块，但又不想模块的部分代码被直接执行，那就可以这一部分代码放在以下语句的内部：

```python
# 模块或类
if __name__=='__main__:
    # 测试本文件中模块/类的代码
```

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240719113446134-123306937.png)

