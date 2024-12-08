# 全网最适合入门的面向对象编程教程：36 Python 的内置数据类型-字典

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240814002034015-1487040414.png)


# 摘要：

字典是非常好用的容器，它可以用来直接将一个对象映射到另一个对象。一个拥有属性的空对象在某种程度上说就是一个字典，属性名映射到属性值。在内部，对象通过字典来表示属性，其值为属性的值或对象的方法。

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

# 更多精彩内容可看：
[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483747&idx=1&sn=0e203586516fd6e925085b9c1244dbee&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483719&idx=1&sn=7ece9da65d002fdc3df9539cc43f3a8d&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483671&idx=1&sn=c267a0c6f4ab93d6b6d934bf803b5919&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483774&idx=1&sn=46d57506febe92c1719c8567ebe95269&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483854&idx=1&sn=fd666dc501a0de850abfbd8793abff00&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")

[**Avnet ZUBoard 1CG开发板—深度学习新选择**](https://mp.weixin.qq.com/s/2-Z6WqekVOuDbEdiE65Wfw)


# **文档和代码获取：**

可访问如下链接进行对文档下载：

[https://github.com/leezisheng/Doc](https://github.com/leezisheng/Doc)

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240711215550373-1274223674.png)


**本文档主要介绍如何使用 Python 进行面向对象编程，需要读者对 Python 语法和单片机开发具有基本了解。相比其他讲解 Python 面向对象编程的博客或书籍而言，本文档更加详细、侧重于嵌入式上位机应用，以上位机和下位机的常见串口数据收发、数据处理、动态图绘制等为应用实例，同时使用 Sourcetrail 代码软件对代码进行可视化阅读便于读者理解。**

**相关示例代码获取链接如下：**[https://github.com/leezisheng/Python-OOP-Demo](https://github.com/leezisheng/Python-OOP-Demo)


# 正文

字典是非常好用的容器，它可以用来直接将一个对象映射到另一个对象。一个拥有属性的空对象在某种程度上说就是一个字典，属性名映射到属性值。实际上，它们的关系比这更接近，在内部，对象通过字典来表示属性，其值为属性的值或对象的方法。甚至连模块的属性也是以字典的形式存储的。在如下代码中，我们访问了 SensorClass 类的实例 s 的__dict__属性和 FileIO 模块的__dict__属性：

```python
s = SensorClass()
    _# 访问SensorClass类的__dict__属性_
    print(SensorClass.__dict__)
    _# 访问SensorClass类的实例s的__dict__属性_
    print(s.__dict__)
    _# 访问FileIO模块的__dict__属性_
    print(FileIO.__dict__)
```

需要注意的是：用类名直接调用 __dict__，会输出该由类中所有类属性组成的字典；而使用类的实例对象调用 __dict__，会输出由类中所有实例属性组成的字典。

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240814002318842-1834228248.png)


与序列是以连续的整数为索引不同的是，**字典以关键字为索引，关键字可以是任意不可变类型，通常用字符串或数值。**从字典中查询一个值是极高效的，因为**某一键对象是直接映射到值上的。**如果你想要通过一个对象找到另一个对象，那你应该用字典。存储的对象被称为值（value），作为索引的对象被称为键（key）。

字典可以用 dict()构造函数或者{}语法来创建。构造字典时我们用冒号分隔键和值，用逗号分隔键/值对。例如，在定义 SensorClass 工作模式时，我们使用如下语句：

```python
class SensorClass(SerialClass):
    _# 类变量：_
    _#   RESPOND_MODE -响应模式-0_
    _#   LOOP_MODE    -循环模式-1_
    RESPOND_MODE,LOOP_MODE = (0,1)
```

若使用字典创建，则如下所示：

```python
class SensorClass(SerialClass):
    _# 类变量：_
    _#   RESPOND_MODE -响应模式-0_
    _#   LOOP_MODE    -循环模式-1_
    _# RESPOND_MODE,LOOP_MODE = (0,1)_
    _# 使用字典创建_
    WORK_MODE = {"RESPOND_MODE":0,"LOOP_MODE":1}
```

可以用方括号来查询字典中某个键所对应的值：

```python
def __init__(self,port:str = "COM11",id:int = 0,state:int = WORK_MODE["RESPOND_MODE"])
```

同时在访问 SensorClass 的__dict__属性时，我们可以看到 WORK_MODE 确实是为字典形式：

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240814002338672-1272869575.png)


理解字典的最佳方式是把它看做无序的键值对集合。在同一个字典之内，关键字必须是互不相同。实际上，字典是对象，尽管它的主要用途是存储其他对象。它们本身也有一些相关行为。最常用的方法之一就是 get 方法，它的第一个参数是键名，另一个可选的参数是当键名不存在时所返回的默认值：

```python
# 访问SensorClass.WORK_MODE中"RESPOND_MODE"键
    print(SensorClass.WORK_MODE.get("RESPOND_MODE"))
    # 访问SensorClass.WORK_MODE中不存在的键，其中键名不存在时返回"NOT FOUND"
    print(SensorClass.WORK_MODE.get("RESET_MODE","NOT FOUND"))
```

下图为运行结果：

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240814002345607-477696842.png)


