# 全网最适合入门的面向对象编程教程：59 Python 并行与并发-并行与并发和线程与进程

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240825003614492-408022634.png)


# 摘要：

在 Python 中，"并行"（parallelism）与"并发"（concurrency）通常用于描述程序的执行方式，而"线程"（thread）与"进程"（process）是实现并行和并发的两种常见方式；线程是进程中的最小执行单元，多个线程可以共享同一进程的内存空间；进程是计算机中正在执行的程序的实例，每个进程都有独立的内存空间和资源。

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

[**全网最适合入门的面向对象编程教程：58 Python字符串与序列化-序列化Web对象的定义与实现**](https://mp.weixin.qq.com/s/BFTYNXXtXarbU70RvOs20Q)

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

## 并行与并发的基本概念

在以上的模拟传感器-主机的示例中，我们可以看到我们的程序总是在顺序执行，如我们利用串口助手和主机 MasterClass 类进行配合，主机类发送指令，我们通过串口助手输入模拟数据发送到主机端，但是一直没有涉及 MasterClass 主机类和 SensorClass 传感器类的交互，即 SensorClass 的实例接收 MasterClass 的实例发送命令，进行解析后执行指定操作。**这是由于，我们之前的代码一直用的是单线程顺序执行的方式，同时在 SensorClass 和 MasterClass 的父类 SerialClass 中 ReadSerial 串口读取方法的实现中（dev.readline()方法），使用了阻塞式的方法，在传感器类等待命令或主机类等待数据时必须得等接收到数据后才能执行下一步操作。**

如果要求 MasterClass 主机类和 SensorClass 传感器类轮流交替工作/同时工作，则需要使用 Python 中多线程/多进程实现多任务的并行/并发。

所谓并发（concurrency）指应用能够交替执行不同的任务，这意味着需要让单个处理器每秒在不同任务之间进行多次切换。而并行（parallel）是指多个处理器或多核处理器同时处理多个不同的任务。二者区别，如下图所示：

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002420162-1945090266.png)


多任务的切换或处理可以由多进程完成，也可以由一个进程内的多线程完成。

进程（process）是资源分配的最小单位，一个程序至少有一个进程，进程都有自己独立的地址空间，内存，数据栈等，所以进程占用资源多。由于进程的资源独立，所以通讯不方便，只能使用进程间通讯（IPC）。

线程（thread）是程序执行的最小单位，一个进程至少有一个线程。线程共享进程中的数据，他们使用相同的地址空间，使用线程创建快捷，创建开销比进程小。同一进程下的线程共享全局变量、静态变量等数据，所以线程通讯非常方便，但会存在数据同步与互斥的问题，如何处理好同步与互斥是编写多线程程序的难点。

二者关系如下图所示：

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002426840-575130588.png)


在讲解多线程和多进程之前，让我们先回顾一下之前已经实现的一些类和相互关系：

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002433053-1918668292.png)


![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002443142-978496131.png)


![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002453909-333040564.png)


其中，DateProcess 数据处理类尚未与主机类发生联系，这个我们在接下来的代码中会进行实现。

## 多线程

多线程的运行机制类似于同时启动并执行多个不同的程序。与进程不同，每个独立的进程都拥有一个程序的入口点、一个明确的执行序列和一个出口点。然而，线程则无法独立执行，它们必须依赖于一个应用程序来提供执行控制。

每个线程都拥有一组自己的 CPU 寄存器，这组寄存器被称为线程的上下文。上下文反映了线程在上次执行时 CPU 寄存器的状态。在线程的上下文中，指令指针和堆栈指针寄存器尤为关键。线程总是在进程的上下文中运行，这些地址用于标识拥有线程的进程地址空间中的内存位置。通过此种方式，线程能够协同工作，实现更高效的任务处理。

我们使用多线程前需要导入 Python 中的 threading 模块：

```python
from threading import Thread
```

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002508836-1270633153.png)


