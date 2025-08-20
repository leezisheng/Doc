# 一文速通 Python 并行计算：07 Python 多线程编程-线程池的使用和多线程的性能评估

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250416003327388-1352068275.png)


# **摘要：**

本文介绍了 Python 线程池(ThreadPoolExecutor)的使用方法，包括线程池的基本概念、Future 对象、任务提交方式(map/submit)、结果获取技巧，以及多线程性能评估工具 VizTracer 的使用。

![image](https://img2024.cnblogs.com/blog/2591203/202503/2591203-20250321010016257-450656136.png)

> **关于我们更多介绍可以查看云文档：**[Freak 嵌入式工作室云文档](https://f1829ryac0m.feishu.cn/docx/SGvHdRW1eoxgGIxwIjacX7SVnVb?from=from_copylink)**，或者访问我们的 wiki：****[https://github.com/leezisheng/Doc/wik](https://github.com/leezisheng/Doc/wik)**

# **原文链接：**

[**FreakStudio的博客**](https://www.cnblogs.com/FreakEmbedded)

# **往期推荐：**

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

[**全网最适合入门的面向对象编程教程：59 Python并行与并发-并行与并发和线程与进程**](https://mp.weixin.qq.com/s/cgs1FP0bRMvqXv00J1AzkA)

[**一文速通Python并行计算：00 并行计算的基本概念**](https://mp.weixin.qq.com/s/plVWoeJY-W4Yhm25jrt9yw)

[**一文速通Python并行计算：01 Python多线程编程-基本概念、切换流程、GIL锁机制和生产者与消费者模型**](https://mp.weixin.qq.com/s/SJx4UHy_Ql0gnz_PklWaRg)

[**一文速通Python并行计算：02 Python多线程编程-threading模块、线程的创建和查询与守护线程**](https://mp.weixin.qq.com/s/wc3Vu_Ymzuq4cJFz5g5L0A)

[**一文速通Python并行计算：03 Python多线程编程-多线程同步（上）—基于互斥锁、递归锁和信号量**](https://mp.weixin.qq.com/s/LBNCaDv-PhNEkpT_hTqtGA)

[**一文速通Python并行计算：04 Python多线程编程-多线程同步（下）—基于条件变量、事件和屏障**](https://mp.weixin.qq.com/s/oaMad4LndD8517WdWwCeng)

[**一文速通Python并行计算：05 Python多线程编程-线程的定时运行**](https://mp.weixin.qq.com/s/Dh4-nFCj6fEYzt0DloNVNA)

[**一文速通Python并行计算：06 Python多线程编程-基于队列进行通信**](https://mp.weixin.qq.com/s/vnBkExVk6IPuXP81NxR5HA)


# **更多精彩内容可看：**

[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483747&idx=1&sn=0e203586516fd6e925085b9c1244dbee&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483719&idx=1&sn=7ece9da65d002fdc3df9539cc43f3a8d&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483671&idx=1&sn=c267a0c6f4ab93d6b6d934bf803b5919&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483774&idx=1&sn=46d57506febe92c1719c8567ebe95269&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483854&idx=1&sn=fd666dc501a0de850abfbd8793abff00&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")

[**Avnet ZUBoard 1CG开发板—深度学习新选择**](https://mp.weixin.qq.com/s/2-Z6WqekVOuDbEdiE65Wfw)

[**工程师不要迷信开源代码，还要注重基本功**](https://mp.weixin.qq.com/s/WrFVqS2-s1g6RYNd_Q5CDA)

[**什么？配色个性化的电机驱动模块？！！**](https://mp.weixin.qq.com/s/FUzf9kAHABNfo2aZh1jHzA)

[**什么？XIAO主控新出三款扩展板!**](https://mp.weixin.qq.com/s/TNsGwgi0pdE9v-tY4FZu6w)

[**手把手教你实现Arduino发布第三方库**](https://mp.weixin.qq.com/s/0jIkDXaGKFOn2o03wUmUmQ)

[**万字长文手把手教你实现MicroPython/Python发布第三方库**](https://mp.weixin.qq.com/s/7n7tYqg5GVHvRC9TUi50MA)

[**一文速通电子设计大赛，电子人必看的获奖秘籍**](https://mp.weixin.qq.com/s/nxKpy35t-ueg4KSTCu0_TQ)

[**一文速通光电设计大赛，电子人必看！**](https://mp.weixin.qq.com/s/492GMMgNKbIr1n3G6NX7Xg)

# **文档获取：**

可访问如下链接进行对文档下载：

[https://github.com/leezisheng/Doc](https://github.com/leezisheng/Doc)

该文档是一份关于 **并行计算** 和 **Python 并发编程** 的学习指南，内容涵盖了并行计算的基本概念、Python 多线程编程、多进程编程以及协程编程的核心知识点：

![image](https://img2024.cnblogs.com/blog/2591203/202503/2591203-20250321010038855-257589202.png)

# **正文**

# 1.线程池的基本概念和使用方法

系统启动一个新线程的成本是比较高的，因为它涉及与操作系统的交互。在这种情形下，使用线程池可以很好地提升性能，尤其是当程序中需要创建大量生存期很短暂的线程时，更应该考虑使用线程池。

**线程池在系统启动时即创建大量空闲的线程**，程序只要将一个函数提交给线程池，线程池就会启动一个空闲的线程来执行它。**当该函数执行结束后，该线程并不会死亡，而是再次返回到线程池中变成空闲状态，等待执行下一个函数。**

此外，**使用线程池可以有效地控制系统中并发线程的数量。**当系统中包含有大量的并发线程时，会导致系统性能急剧下降，甚至导致 Python 解释器崩溃，而线程池的最大线程数参数可以控制系统中并发线程的数量不超过此数。

## 1.1 ThreadPoolExecutor 类

线程池的基类是 `concurrent.futures` 模块中的 `Executor`，`Executor` 提供了两个子类，即 `ThreadPoolExecutor` 和 `ProcessPoolExecutor`，其中 `ThreadPoolExecutor` 用于创建线程池，而 `ProcessPoolExecutor` 用于创建进程池。

如果使用线程池来管理并发编程，那么只要将相应的 `task` 函数提交给线程池，剩下的事情就由线程池来搞定。

**Exectuor 提供了如下常用方法：**

- `submit(fn, *args, **kwargs)`：将 `fn` 函数提交给线程池，`*args` 代表传给 fn 函数的参数，`*kwargs` 代表以关键字参数的形式为 `fn` 函数传入参数。
- `map(func, *iterables, timeout=None, chunksize=1)`：该函数类似于全局函数 `map(func, *iterables)`，只是该函数将会启动多个线程，以异步方式立即对 iterables 执行 map 处理。
- `shutdown(wait=True)`：关闭线程池。

## 1.2 Future 对象

程序将 `task` 函数提交（`submit`）给线程池后，`submit` 方法会返回一个 `Future` 对象，**Future 类主要用于获取线程任务函数的返回值。**由于线程任务会在新线程中以异步方式执行，因此，**线程执行的函数相当于一个“将来完成”的任务，所以 Python 使用 Future 来代表。**

`Future` 提供了如下方法：

- `cancel()`：取消该 `Future` 代表的线程任务。如果该任务正在执行，不可取消，则该方法返回 `False`；否则，程序会取消该任务，并返回 `True`。
- `cancelled()`：返回 `Future` 代表的线程任务是否被成功取消。
- `running()`：如果该 `Future` 代表的线程任务正在执行、不可被取消，该方法返回 `True`。
- `done()`：如果该 `Future` 代表的线程任务被成功取消或执行完成，则该方法返回 `True`。
- `result(timeout=None)`：获取该 `Future` 代表的线程任务最后返回的结果。如果 Future 代表的线程任务还未完成，该方法将会阻塞当前线程，其中 `timeout` 参数指定最多阻塞多少秒。
- `exception(timeout=None)`：获取该 `Future` 代表的线程任务所引发的异常。如果该任务成功完成，没有异常，则该方法返回 `None`。
- `add_done_callback(fn)`：为该 `Future` 代表的线程任务注册一个“回调函数”，当该任务成功完成时，程序会自动触发该 `fn` 函数。

在用完一个线程池后，应该调用该线程池的 `shutdown()` 方法，该方法将启动线程池的关闭序列。调用 `shutdown()` 方法后的线程池不再接收新任务，但会将以前所有的已提交任务执行完成。当线程池中的所有任务都执行完成后，该线程池中的所有线程都会死亡。

## 1.3 线程池使用步骤

使用线程池来执行线程任务的步骤如下：

1. 调用 `ThreadPoolExecutor` 类的构造器创建一个线程池；
2. 定义一个普通函数作为线程任务；
3. 调用 `ThreadPoolExecutor` 对象的 `submit()` 方法来提交线程任务；
4. 当不想提交任何任务时，调用 `ThreadPoolExecutor` 对象的 `shutdown()` 方法来关闭线程池。

### 1.3.1 **提交任务到线程池**

在下例中我们定义了任务函数 `task_function`，该函数接受一个任务作为参数，并打印出任务的信息。并创建了一个线程池，用 `submit()` 方法将每个任务提交到线程池中执行。 通过使用线程池，我们可以并发地处理队列中的多个任务，提高程序的执行效率。请注意，线程池的大小默认为系统的 CPU 核心数，但也可以通过传递 `max_workers` 参数来指定线程池的大小。

```
import concurrent.futures

_# 模拟的任务函数_
def task_function(task):
    print(f"Processing task: {task}")

_# 创建线程池_
with concurrent.futures.ThreadPoolExecutor() as executor:
    _# 创建一个任务队列_
    task_queue = ["Task 1", "Task 2", "Task 3", "Task 4", "Task 5"]

    _# 提交任务到线程池_
    for task in task_queue:
        executor.submit(task_function, task)

    _# 等待所有任务完成_
    executor.shutdown()
```

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250416003525318-2049446540.png)


### 1.3.2 **获取线程执行结果**

下面代码调用了 `Future` 的 `result()` 方法来获取线程任务的返回值：

```
from concurrent.futures import ThreadPoolExecutor
import threading,time

def test(value1, value2=None):
    print("%s threading is printed %s, %s"%(threading.current_thread().name, value1, value2))
    time.sleep(2)
    return 'finished'
def test_result(future):
    print(future.result())

if __name__ == "__main__":
    threadPool = ThreadPoolExecutor(max_workers=4, thread_name_prefix="test_")
    for i in range(0,10):
        future = threadPool.submit(test, i,i+1)
        print(future.result())

    threadPool.shutdown(wait=True)
    print('main finished')
```

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250416003530560-522176355.png)


但该方法会阻塞当前主线程，只有等到子线程任务完成后，`result()` 方法的阻塞才会被解除。如果程序不希望直接调用 `result()` 方法阻塞线程，则可通过 `Future` 的 `add_done_callback()` 方法来添加回调函数，该回调函数形如 `fn(future)`。当线程任务完成后，程序会自动触发该回调函数，并将对应的 `Future` 对象作为参数传给该回调函数。

```
from concurrent.futures import ThreadPoolExecutor
import threading,time

def test(value1, value2=None):
    print("%s threading is printed %s, %s"%(threading.current_thread().name, value1, value2))
    time.sleep(2)
    return 'finished'

def test_result(future):
    future.add_done_callback(test_result)

if __name__ == "__main__":
    threadPool = ThreadPoolExecutor(max_workers=4, thread_name_prefix="test_")
    for i in range(0,10):
        future = threadPool.submit(test, i,i+1)
        print(future.result())

    threadPool.shutdown(wait=True)
    print('main finished')
```

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250416003535730-1577882832.png)


另外，由于线程池实现了上下文管理协议（Context Manage Protocol），因此，程序可以使用 `with` 语句来管理线程池，这样即可避免手动关闭线程池。

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250416003538657-788777100.png)


### 1.3.3 **使用 ThreadPoolExecutor 的 map 方法**

`Exectuor` 还提供了一个 `map(func, *iterables, timeout=None, chunksize=1)` 方法，该方法的功能类似于全局函数 `map()`，区别在于线程池的 `map()` 方法会为 `iterables` 的每个元素启动一个线程，以并发方式来执行 `func` 函数。这种方式相当于启动 `len(iterables)` 个线程，井收集每个线程的执行结果。

以下是一个示例，展示如何使用 `ThreadPoolExecutor` 的 `map` 方法处理队列中的多个任务：

```
import concurrent.futures

_# 模拟的任务函数_
def task_function(task):
    print(f"Processing task: {task}")
    return task.upper()

_# 创建线程池_
with concurrent.futures.ThreadPoolExecutor() as executor:

    _# 创建一个任务队列_
    task_queue = ["Task 1", "Task 2", "Task 3", "Task 4", "Task 5"]

    _# 使用map方法处理任务队列_
    results = executor.map(task_function, task_queue)

    _# 获取任务的执行结果_
    for result in results:
        print(f"Task result: {result}")
```

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250416003543348-2082669567.png)


在上面的示例中，我们定义了一个模拟的任务函数 `task_function`，该函数接受一个任务作为参数，并打印出任务的信息。在任务函数中，我们将任务转换为大写并返回。

然后，我们使用 `ThreadPoolExecutor` 创建了一个线程池。接下来，我们创建了一个任务队列 `task_queue`，其中包含了多个任务。

然后，我们使用 `executor.map()` 方法将任务函数和任务队列作为参数传递给 `map` 方法，`map` 方法会自动将任务分配给线程池中的线程进行并发执行，并返回结果的迭代器 `results`。

最后，我们使用 `for` 循环遍历 `results` 迭代器，获取每个任务的执行结果，并打印出来。

通过使用 `map` 方法，可以更简洁地处理队列中的多个任务，并且可以方便地获取任务的执行结果。请注意，**map****方法会按照任务在任务队列中的顺序返回结果，即使任务的执行顺序可能不同。**

# 2.多线程的性能评估

前文已经介绍过，**GIL 是 CPython 解释器引入的锁，GIL 在解释器层面阻止了真正的并行运行。**解释器在执行任何线程之前，必须等待当前正在运行的线程释放 GIL。事实上，解释器会强迫想要运行的线程必须拿到 GIL 才能访问解释器的任何资源，例如栈或 Python 对象等。这也正是 GIL 的目的——**阻止不同的线程并发访问 Python 对象。**这样 GIL 可以保护解释器的内存，让垃圾回收工作正常。但事实上，这却造成了程序员无法通过并行执行多线程来提高程序的性能。如果我们去掉 CPython 的 GIL，就可以让多线程真正并行执行。GIL 并没有影响多处理器并行的线程，只是限制了一个解释器只能有一个线程在运行。

这里，我们使用 VizTracer 对多线程进行性能评估。

首先进行安装：**pip install viztracer**

这里，我们使用 LIFO 队列的代码进行测试：

**viztracer Multi_Thread.py**

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250416003548714-1772022537.png)


按照提示，输入指令：**vizviewer E:\Python 并行计算学习笔记\Demo\result.json**

打开分析结果页面，可以看到两个线程的函数调用情况和运行时间：

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250416003551858-1645018352.png)


调节光标，我们可以看到更多的细节：

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250416003555222-1483937925.png)


详细使用方法可以进入：<u>[https://viztracer.readthedocs.io/en/latest/index.html](https://viztracer.readthedocs.io/en/latest/index.html)</u>

或观看视频：<u>[https://www.bilibili.com/video/BV1d34y1C78W/](https://www.bilibili.com/video/BV1d34y1C78W/)</u>
