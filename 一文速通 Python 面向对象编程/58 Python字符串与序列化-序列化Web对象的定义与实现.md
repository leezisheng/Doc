# 全网最适合入门的面向对象编程教程：58 Python 字符串与序列化-序列化 Web 对象的定义与实现

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240825003614492-408022634.png)

# 摘要：
如果我们要在不同的编程语言之间传递对象，就必须把对象序列化为标准格式，比如XML\YAML\JSON格式这种序列化Web对象。这种序列化Web对象容易与其他程序设计语言交互，可读性强，容易被传递给其它系统或客户端。

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

[**全网最适合入门的面向对象编程教程：49 Python函数方法与接口-函数与方法的区别和lamda匿名函数**](https://mp.weixin.qq.com/s/qDQo9KxfGrTj5-FDo-MBiA)

[**全网最适合入门的面向对象编程教程：50 Python函数方法与接口-接口和抽象基类**](https://mp.weixin.qq.com/s/DwKug8eHOYyC2pE77eLw9w)

[**全网最适合入门的面向对象编程教程：51 Python函数方法与接口-使用Zope实现接口**](https://mp.weixin.qq.com/s/pDQWfDDh3WeCgjC5b5rP1Q)

[**全网最适合入门的面向对象编程教程：52 Python函数方法与接口-Protocol协议与接口**](https://mp.weixin.qq.com/s/Wgqc8PbpMMf8pKFHo4H7PA)

[**全网最适合入门的面向对象编程教程：53 Python字符串与序列化-字符串与字符编码**](https://mp.weixin.qq.com/s/jvOLalgkUpxR7LGgQnJ9aQ)

[**全网最适合入门的面向对象编程教程：54 Python字符串与序列化-字符串格式化与format方法**](https://mp.weixin.qq.com/s/z3JS3dcpPQTD9ygWyxRUDg)

[**全网最适合入门的面向对象编程教程：55 Python字符串与序列化-字节序列类型和可变字节字符串**](https://mp.weixin.qq.com/s/C0rgRhmC1ydh2PpEwAuMlw)

[**全网最适合入门的面向对象编程教程：56 Python字符串与序列化-正则表达式和re模块应用**](https://mp.weixin.qq.com/s/UmXPSAbrLvYyH-45kBHLZQ)

[**全网最适合入门的面向对象编程教程：57 Python字符串与序列化-序列化与反序列化**](https://mp.weixin.qq.com/s/-Y8DX8wo1OAhKkWK7dikzg)

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

## 序列化 Web 对象

如果我们要在不同的编程语言之间传递对象，就必须把对象序列化为标准格式，比如 XML\YAML\JSON 格式这种序列化 Web 对象。这种序列化 Web 对象容易与其他程序设计语言交互，可读性强，容易被传递给其它系统或客户端。

在 Python 最常用的序列化 Web 对象就是环境配置的 yaml 文件，anaconda 可以管理不同的环境配置，当我们想将自己的环境配置分享给其他人时，就可以生成 yaml 文件，这样别人可以快速导入 yaml 文件构建和我们一样的环境来运行代码。

我们可以在命令行中使用如下指令生成 yaml 文件：

```python
conda env export > environment.yml
```

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241107002736535-897526908.png)


## 使用 JSON 实现序列化 Web 对象

JavaScript Object Notation（JSON）是一种人类可读的格式，用于存储基础数据类型。JSON 是一种标准格式，可以被各式各样的客户端系统解析。因此，JSON 非常适合用于在完全不同的系统之间进行数据传输。而且，JSON 不支持任何可执行代码，只有数据可以被序列化；因此，更难向其中植入恶意代码。JSON 格式因其易于被 JavaScript 引擎解析的特性，常被用于 Web 服务器与具备 JavaScript 功能的浏览器间的数据传输。若 Web 应用的服务器端采用 Python 编写，为确保数据的兼容性与通用性，需将内部数据转换为 JSON 格式。

我们可以使用 Python 中的 json 模块生成 JSON 文件，该模块与 pickle 类似，也提供了 dumps()、dump()、loads()、load()四个函数，但输出结果是 JSON 格式的。此外，**json 函数作用于 str 对象，而不是 bytes。因此，当输出或载入时，我们需要创建文本模式的文件而不是二进制模式。**JSON 只能序列化基本类型，如整数、浮点数和字符串，以及简单的容器，如字典和列表。这些都直接映射到 JSON 形式，不过** JSON 不能表示类、方法或函数。不能用这种格式来传输完整的对象。因为接收者通常不是 Python 对象，接收者不能与 Python 以同样的方式来理解类或方法。**

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241107002743602-1494531887.png)


![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241107002747514-419103422.png)


![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241107002751707-1118624918.png)


![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241107002755864-896577488.png)


```python
import json

_# 人员信息列表_
humaninfodic={
    'age'   : 18,
    'name'  : True,
    'gender': 10,
    'email' : 11.1,
}

_# 序列化到文件中_
with open('test.json', 'w') as fp:
    json.dump(humaninfodic, fp, indent=4)

_# 反序列化文件中的内容_
with open('test.json', 'r') as fp:
    dic = json.load(fp)
    print(dic)
```

运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241107002803217-27626821.png)

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241107002807318-1526307376.png)


这里，需要注意的是，Python 中字典的非字符的值 Key 被转换成 JSON 字符串时都会被转换为小写字符串，例如 True 会被映射为 true，False 被映射为 false，而 None 会被映射为 null；同时 Python 中的元组在序列化时会被转换为 array 类型，但是反序列化时，array 类型会被转化为 Python 中的列表类型。

JSON 和 Python 内置的数据类型对应如下：

| **JSON 类型** | **Python 类型** |
| ------------- | --------------- |
| {}            | dict            |
| []            | list            |
| "string"      | str             |
| 1234.56       | int 或 float    |
| true/false    | True/False      |
| null          | None            |

如果想要序列化的对象只有数据，我们可以直接序列化对象的__dict__属性。或者我们也可以针对特定的对象，通过自定义代码来创建或解析 JSON 序列化字典。

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241107002812778-1861169955.png)


![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241107002816728-625158560.png)


**在 json 模块中，对象的存储和载入功能均设有一个可选参数，用以执行特定的自定义操作。具体来说，****dump****和****dumps****方法接受一个名为****cls****（即“class”的简写，因其为 Python 的保留关键字）的关键字参数。**当传递此参数时，它必须是 `JSONEncoder` 的一个子类，并且要求重写了 `default` 方法。**这个方法的设计初衷是接收任意类型的对象作为参数，然后将其转换为 json 能够处理的字典类型。**如果在处理过程中遇到不知道如何处理的对象类型，可以通过调用 `super()` 方法，使得该对象能够按照正常的方式进行序列化处理，即按照基本类型进行序列化。

**同样地，****load****和****loads****方法也接受一个名为****cls****的参数，它是****JSONDecoder****的一个子类。通常情况下，通过****object_hook****关键字传递一个函数便足够了。**这个函数的任务是接收一个字典作为参数，并返回一个对象。如果在处理过程中遇到不知道如何处理的字典，可以选择不进行任何修改，直接将其返回。这种设计使得用户在进行 json 数据的解析时，能够更加灵活和方便地处理各种复杂的数据类型。

```python
import json

_# 定义联系人类_
class Contact:
    def __init__(self, first, last):
        _# 属性1，first name是名字_
        self.first = first
        _# 属性2，last name是姓氏_
        self.last = last
    @property
    def full_name(self):
        return("{} {}".format(self.first, self.last))

_# 自定义序列化编码器类_
class ContactEncoder(json.JSONEncoder):
    _# default 方法检查了我们想要序列化的对象类型_
    def default(self, obj):
        _# 如果是联系人类，我们手动将其转换为字典_
        if isinstance(obj, Contact):
            return {
                    _# 传递了一个额外的属性来说明这是一个联系人对象_
                    _# 因为没有其他办法可以在载入之后知道它的类型_
                    'is_contact': True,
                    'first': obj.first,
                    'last': obj.last,
                    'full': obj.full_name}
        _# 否则，让其父类来处理序列化（假设它是基本类型，json 知道如何处理）_
        return super().default(obj)

_# 定义一个JSON文件解码器函数_
def decode_contact(dic):
    _# 写一个函数接受字典为参数_
    _# 检查是否包含 is_contact 变量来决定是否将其转换为联系人_
    if dic.get('is_contact'):
        return Contact(dic['first'], dic['last'])
    else:
        return dic

if __name__ == '__main__':
    c = Contact("John", "Smith")
    data = json.dumps(c, cls=ContactEncoder)
    print(data)
    c = json.loads(data, object_hook=decode_contact)
    print(c.full_name)
```

运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241107002829209-1214708895.png)


## 使用 XML 实现序列化 Web 对象

在当今的软件开发领域，**XML 作为一种灵活且强大的标记语言，已经广泛应用于数据存储、配置管理、网络传输等多个场景。**它的可扩展性和自描述性让它成为了不同系统和平台之间数据交换的理想格式。

**XML 指可扩展标记语言（eXtensible Markup Language），是一套定义语义标记的规则**，这些标记将文档分成许多部件并对这些部件加以标识，**它被设计用来传输和存储数据，不用于表现和展示数据。**它也是**元标记语言，即定义了用于定义其他与特定领域有关的、语义的、结构化的标记语言的句法语言。**

如下我们列举了一个 xml 文件的例子：

```python
<?xml version="1.0" encoding="utf-8"?>
<catalog>
    <maxid>4</maxid>
    <login username="pytest" passwd='123456'>
        <caption>Python</caption>
        <item id="4">
            <caption>测试</caption>
        </item>
    </login>
    <item id="2">
        <caption>Zope</caption>
    </item>
</catalog>
```

以上 XML 格式的文件中，包含了一个名为"catalog"的根元素。根元素下有一个名为"maxid"的子元素，其值为"4"。接着是一个名为"login"的子元素，它包含两个子元素：一个名为"caption"的子元素，其值为"Python";另一个名为"item"的子元素，其 id 属性值为"4",包含一个名为"caption"的子元素，其值为"测试"。最后还有一个名为"item"的子元素，其 id 属性值为"2",包含一个名为"caption"的子元素，其值为"Zope"。

其中书名号圈住的部分“<tag>”为标签，标签必须成对出现，有开始标签就需要有结束标签，例如”<name>“为开始标签，“</name>”为结束标签。

一个基本的 XML 文档结构包括以下部分：

| **结构部分** | **作用**                                                                                    |
| ------------ | ------------------------------------------------------------------------------------------- |
| **声明部分** | 位于文档的最开始，声明 XML 的版本和编码方式。例如：<?xml version="1.0" encoding="UTF-8"?>。 |
| **根元素**   | 每个 XML 文档都有一个根元素，它包含了所有其他元素。                                         |
| **子元素**   | 根元素内部可以包含多个子元素，子元素可以嵌套并形成树状结构。                                |
| **属性**     | 元素可以有属性，属性提供了关于元素的额外信息。                                              |
| **文本内容** | 元素可以包含文本内容。                                                                      |

Python 作为一门简洁而强大的编程语言，提供了丰富的库来处理 XML 数据，使得从解析到修改再到创建 XML 文档变得既简单又高效。Python 有三种方法解析 XML、SAX、DOM，以及 ElementTree。

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241107002852999-898034751.png)


其中，xml.etree.ElementTree（简称 ET）提供了一个轻量级的 Pythonic 方式来处理 XML 数据。ET 允许用户轻松地读取、修改和创建 XML 文件。由于是标准库的一部分，因此不需要额外安装即可使用，这使得它成为处理 XML 数据的一个便捷选择。

对于 ElementTree 库来说，常见使用操作包括解析 XML 文档，获取根元素、遍历子元素、读取元素的标签、文本和属性，以及如何根据需要获取或删除特定元素，以及保存修改后的 XML 文档。

这里，对于 XML 文件仅作为了解使用，并不展开进行讲解。

## 使用 YAML 实现序列化 Web 对象

**XML 文件虽然功能强大，但由于其标记语言的特性，通常不太易于阅读。相反，XML 在需要对验证、架构和名称空间进行精细控制的复杂项目中表现出色。**与 XML 相比，YAML 则专注于数据格式化，以可读代码的形式呈现，其内联风格与 JSON 颇为相似。YAML 旨在提供更为直观和易读的数据表示方式，以满足不同场景下的需求。

YAML，作为一种高度人性化的数据序列化语言，能够与当前主流的编程语言无缝集成。其名称“YAML”来源于“YAML Ain't a Markup Language”（YAML 不是一种标记语言）的递归缩写，这一命名既体现了其独特性，又突显了其与众不同的设计理念。

**YAML 的语法结构与其他高级语言相似，能够轻松表达清单、散列表以及标量等多种数据形态。它巧妙地利用空白符号进行缩进，并大量依赖外观特征来展示数据结构的层次关系。**这种设计使得 YAML 特别适合用于编辑数据结构、编写各种配置文件、打印调试信息以及呈现文件大纲等场景。

**此外，YAML 配置文件通常以“.yml”作为文件后缀，这一命名约定有助于用户快速识别和管理 YAML 文件。**

它的基本语法规则如下：

（1）大小写敏感；

（2）使用缩进表示层级关系；

（3）缩进时不允许使用 Tab 键，只允许使用空格。

（4）缩进的空格数目不重要，只要相同层级的元素左侧对齐即可

YAML 支持的数据结构有三种：

（1）对象：键值对的集合，又称为映射（mapping）/ 哈希（hashes） / 字典（dictionary）；

（2）数组：一组按次序排列的值，又称为序列（sequence） / 列表（list）；

（3）纯量（scalars）：单个的、不可再分的值。

在 Python 中，有多个库可用于解析和生成 YAML 数据，其中最常用的是 PyYAML。

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241107002903941-1216474705.png)


这里，我们以下列名为 config.yaml 的 YAML 配置文件为例，简单讲解一下 YAML 文件语法：

```python
_# 配置文件示例_
  
_# 服务器配置_
server:  
  host: localhost  
  port: 8080  

_# 数据库配置_
database:  
  type: MySQL  
  host: 127.0.0.1  
  port: 3306  
  username: root  
  password: password  

_# 日志记录_
logging:  
  level: info  
  file: app.log

_# 应用配置_
app:
  debug: true
  log_level: info
```

这里，该文件使用井号(#)表示注释，使用缩进表示层级关系，并且使用冒号(:)分隔键和值。

这个 YAML 文件包含以下几个部分：

（1）服务器配置：包括主机名和端口号；

（2）数据库配置：包括数据库类型、主机名、端口号、用户名和密码；

（3）日志记录：包括日志级别和日志文件路径；

（4）应用配置：包括是否开启调试模式和日志级别。

**XML 和 YAML 文件都有一些复杂的特征，如果被恶意利用，就可以允许在主机上执行任意命令。**这与 JSON 文件不同，JSON 不支持任何可执行代码，只有数据可以被序列化。

![image](https://img2024.cnblogs.com/blog/2591203/202410/2591203-20241012235549076-1523231443.png)