### 多线程的创建和运行

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002518770-55959080.png)


![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002523844-1674797514.png)


Python 中使用线程有两种方式，函数或者用类来包装线程对象：

- 函数方法：调用 thread 模块中的 Thread 函数来创建一个线程实例。

语法如下:

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002533411-20924641.png)


- 用类来包装线程对象：使用 Threading 模块创建线程，直接从 threading.Thread 继承，然后重写 init 方法和 run 方法。

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002539539-688281779.png)


![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002544393-417347240.png)


![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002550153-402591516.png)


这里，我们对 SensorClass 传感器类实现多线程运行，首先使其继承于 Thread 类，在 SensorClass 的初始化方法中调用 Thread 的初始化方法，同时新建一个 run()方法，在 run()方法中先完成传感器的初始化和开启，再创建一个 while 循环，每次循环都会生成一个新的数据值（模拟采集的传感器数据），并根据接收到的命令执行相应的操作。示例代码如下：

```python
class SensorClass(SerialClass,Thread):
    '''
        传感器类，继承自SerialClass\Thread
    '''

    ... ...

    _# 类的初始化_
    def __init__(self,port:str = "COM11",id:int = 0,state:int = WORK_MODE["RESPOND_MODE"]):
        try:
            _# 判断输入端口号是否为str类型_
            if type(port) is not str:
                raise TypeError("InvalidPortError:",port)
            _# 判断ID号是否在0~99之间_
            if id < 0 or id > 99:
                _# 触发异常后，后面的代码就不会再执行_
                _# 当传递给函数或方法的参数类型不正确或者参数的值不合法时，会引发此异常。_
                raise InvalidIDError("InvalidIDError:",id)

            _# 调用父类的初始化方法，super() 函数将父类和子类连接_
            super().__init__(port)
            self.sensorvalue = 0
            self.sensorid    = id
            self.sensorstate = state
            print("Sensor Init")
            logging.info("Sensor Init")
            _# Thread的初始化方法_
            Thread.__init__(self)
        except TypeError:
            _# 当发生异常时，输出如下语句，提醒用户重新输入端口号_
            print("Input error com, Please try new com number")
        except InvalidIDError as e:
            _# 当发生异常时，输出如下语句，提醒用户重新输入ID号_
            print("Input error ID, Please try id : 0~99")
            print(e.args)

    ... ...

    _# 多线程中用以表示线程活动的方法_
    _# run 方法中的所有代码（或者在这一方法内部调用的代码）都在一个单独的线程中运行。_
    def run(self):
        _# 声明全局变量，互斥锁_
        global lock

        _# 初始化计数变量_
        data_count = 0
        _# 初始化传感器_
        self.InitSensor()
        _# 开启传感器_
        self.StartSensor()

        while True:
            _# 生成数据_
            data_count  = data_count + 1
            _# 原始信号_
            signal      = math.sin(data_count) * 10
            _# 模拟噪声_
            noise       = random.uniform(0, 5)
            _# 最终数据_
            data        = int(signal + noise)

            _# 获取互斥锁_
            lock.acquire()

            _# 接收命令_
            cmd = self.RecvMasterCMD()

            _# 根据命令进行相关操作_
            if cmd == SensorClass.STOP_CMD:
                _# 如果接收到停止命令，停止传感器_
                self.StopSensor()
                _# 输出提示信息_
                print("Sensor stop work !!!")
                return
            elif cmd == SensorClass.SENDID_CMD:
                _# 如果接收到发送ID命令，发送传感器ID号_
                self.SendSensorID()
            elif cmd == SensorClass.SENDVALUE_CMD:
                _# 如果接收到发送数据命令，发送数据_
                self.SendSensorValue(data)
            elif cmd == SensorClass.NONE_CMD:
                _# 如果没有接收到指令_
                print("Not Recv cmd!!!")

            _# 释放互斥锁_
            lock.release()
            _# 延时0.5s_
            time.sleep(0.5)
```

