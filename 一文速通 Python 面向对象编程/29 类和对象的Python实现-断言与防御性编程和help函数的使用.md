# 全网最适合入门的面向对象编程教程：29 类和对象的 Python 实现-断言与防御性编程和 help 函数的使用

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240731202023530-2086281548.png)


# 摘要：

在 Python 中，断言是一种常用的调试工具，它允许程序员编写一条检查某个条件。本文主要介绍了断言的应用场景和特点以及 assert 语句的使用，同时介绍了防御性编程和 help()函数。

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

[**全网最适合入门的面向对象编程教程：21 类和对象的Python实现-多文件的组织：模块module和包package**](https://mp.weixin.qq.com/s/zqG3vuxVq0pmUqrV-tztng)

[**全网最适合入门的面向对象编程教程：22 类和对象的Python实现-异常和语法错误**](https://mp.weixin.qq.com/s/Wj5ovLUWqKudW5VSiycK5A)

[**全网最适合入门的面向对象编程教程：23 类和对象的Python实现-抛出异常**](https://mp.weixin.qq.com/s/o5cgglFtmr9q3lW5gAiYEg)

[**全网最适合入门的面向对象编程教程：24 类和对象的Python实现-异常的捕获与处理**](https://mp.weixin.qq.com/s/DPC8Drr6iCnC0j-YMGyOfg)

[**全网最适合入门的面向对象编程教程：25 类和对象的Python实现-Python判断输入数据类型**](https://mp.weixin.qq.com/s/ghhS3fk98LTkh1a-daEg0Q)

[**全网最适合入门的面向对象编程教程：26 类和对象的Python实现-上下文管理器和with语句**](https://mp.weixin.qq.com/s/LHj-igDSYaL_1z8H7VEj1Q)

[**全网最适合入门的面向对象编程教程：27 类和对象的Python实现-Python中异常层级与自定义异常类的实现**](https://mp.weixin.qq.com/s/tQ2NHEWCMI4e4AG5BBsSpw)

[**全网最适合入门的面向对象编程教程：28 类和对象的Python实现-Python编程原则、哲学和规范大汇总**](https://mp.weixin.qq.com/s/rvHzNvuovU-3KY2FtcQK-Q)

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

## 断言（assert）

在 Python 编程中，断言（assert）作为一种强大的调试工具，被广泛应用于代码的调试和开发过程中。通过在代码中插入断言语句，我们可以对代码的正确性进行严格的检查。当断言的条件为假时，程序会引发 AssertionError 异常并停止执行。而当断言的条件为真时，程序会如常继续执行，仿佛断言语句从未存在过。因此，合理使用断言，对于确保代码的质量和稳定性具有重要意义。

```python
assert  表达式 , 描述
```

以下面代码为例，可以看到“1==2”的结果为 False，抛出了 AssertionError。

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240731202051060-1586826736.png)


与异常不同**，断言是为了提醒开发人员，在程序中可能出现了无法恢复的错误。对于一些可以预见的错误，例如未找到相关文件，用户通常能够自行纠正或重试。**然而，断言并非为这类问题而生。在无 bug 的程序中，断言条件将永远保持沉默。但如果违背了断言，程序就会崩溃并报告错误，向开发人员明确指出究竟是哪个“不可能”的情况出现了。这使得追踪和修复程序中的 bug 变得更为轻松。**在 Python 中，断言语句是一种用于调试的辅助功能，它并非处理运行时错误的机制。使用断言的目的在于帮助开发人员更快地找到可能导致 bug 的根本原因。**除非程序中确实存在 bug，否则断言绝不会抛出错误。

## 防御性编程与 unittest 单元测试库

断言一般用在防御型的编程、运行时检查程序逻辑、检查约定、程序常量、检查文档时，在从来不会运行失败的代码不必要加上断言。在单元测试框架中，我们常常使用断言。所谓单元测试，就是指对软件中的最小可测试单元进行检查和验证，通常是一个函数或一个方法。单元测试有助于我们在早期发现错误，提高代码的可靠性和可维护性。在 Python 中，内置了 unittest 单元测试库，可以用来编写测试代码。unittest 中常用的几个常用断言的使用方法如下：

| **名称**            | **作用**                          |
| ------------------- | --------------------------------- |
| **assertEqual**     | **如两个值相等，则 pass**         |
| **assertNotEqual**  | **如两个值不相等，则 pass**       |
| **assertTrue**      | **判断 bool 值为 True，则 pass**  |
| **assertFalse**     | **判断 bool 值为 False，则 Pass** |
| **assertIsNone**    | **不存在，则 pass**               |
| **assertIsNotNone** | **存在，则 pass**                 |

关于 unittest 单元测试库中断言的使用我们将会在之后讲到，这里仅作简单了解即可。

在使用断言时，需要特别注意的点是在命令行中使用-o 和-oo 标志，或者修改 CPython 中的 PYTHONOPTIMIZE 环境变量，可以全局性地禁用断言。此时，所有的断言语句都将失效，程序将直接跳过而不处理断言，因此不会执行任何条件表达式。

在 Python 的实际开发过程中，我们经常会遇到性能问题。所谓性能问题，就是 Python 程序运行得相对较慢。遇到性能问题时，我们有两种方法可以进行优化：一是修改源代码，优化逻辑，提升性能；二是打开 Python 解释器的优化功能。

Python 解释器提供了两种优化级别：

- level1 优化：通过将内置的__debug__全局变量设置为 false，并删除 assert 语句，达到优化效果。
- level2 优化：除了 level1 的优化措施外，还会删除函数的文档说明（即函数后面的''''注释）。

使用-O 参数可以达到 level1 优化效果（大写字母 O），而使用-OO 参数则可以达到 level2 优化效果（两个都是大写字母 O）。这些优化方法对于提升 Python 程序的运行速度非常有帮助。

```python
python -o main.py
```

## **help()函数**

在 Python 中，有许多内置函数和模块，其中一些可能不太起眼，但却非常实用。其中之一就是 help()函数。help()函数用于获取有关 Python 对象、模块、函数或方法的帮助信息。它可以更好地理解 Python 的功能和如何正确使用它们。

help()函数的基本用法非常简单，只需在交互式 Python 解释器中输入对象、模块、函数或方法的名称，并将其作为参数传递给 help()函数。

```python
help语法：help([object])
```

这里，我们看看 assert 函数的 help 输出：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240731202106533-1966420428.png)


![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240731202110773-229708834.png)