为了进一步控制，可以用 setdefault 方法。如果键名存在于字典中，这个方法就和 get 一样，返回这个键名所对应的值。反之，如果键名不存在，它不但会返回方法调用中提供的默认值（就像 get 方法一样），还会将键名的值设定为这一默认值：

```python
_# 访问SensorClass.WORK_MODE中"RESPOND_MODE"键_
    print(SensorClass.WORK_MODE.setdefault("RESPOND_MODE"))
    _# 访问SensorClass.WORK_MODE中不存在的键RESET_MODE_
    _# 如果RESET_MODE不存在，设置键值对：RESET_MODE-2_
    print(SensorClass.WORK_MODE.setdefault("RESET_MODE",2))
    _# 访问上一行设置的SensorClass.WORK_MODE中"RESET_MODE"键_
    print(SensorClass.WORK_MODE.get("RESET_MODE"))
```

如下为运行结果：

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240814002351793-473395789.png)


另外 3 个有用的字典方法分别是 keys()、values()和 items()。前两个分别返回字典中所有键名和值所组成的迭代器。如果想要处理这些键或值，可以像列表一样或者用 for 循环语句。itmes()方法可能是最有效的，它返回的是(key, value)元组所组成的迭代器。配合元组解包功能，这个方法可以非常好地用在 for 循环中，来遍历相应的键和值。如下示例代码打印了 SensorClass.WORK_MODE 字典中所有的键和值：

```python
for mode, value in SensorClass.WORK_MODE.items():
        print("{} value is {}".format(mode, value))
```

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240814002357193-1037578256.png)


**需要注意的是，这些键值对并不是按照之前插入的顺序打印出来的。为了提高查询速度而用到的高效算法（哈希算法），使得字典数据结构在本质上是无序的。****能够计算哈希值的对象可以通过特定的算法将这个对象转换成一个唯一的整数，用于快速查找。**这个哈希值用于字典中的快速查值。例如，字符串基于其中包含的字符映射到整数上，而元组通过组合其中的元素来计算哈希值。**任意两个被认为是相同的对象（例如拥有相同字符的字符串或值相同的元组）应该拥有相同的哈希值，而且一个对象的哈希值是永远不会变的。**然而，列表的内容是可变的，因此也会改变其哈希值（两个列表只有在所有内容完全相同时，才是相等的）。**正因如此，列表不能用作字典键。同样，字典也不能用作其他字典的键。**与此不同的是，字典中的值对对象类型没有任何限制。我们可以将字符串键映射到一个列表值，或者可以在字典中嵌套别的字典。

> 哈希值简单地理解成是一段数据（某个文件，或者是字符串）的 DNA，或者身份证，它通过一定的哈希算法(典型的有 MD5，SHA-1 等)，将一段较长的数据映射为较短小的数据，这段小数据就是大数据的哈希值。他有这样一个特点，他是唯一的，一旦大数据发生了变化，哪怕是个微小的变化，他的哈希值也会发生变化。另外一方面，既然是 DNA，那就保证了没有两个数据的哈希值是完全相同的。
> 具体详解可以看：<u>[https://www.zhihu.com/question/21801702](https://www.zhihu.com/question/21801702)</u>

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240814002403168-1899515985.png)