同时，这里我们需要修改 SensorClass 的父类 SerialClass 中的属性，使其不会一直阻塞在数据接收的过程中：

```python
_# 设置timeout超时时间_
self.dev.timeout     = 0.5
```

在主程序中，创建了一个互斥锁和一个 SensorClass 对象，并在主线程中开启了一个新的线程来执行 SensorClass 对象的 run()方法。在主线程中，程序会不断检查新线程是否已经退出了 run()方法，如果没有退出，则获取互斥锁并打印一条信息，然后释放互斥锁并延时 0.5 秒。当新线程退出了 run()方法后，主线程会输出一条调试信息表示多线程运行结束。

示例代码如下：

```python
if __name__ == "__main__":
    # 创建一个互斥锁
    lock = Lock()
    # 初始化线程
    s_thread = SensorClass(port = "COM11",id = 0,state = SensorClass.WORK_MODE["RESPOND_MODE"])
    # 开启线程，start方法以并发方式执行
    s_thread.start()
    # run()方法只是类的一个普通方法，还是在主线程里执行
    # s_thread.run()
    # join方法确保thread子线程执行完毕后才能执行下一个线程
    # timeout表示超时时间，在线程达到超时时间后结束线程
    # s_thread.join(timeout=5)

    # 检查s_thread线程是否已经退出了run方法
    while s_thread.is_alive():
        # 获取互斥锁
        lock.acquire()
        # 打印信息
        print("Multi threaded work，This is the main thread for creating and running")
        # 释放互斥锁
        lock.release()
        # 延时0.5s
        time.sleep(0.5)

    # 多线程结束，输出调试信息
    print("End of multi-threaded running")
```

接下来我们看一下运行结果：

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002610961-605871865.png)


可以看到，每个程序都有一个线程，称为主线程。从头开始执行的代码就在这个线程中，s_thread 是主线程中创建的子线程，新的线程直到我们调用线程的 start()方法时才会开始运行。我们也可以使用 join 方法，确保 thread 子线程执行完毕后才能执行下一个线程。

### 线程同步

在多线程环境中，当多个线程同时对某一数据进行修改时，可能会产生难以预测的结果。考虑一个场景，有一个列表，其中的所有元素都初始化为 0。线程"set"负责从后向前遍历列表，将其中的每个元素都修改为 1，而线程"print"则负责从前往后遍历列表并打印其内容。如果在这两个线程的执行过程中，线程"set"在修改列表的过程中被线程"print"打断，那么打印出的结果可能是列表中的元素一部分为 0，另一部分为 1，这就是所谓的数据不一致问题。

为了解决这个问题，我们引入了锁的概念。锁有两种状态：锁定和未锁定。当一个线程，如"set"，需要访问共享数据时，它必须首先尝试获取锁。如果锁已经被其他线程，如"print"，获取，那么线程"set"将被阻塞，直到线程"print"释放锁为止。这样，确保了每次只有一个线程能够访问共享数据。经过这样的处理，当打印列表时，要么全部输出 0，要么全部输出 1，从而避免了出现数据不一致的尴尬情况。

Python 的 Thread 对象提供了 Lock 和 Rlock 两种锁机制来实现线程同步。这两种对象都提供了 acquire 和 release 方法。对于需要确保每次只被一个线程访问的数据或共享资源，例如打印信息到控制台的操作，我们可以将其放置在 acquire 和 release 方法之间。这样，我们就可以确保在多线程环境下，数据的一致性和完整性得到保护。

在示例代码中，我们创建并传递给了线程一个互斥锁，保证两个线程可以安全地调用 Printf 函数输出相关信息。

```python
# 获取互斥锁
lock.acquire()
# 打印信息
print("Multi threaded work，This is the main thread for creating and running")
# 释放互斥锁
lock.release()
```

除了互斥锁、递归锁外，线程也具有其他地应用于线程同步的方法，如信号量、事件、栏杆等，这里并不做过多讲解。

