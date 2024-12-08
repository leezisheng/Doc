# 全网最适合入门的面向对象编程教程：44 Python 内置函数与魔法方法-重写内置类型的魔法方法

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240825003614492-408022634.png)

# 摘要：

在 Python 中，内置类型的行为是通过一组特殊的“魔法方法”来实现的，这些魔法方法以双下划线开头和结尾，比如 init 和 str，你可以通过重写这些魔法方法来定制或扩展内置类型的行为。

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

## Python 内置函数与魔法方法

Python 中有许多函数可以针对特定类型的对象执行某些任务或计算结果，这些函数不需要是某些底层类的方法。它们通常是抽象出来的一些常用计算，可以应用于多种类型的类。这些函数统称内置函数，我们往往使用内置函数调用对象的魔法方法，**所谓魔法方法(Magic Method)是 python 内置方法，以两个下划线开头、两个下划线结尾，它不需要主动调用，存在的目的是为了给 python 的解释器进行调用。**常见内置函数有以下这些：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240903011304497-1247534259.png)


最简单的例子就是 len()内置函数，它可以数出某种容器对象中的项目数，例如字典或列表。实际上，列表对象并没有 len 长度属性，你可能不相信，那就让我们查看一下列表 List 的属性值。输入如下代码：

```python
print(list.__dict__)
```

我们来看一下输出：

```python
{'__new__': <built-in method __new__ of type object at 0x00007FF9D4D5B6D0>,
 '__repr__': <slot wrapper '__repr__' of 'list' objects>, '__hash__': None, 
'__getattribute__': <slot wrapper '__getattribute__' of 'list' objects>, 
'__lt__': <slot wrapper '__lt__' of 'list' objects>, '__le__': <slot wrapper 
'__le__' of 'list' objects>, '__eq__': <slot wrapper '__eq__' of 'list' objects>, 
'__ne__': <slot wrapper '__ne__' of 'list' objects>, 
'__gt__': <slot wrapper '__gt__' of 'list' objects>, '__ge__': <slot wrapper '__ge__' of 'list' objects>, '__iter__': <slot wrapper '__iter__' of 'list' objects>, 
'__init__': <slot wrapper '__init__' of 'list' objects>, '__len__': <slot wrapper '__len__' of 'list' objects>,
 '__getitem__': <method '__getitem__' of 'list' objects>, '__setitem__': <slot wrapper '__setitem__' of 'list' objects>,
 '__delitem__': <slot wrapper '__delitem__' of 'list' objects>, '__add__': <slot wrapper '__add__' of 'list' objects>,
 '__mul__': <slot wrapper '__mul__' of 'list' objects>, '__rmul__': <slot wrapper '__rmul__' of 'list' objects>, 
'__contains__': <slot wrapper '__contains__' of 'list' objects>, '__iadd__': <slot wrapper '__iadd__' of 'list' objects>, '__imul__': <slot wrapper '__imul__' of 'list' objects>,
 '__reversed__': <method '__reversed__' of 'list' objects>, '__sizeof__': <method '__sizeof__' of 'list' objects>,
 'clear': <method 'clear' of 'list' objects>, 'copy': <method 'copy' of 'list' objects>, 'append': <method 'append' of 'list' objects>,
 'insert': <method 'insert' of 'list' objects>, 'extend': <method 'extend' of 'list' objects>, 'pop': <method 'pop' of 'list' objects>,
'remove': <method 'remove' of 'list' objects>, 'index': <method 'index' of 'list' objects>, 'count': <method 'count' of 'list' objects>,
 'reverse': <method 'reverse' of 'list' objects>, 'sort': <method 'sort' of 'list' objects>, '__class_getitem__': <method '__class_getitem__' of 'list' objects>, 
'__doc__': 'Built-in mutable sequence.\n\nIf no argument is given, the constructor creates a new empty list.\nThe argument m
```

我丢，还真没有，这是怎么回事？**那为什么我们用 len()函数居然能得到列表的长度？从理论上来说，列表是有长度属性的。**len()应用到的大部分对象都有一个被称为 len()的方法，其返回同样的值。因此 len(list)就是调用 list.__len__()**（len()为内置函数、len 为魔法方法）** 。

那么为什么不用__len__方法而要用 len()函数？

很明显 len 是一个特殊的双下画线方法，这意味着我们不应该直接调用它，**主要的原因是效率，利用内置函数调用魔法方法不仅提供额外的服务，而且解释器做了优化，会比调用方法更快。**通过调用 len()函数，我们可以直接访问 Python 可变长度容器的底层 C 语言中 PyVarObject 结构体的 ob_size 字段，该字段保存着容器中的项数。 len(my_object)直接读取 ob_size 字段的值，这比调用 len 方法快很多。

**另一个原因是可维护性。**Python 开发者可能会在未来修改 len()来计算没有 len 方法的对象的长度，例如，通过计数迭代器返回的项目。那么他们只需要修改一个函数而不是所有的 len 方法。

