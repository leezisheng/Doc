# 全网最适合入门的面向对象编程教程：49 Python 函数方法与接口-函数与方法的区别和 lamda 匿名函数

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240825003614492-408022634.png)

# 摘要：

在 Python 中，函数和方法都是代码的基本单元，用于封装和执行特定的任务；它们之间有一些重要的区别，而 lambda 匿名函数则是 Python 提供的一种简洁定义小型函数的方法。

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

[**全网最适合入门的面向对象编程教程：29 类和对象的Python实现-断言与防御性编程和help函数的使用**](https://mp.weixin.qq.com/s/swfA2JsajMFpaOa5PZCEbg)

[**全网最适合入门的面向对象编程教程：30 Python的内置数据类型-object根类**](https://mp.weixin.qq.com/s/5NxKSJUxetAkdwYW9n941w)

[**全网最适合入门的面向对象编程教程：31 Python的内置数据类型-对象Object和类型Type**](https://mp.weixin.qq.com/s/Z3AMqnfkmhqzcK3A-J3ylw)

[**全网最适合入门的面向对象编程教程：32 Python的内置数据类型-类Class和实例Instance**](https://mp.weixin.qq.com/s/C4pj9ujGsQMMOnLEqI414A)

[**全网最适合入门的面向对象编程教程：33 Python的内置数据类型-对象Object和类型Type的关系**](https://mp.weixin.qq.com/s/V_3QFDJRss_lAJHgJ4oVwg)

[**全网最适合入门的面向对象编程教程：34 Python的内置数据类型-Python常用复合数据类型：元组和命名元组**](https://mp.weixin.qq.com/s/crZBcEEBKBfDfWA9ub-d-A)

[**全网最适合入门的面向对象编程教程：35 Python的内置数据类型-文档字符串和__doc__属性**](https://mp.weixin.qq.com/s/_X7sKhro7wJ96KwhbAcopg)

[**全网最适合入门的面向对象编程教程：36 Python的内置数据类型-字典**](https://mp.weixin.qq.com/s/KCvCx7Im35uiBkPpJASTkg)

[**全网最适合入门的面向对象编程教程：37 Python常用复合数据类型-列表和列表推导式**](https://mp.weixin.qq.com/s/bNSPkIhKgmzLFz5BYdizNQ)

[**全网最适合入门的面向对象编程教程：38 Python常用复合数据类型-使用列表实现堆栈、队列和双端队列**](https://mp.weixin.qq.com/s/XgTr4hvBC4Uk2hPmaDRn2Q)

[**全网最适合入门的面向对象编程教程：39 Python常用复合数据类型-集合**](https://mp.weixin.qq.com/s/Cx0--RZGrzud_aILXTlEJg)

[**全网最适合入门的面向对象编程教程：40 Python常用复合数据类型-枚举和enum模块的使用**](https://mp.weixin.qq.com/s/bCxbepaVypefwEOtKnzb5g)

[**全网最适合入门的面向对象编程教程：41 Python常用复合数据类型-队列（FIFO、LIFO、优先级队列、双端队列和环形队列）**](https://mp.weixin.qq.com/s/Ah-fhWf67Jm7TF-OGooy-g)

[**全网最适合入门的面向对象编程教程：42 Python常用复合数据类型-collections容器数据类型**](https://mp.weixin.qq.com/s/XkIocfNXpie-65voC4W8wA)

[**全网最适合入门的面向对象编程教程：43 Python常用复合数据类型-扩展内置数据类型**](https://mp.weixin.qq.com/s/ODYRdwzdlcBQkCE3xpYjIA)

[**全网最适合入门的面向对象编程教程：44 Python内置函数与魔法方法-重写内置类型的魔法方法**](https://mp.weixin.qq.com/s/DLylf2L_dpkcXYw6iFnhwA)

[**全网最适合入门的面向对象编程教程：45 Python实现常见数据结构-链表、树、哈希表、图和堆**](https://mp.weixin.qq.com/s/AEyP4BfRGZB63akTgGLWZw)

[**全网最适合入门的面向对象编程教程：46 Python函数方法与接口-函数与事件驱动框架**](https://mp.weixin.qq.com/s/3COyHC1ob9xs_EUQtk7hCA)

[**全网最适合入门的面向对象编程教程：47 Python函数方法与接口-回调函数Callback**](https://mp.weixin.qq.com/s/wmc2ZcSC3l5JOLpMpthv6Q)

[**全网最适合入门的面向对象编程教程：48 Python函数方法与接口-位置参数、默认参数、可变参数和关键字参数**](https://mp.weixin.qq.com/s/MEvlZqaItRNwP4zRtMQHhQ)

# 更多精彩内容可看：
[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483747&idx=1&sn=0e203586516fd6e925085b9c1244dbee&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483719&idx=1&sn=7ece9da65d002fdc3df9539cc43f3a8d&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483671&idx=1&sn=c267a0c6f4ab93d6b6d934bf803b5919&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483774&idx=1&sn=46d57506febe92c1719c8567ebe95269&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483854&idx=1&sn=fd666dc501a0de850abfbd8793abff00&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")

[**Avnet ZUBoard 1CG开发板—深度学习新选择**](https://mp.weixin.qq.com/s/2-Z6WqekVOuDbEdiE65Wfw)

[**SenseCraft 部署模型到Grove Vision AI V2图像处理模块**](https://mp.weixin.qq.com/s/6VSe9wyQn_EmaD4htOuCmQ)

# **文档和代码获取：**

可访问如下链接进行对文档下载：

[https://github.com/leezisheng/Doc](https://github.com/leezisheng/Doc)

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240711215550373-1274223674.png)


**本文档主要介绍如何使用 Python 进行面向对象编程，需要读者对 Python 语法和单片机开发具有基本了解。相比其他讲解 Python 面向对象编程的博客或书籍而言，本文档更加详细、侧重于嵌入式上位机应用，以上位机和下位机的常见串口数据收发、数据处理、动态图绘制等为应用实例，同时使用 Sourcetrail 代码软件对代码进行可视化阅读便于读者理解。**

**相关示例代码获取链接如下：**[https://github.com/leezisheng/Python-OOP-Demo](https://github.com/leezisheng/Python-OOP-Demo)

# 正文

## 函数和方法

函数是封装了一些独立的功能，可以直接调用，能将一些数据（参数）传递进去进行处理，然后返回一些数据（返回值），也可以没有返回值。可以直接在模块中进行定义使用。 所有传递给函数的数据都是显式传递的。

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240915003008041-1014979384.png)


方法和函数类似，同样封装了独立的功能，但是方法是只能依靠类或者对象来调用的，表示针对性的操作。方法中的数据 self 和 cls 是隐式传递的，即方法的调用者，同时，方法可以操作类内部的数据。简单的说，函数在 python 中独立存在，可直接使用的，而方法是必须被别人调用才能实现的。

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240915003013839-2002396956.png)


简单来说，与类和实例无绑定关系的 function 都属于函数；与类和实例有绑定关系的 function 都属于方法。

实际上，类的方法并不一定必须在类内实现，也可以在类内先声明而不具体实现，在类外部实现并给属性赋值（实现具体方法）。示例代码如下：

```python
_# 定义Cat类_
class Cat:
    def say(self):
        print("I' m a cat")

cat1 = Cat()
_# 定义lie方法_
lie = lambda self: print("I' m a dog")
_# 添加lie方法_
Cat.lie = lie
_# 查看Cat类属性_
print(dir(Cat))
cat1.lie()
```

如下为运行结果，可以看到已经成功给 Cat 类添加了 lie 方法。

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240915003020788-1101168620.png)


## **lamda 函数/匿名函数**

lambda 函数是一种小型、匿名的、内联函数，它可以具有任意数量的参数，但只能有一个表达式。匿名函数不需要使用 def 关键字定义完整函数。lambda 函数通常用于编写简单的、单行的函数，通常在需要函数作为参数传递的情况下使用，例如在 map()、filter()、reduce()等函数中。

lambda 语法格式：

```python
lambda arguments: expression
```

lambda 表达式的参数:

- lambda 是 Python 的关键字，用于定义 lambda 函数
- arguments 是参数列表，可以包含零个或多个参数，但必须在冒号(:)前指定
- expression 是一个表达式，用于计算并返回函数的结果

以下实例使用 lambda 创建匿名函数，函数参数 a 与 b 相乘，并返回结果：

```python
x = lambda a, b : a * b
print(x(5, 6))
```

lambda 函数也可以与内置函数如 map()、filter()和 reduce()一起使用，以便在集合上执行操作。

例如与 map()函数配合实现一个列表的平方运算，map()函数的原型是 map(function,iterable,……)，它的结果是返回一个列表，这个函数的意义是将 function 应用于 iterable 的每一个元素，结果以列表的形式返回。

```python
numbers = [1, 2, 3, 4, 5]
squared = list(map(lambda x: x**2, numbers))
print(squared)
```

或者与 filter 函数配合，对列表中元素进行筛选。filter()函数能够从可迭代对象（如字典、列表）中筛选某些元素，并生成一个新的迭代器。filter(function, iterable)函数会返回一个可迭代的 filter 对象，可以使用 list()函数将其转化为列表，这个列表包含过滤器对象中返回的所有的项。在下面的例子中，我们将列表中的偶数项筛选了出来：

```python
numbers = [1, 2, 3, 4, 5, 6, 7, 8]
even_numbers = list(filter(lambda x: x % 2 == 0, numbers))
print(even_numbers)
```

或是与 reduce()函数进行运算，reduce()函数会对参数序列中元素进行累积。reduce(function, iterable[, initializer])将一个数据集合（链表，元组等）中的所有数据进行下列操作：用传给 reduce 中的函数 function（有两个参数）先对集合中的第 1、2 个元素进行操作，得到的结果再与第三个数据用 function 函数运算，最后得到一个结果。

```python
from functools import reduce

numbers = [1, 2, 3, 4, 5]

_# 使用 reduce() 和 lambda 函数计算乘积_
product = reduce(lambda x, y: x * y, numbers)

print(product)
```

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240915003035040-23535175.png)

