# 全网最适合入门的面向对象编程教程：48 Python 函数方法与接口-位置参数、默认参数、可变参数和关键字参数

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240825003614492-408022634.png)


# 摘要：

在 Python 中，函数可以接受多种不同类型的参数，包括位置参数、默认参数、可变参数和关键字参数等，理解这些参数类型对于编写灵活且可维护的代码非常重要。

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

## 位置参数（Positional Arguments）

位置参数是最常见的参数类型，它们的值由调用函数时的位置决定。函数定义中的参数顺序决定了它们在函数调用时的对应关系。例如：

```python
def greet(name, age):
    print(f"Hello {name}, you are {age} years old.")

greet("Alice", 30)
# 输出: Hello Alice, you are 30 years old.
```

在这个例子中，`name` 和 `age` 是位置参数，`greet` 函数在调用时，`"Alice"` 对应 `name`，`30` 对应 `age`。

## 关键字参数（Keyword Arguments）

关键字参数允许你在调用函数时明确指定参数的名称。它们可以与位置参数混合使用，但关键字参数必须在位置参数之后提供。

```python
def greet(name, age):
    print(f"Hello {name}, you are {age} years old.")

greet(name="David", age=28)
# 输出: Hello David, you are 28 years old.
```

在这个例子中，`name` 和 `age` 被作为关键字参数传递。这样可以提高代码的可读性，并允许你在调用函数时以任意顺序指定参数。

## 默认参数（Default Arguments）

默认参数允许你在函数定义时为参数提供默认值。如果调用函数时没有传递这些参数，则使用默认值。例如：

```python
def greet(name, age=25):
    print(f"Hello {name}, you are {age} years old.")

greet("Bob")
# 输出: Hello Bob, you are 25 years old.

greet("Charlie", 40)
# 输出: Hello Charlie, you are 40 years old.
```

在这个例子中，`age` 参数有一个默认值 `25`。如果调用 `greet` 函数时没有提供 `age` 的值，它将使用这个默认值。

## 可变参数

在 Python 中，除去传统的位置传参、关键字参数和默认传参外，还有可变参数传参和可变关键字传参两种方式，接下来为大家讲解一下。在下面的示例中，我们定义了一个函数可以打印传递到函数中的两个字符串：

```python
def print_str(first, second):
    print(first, second)

print_str("hello", "world")
```

如果传一个参数调用，print_str("hello")，那么一定会抛出异常。如果我们事先不确定需要传递的字符串数量，这时可以利用 Python 可变参数进行实现。可变参数是指可以接受任意数量参数的参数。在 Python 中，可变参数可以通过在参数名前加上一个星号*来定义，这样函数就可以接受任意数量的位置参数。

**可变参数在定义函数时常用 *args 来接受，其中 * 是规定的，args 可用其他名称替换，但一般习惯用 args 来表示。可变参数在传入函数后，被封装成一个 tuple 来进行使用。**所以我们在函数内部，可以通过操作 tuple 的方法来操作参数。示例代码如下：

```python
def print_str(first_str, *args):
    print(type(args))
    print(args)
    print(first_str)
    for n in args:
        print(n)

print_str("hello", "world","i","am","coming")
```

如下为运行结果：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240914010220182-1057343825.png)


如果在函数外已经定义一个 list 或者 tuple，想调用一个可变参数，也可以用 ***+ 变量名**的形式进行调用，（这种用法有点类似 C 语言中的指针），此时在函数调用时，会对传入的元组参数进行一个解包功能，每一个元素自动作为函数的位置参数。示例如下：

```python
def print_str(first_str, *args):
    print(type(args))
    print(args)
    print(first_str)
    for n in args:
        print(n)

l=["world","i","am","coming"]
print_str("hello",*l)
```

运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240914010226321-2070801980.png)


可变参数允许你传入 0 个或任意个参数，这些可变参数在函数调用时自动组装为一个 tuple,而可变关键字参数允许你传入 0 个或任意个含参数名的参数，这些关键字参数在函数内部自动组装为一个 dict。

可变关键字参数使用 kwargs 来标识，它用于扩展函数的功能。比如我们要实现用户注册，有必输项和非必输项，这些非必输项就可以用可变关键字参数来接受。

示例代码如下：

```python
def register(name, email, **kwargs):
    print("name: {}, age: {}, others: {}".format(name, email, kwargs))
    for i in kwargs:
        print(str(i)+":"+kwargs[i])

register("demon", "1@1.com", addr="shanghai",gender="male", birthday="2022-03-31")
```

运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240914010232857-360232712.png)


对于关键字参数，函数的调用者可以传入任意不受限制的关键字参数。至于到底传入了哪些，就需要在函数内部通过 kwargs 检查。如果要限制关键字参数的名字，就可以用命名关键字参数，例如，只接收 addr 和 gender 作为关键字参数。这种方式定义的函数如下：

```python
def register(name, email,*,addr,gender):
    print("name: {}, age: {}, addr: {}, gender: {}".format(name, email, addr,gender))

register("demon", "1@1.com", addr="shanghai",gender="male")
```

和关键字参数**kw 不同，命名关键字参数需要一个特殊分隔符，后面的参数被视为命名关键字参数。命名关键字参数必须传入参数名，这和位置参数不同。 **在定义函数时，参数顺序必须是：必选（位置）参数 -> 默认参数 -> 可变位置参数 -> 可变关键字参数。**

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240914010239609-489976825.png)