除了__len__的例子外，最常见的例子就是要拿到一个列表的某个元素，可以使用对应的引索进行取值，比如 list[key]，这背后利用的是__getitem__方法，为了拿到 my_list[key]的值，解释器实际上会调用 my_list.__getitem__(key)。

那么如何得到 Python 内置数据类型的这些特殊方法呢？非常简单，只需要应用 dir([object])函数即可，dir()函数可以返回对象的属性、方法列表。以 List 列表类为例，我们只需要输入以下语句即可：

```python
print(dir(list))
```

输出如下：

```python
['__add__', '__class__', '__class_getitem__', '__contains__', '__delattr__', 
'__delitem__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', 
'__getattribute__', '__getitem__', '__getstate__', '__gt__', '__hash__', 
'__iadd__', '__imul__', '__init__', '__init_subclass__', '__iter__', '__le__', 
'__len__', '__lt__', '__mul__', '__ne__', '__new__', '__reduce__', 
'__reduce_ex__', '__repr__', '__reversed__', '__rmul__', '__setattr__', 
'__setitem__', '__sizeof__', '__str__', '__subclasshook__', 'append', 'clear', 
'copy', 'count', 'extend', 'index', 'insert', 'pop', 'remove', 'reverse', 'sort']
```

此外，如果想要知道如何使用这些方法，可以用 help 函数：

```python
print(help(list.__le__))
```

输出如下：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240903011327633-7128051.png)


实际上，python 中常见的魔法方法大致可分为以下几类：构造与初始化、类的表示、操作符、访问控制、容器类操作、可调用对象、序列化操作等。我们在下图中对常用魔法方法进行了总结：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240903011335978-667829915.png)


![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240903011339832-378408431.png)


![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240903011345168-192153806.png)


![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240903011351035-45136708.png)


![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240903011356218-1066226080.png)


![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240903011401998-1664758399.png)


![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240903011407757-363916884.png)


![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240903011412285-1576363285.png)


![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240903011417359-414814916.png)


## 重写内置类型的魔法方法

**重写是子类对父类的允许访问的方法的实现过程进行重新编写, 返回值和形参都不能改变。**重写的好处在于子类可以根据需要，定义特定于自己的行为。

这里以魔法方法中的__repr__方法和__ str__方法讲解如何重写内置类型的魔法方法。

所谓 repr 是 Python 类中的一个特殊方法，由 object 对象提供，由于所有类都是 object 类的子类，所以都会继承该方。它是一个”自我描述“的方法，此方法通常实现这样的功能：当直接打印类的实例化对象时，系统将会输出对象的自我描述信息，用来告诉外界对象具有的状态信息。通常情况下，直接输出某个实例化对象，本意往往是想了解该对象的基本信息，例如该对象有哪些属性，它们的值各是多少等等。**但是由于 object 提供的这个 repr 方法总是返回一个对象，（类名 + obejct at + 内存地址），这个值并不能真正实现自我描述的功能。因此，如果你想在自定义类中实现“自我描述” 的功能，那么必须重写 repr 方法。**

**与 repr 类似的是__ str__方法，repr 和 str 这两个方法都是用于显示的，str 是面向用户的，而 repr 面向程序员:**

- 打印操作会首先尝试 str 和 str 内置函数(print 运行的内部等价形式)，它通常应该返回一个友好的显示；
- repr 用于所有其他的环境中：用于交互模式下提示回应以及 repr 函数，如果没有使用 str，会使用 print 和 str。它通常应该返回一个编码字符串，可以用来重新创建对象，或者给开发者详细的显示。

同时，我们也可以对算数操作符进行重写，在上述列表实现集合的例子中，如下代码就是对算数操作符进行重写：

```python
_# 运算符&重载，求交集_
    def __and__(self, other):
        return self.intersect(other)
    _# 运算符|重载，求合集_
    def __or__(self, other):
        return self.union(other)
    _# 当直接打印类的实例化对象时，系统将会输出对象的自我描述信息_
    def __repr__(self):
        return 'Set:' + repr(self.data)
```

再列举一个有趣的例子，对算数操作符方法重写进行说明，以下代码创建一个特殊的整数，每当将两个这种整数相加时都会返回 0：

```python
class SillyInt(int):
    _# 重写__add__方法_
    def __add__(self, num):
        return 0
    
a = SillyInt(1)
b = SillyInt(2)

print(a+b)
```

如下为运行结果，尽管这个例子没有什么实际应用的例子，但还是能很好的讲述如何对算数操作符方法进行重写：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240903011441098-833865224.png)


重写后的__add__方法可以添加到任何我们自己写的类中，如果我对这个类的实例使用 + 操作符，将会调用__add__。例如，字符串、元组以及列表的连接就是这么实现的。所有的特殊方法都是这样的。如果想要对自定义的对象使用 x in myobj 语法，可以实现__contains__方法。如果想要用 myobj[i] = value 语法，只需要提供__setitem__方法。如果想用 something = myobj[i]，需要实现__getitem__。

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240903011450500-1292306989.png)