实际上，为了有效地管理内存、进行垃圾回收以及在库中调用机器码，Python 拥有一个名为全局解释器锁（GIL）的工具。它是无法被关闭的，也就是说，在 Python 中的多线程是假的多线程，Python 解释器虽然可以开启多个线程，但在同一时间只有一个线程在解释器中运行。GIL 问题存在于大部分人使用的 Python 实现版本（如 CPython），在一些非标准实现的版本中已经解决了这一问题，例如 IronPython 和 Jython。

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002620866-334044945.png)


### 线程间的通信

除了使用互斥锁、递归锁等线程同步方法保证共享内存不会被两个线程同时访问以外，我们也可以使用 Queue 模块保证两个线程中需要交互的数据被安全访问，Queue 模块中提供了同步的、线程安全的队列类，包括 FIFO（先入先出)队列 Queue，LIFO（后入先出）队列 LifoQueue，和优先级队列 PriorityQueue。这些队列都实现了锁原语，能够在多线程中直接使用。可以使用队列来实现线程间的同步。

### 线程池

系统启动一个新线程的成本相对较高，因为它需要与操作系统进行交互。在这种情况下，采用线程池是一种提升性能的有效方法，尤其是在程序中需要创建大量短暂生命周期的线程时，更应优先考虑使用线程池。线程池在系统启动时即预先创建了大量空闲线程，程序只需将函数提交给线程池，线程池就会启动一个空闲线程来执行该函数。当函数执行完毕后，该线程并不会终止，而是返回线程池继续处于空闲状态，等待执行下一个函数。

此外，线程池还有助于精确控制系统中并发线程的数量。若系统中存在大量并发线程，可能导致系统性能显著下降，甚至引发 Python 解释器崩溃。而线程池通过设定最大线程数参数，能够有效地防止并发线程数量超出系统承受能力，从而确保系统的稳定运行。

从 Python3.2 开始，标准库为我们提供了 concurrent.futures 模块，它提供了 ThreadPoolExecutor (线程池)和 ProcessPoolExecutor (进程池)两个类。

相比 threading 等模块，该模块通过 submit 返回的是一个 future 对象，它是一个未来可期的对象，它们用于“调用并回答”类型的交互，其中处理过程可以发生在另外一个线程中，并且在未来某个节点我们可以向它询问结果。

通过它可以获取某一个线程执行的状态或某一个任务执行的状态及返回值：

① 主线程可以获取某一个线程（或者任务的）的状态，以及返回值。

② 当一个线程完成的时候，主线程能够立即知道。

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002632856-930562530.png)


![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002637201-1029717409.png)


![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002641860-918438757.png)


使用线程池来执行线程任务的步骤如下：

- 调用 ThreadPoolExecutor 类的构造器创建一个线程池；
- 定义一个普通函数作为线程任务；
- 调用 ThreadPoolExecutor 对象的 submit()方法来提交线程任务；
- 调用 ThreadPoolExecutor 对象的 shutdown()方法来关闭线程池。

## 多进程

与多线程相比，多进程具有独立的内存空间，避免了全局解释器锁（GIL）的影响，因此更适合于 CPU 密集型的任务。多进程模块通过调动新的操作系统进程来实现。在 Windows 机器上，这一操作的代价相对来说比较昂贵；在 Linux 上，进程在内核中的实现方式和线程一样，因此其开支受限于每个进程中运行的 Python 解释器。

Python 中的多进程是通过 multiprocessing 包来实现的，和多线程中的 threading.Thread 差不多，它可以利用 multiprocessing.Process 对象来创建一个进程对象。这个进程对象的方法和线程对象的方法差不多也有 start(), run(), join()等方法。Python 中多进程实现类似于上述的多线程实现一样，可以使用通过类继承的方法。

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002648214-1170666510.png)


![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002653621-501980285.png)

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002659547-1525516382.png)




