# 一文速通 Python 并行计算：09 Python 多进程编程-进程之间的数据同步-基于互斥锁、递归锁、信号量、条件变量、事件和屏障

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250416003327388-1352068275.png)

# **摘要：**

多进程同步机制包括互斥锁、递归锁、信号量、条件变量、事件和屏障等：互斥锁用于保护共享资源，递归锁支持同一进程重复加锁，信号量可控制访问资源的数量，条件变量用于进程间等待特定条件，事件用于进程间通信和同步，屏障用于多个进程在特定点同步，确保协同运行。

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

[**一文速通Python并行计算：07 Python多线程编程-线程池的使用和多线程的性能评估**](https://mp.weixin.qq.com/s/8QeUDrREakdMTYsxYuHLdA)


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

[**工科比赛“无脑”操作指南：知识学习硬件选购→代码调试→报告撰写的保姆级路线图**](https://mp.weixin.qq.com/s/9Xxc0lF5aA4rVVcwhdnpHQ)

[**单场会议拍摄收费6000+？拍摄技巧和步骤都在这里**](https://mp.weixin.qq.com/s/R9UI3jLUFhANIxl9y8aIIA)

[**0基础如何冲击大唐杯国奖？学姐的的备赛心得都在这里**](https://mp.weixin.qq.com/s/9IJIHjTH_Dt1D9DMfHRQVw)

# **文档获取：**

可访问如下链接进行对文档下载：

[https://github.com/leezisheng/Doc](https://github.com/leezisheng/Doc)

该文档是一份关于 **并行计算** 和 **Python 并发编程** 的学习指南，内容涵盖了并行计算的基本概念、Python 多线程编程、多进程编程以及协程编程的核心知识点：

![image](https://img2024.cnblogs.com/blog/2591203/202503/2591203-20250321010038855-257589202.png)

# **正文**

进程之间数据除了共享内存、共享进程外不共享,但是共享同一套文件系统,所以访问同一个文件,或同一个打印终端,是没有问题的,而共享带来的是竞争，竞争带来的结果就是错乱，如何控制，需要进程之间进行同步。

进程的同步原语包括：`Lock`、`Event`、`Condition`、`Semaphore`、`Rlock`、`Barrier`。相关的同步原语和线程的库很类似。

如下代码是多个进程不同步共享同一打印终端，采用并发运行,效率高,但竞争同一打印终端,带来了打印错乱。

```
from multiprocessing import Process
import os,time
def work():
    print('%s is running' %os.getpid())
    time.sleep(2)
    print('%s is done' %os.getpid())

if __name__ == '__main__':
    for i in range(3):
        p=Process(target=work)
        p.start()
```

以下为运行效果，可以看到并应该是三个进程轮流输出的两条语句变为乱序输出。

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250423010606467-113484634.png)


# 1.基于互斥锁的进程数据同步

如下 `work` 函数中利用 `acquire()` 和 `release()` ，来控制共享数据的读写权限：

```
from multiprocessing import Process,Lock
import os,time
def work(lock):
    lock.acquire()
    print('%s is running' %os.getpid())
    time.sleep(2)
    print('%s is done' %os.getpid())
    lock.release()
if __name__ == '__main__':
    lock=Lock()
    for i in range(3):
        p=Process(target=work,args=(lock,))
        p.start()
```

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250423010612505-1390470087.png)


可以看到按序输出，加锁实现由并发变成了串行,牺牲了运行效率,但避免了竞争。

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250423010617203-509252364.png)


# 2.基于递归锁的进程数据同步

示例代码如下：

```
from multiprocessing import Process,RLock
import multiprocessing
import time

mutex = RLock()

def test(mutex):
    if mutex.acquire():
        print("I am %s" % multiprocessing.current_process().name)
        if mutex.acquire():
            print("I am %s" % multiprocessing.current_process().name)
            mutex.release()
            time.sleep(1)
        mutex.release()

if __name__ == '__main__':
    for i in range(0, 10):
        p = Process(target=test,args=(mutex,))
        p.start()
```

输出如下，可以看到输出正常：

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250423010624793-1406208444.png)


![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250423010628057-1361578810.png)


# 3.基于信号量的进程数据同步

以下为示例代码，从运行结果中我们可以看到两个 `print` 依次输出。

```
from multiprocessing import Process,Semaphore
import multiprocessing
import time

_# 创建一个信号量，信号量是一个内部数据_
_# 用于标明当前的共享资源可以有多少并发读取_
semaphore = Semaphore(1)

def test(semaphore):
    _# 测试控制该资源的信号量。_
    if semaphore.acquire():
        _# 若此信号量的值为正，则允许进行使用该资源。线程将信号量减 1。_
        print("I am %s,pid:%s" % (multiprocessing.current_process().name,multiprocessing.current_process().pid))
        print("%s am runing" % multiprocessing.current_process().name)
        semaphore.release()

if __name__ == '__main__':
    for i in range(0, 10):
        p = Process(target=test,args=(semaphore,))
        p.start()
```

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250423010632805-1074168970.png)


# 4.基于条件变量的进程数据同步

这里，我们以生产者消费者模型为例，在多线程的基于条件变量的线程同步示例中，我们使用全局变量当作缓存，在本例中，我们同样如此。

有些同学会问，不是说进程中的数据是独立的吗？没错，在多进程编程中，不同的进程之间默认情况下是无法共享数据的。但 Python 提供了一些机制来实现多进程间的数据共享，其中之一是共享内存。共享内存允许多个进程共享一个存储区域，一个进程写入共享内存中的信息，其他进程可以方便的读取。在 Python 中可以使用 `Value`、`Array` 将数据存储在共享内存中，也可以使用 `multiprocessing` 模块中 `sharedctypes` 自定义共享内存的 `ctypes` 对象。

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250423010637053-1161330216.png)


下例中，以 `value` 对象作为缓存，只要缓存不满，生产者一直向缓存生产；只要缓存不空，消费者一直从缓存取出（之后销毁）。

当缓冲队列不为空的时候，生产者将通知消费者；当缓冲队列不满的时候，消费者将通知生产者。

```
from multiprocessing import Process,Condition,Value
import multiprocessing
import time

condition = Condition()
products = Value('i', 0)

_# 生产者进程_
def Producer(condition,products):
    while True:
        if condition.acquire():
        _# 消费者通过拿到锁来修改共享的资源_
            if products.value < 10:
            _# 如果产品数量小于 10，继续生成，并通过 notify 方法通知消费者_
            _# 只要缓存不满，生产者一直向缓存生产；_
                products.value += 1;
                print("Producer(%s):deliver one, now products:%s" % (multiprocessing.current_process().name, products.value))
                _# 当缓冲队列不为空的时候，生产者将通知消费者_
                condition.notify()
            else:
            _# 如果已经满了，那么生产者进入等待状态，直到被唤醒_
                print("Producer(%s):already 10, stop deliver, now products:%s" %(multiprocessing.current_process().name, products.value))
                condition.wait()
            _# 释放资源_
            condition.release()
            time.sleep(1)

_# 消费者进程_
def Consumer(condition,products):
    while True:
        if condition.acquire():
            if products.value > 1:
            _# 只要缓存不空，消费者一直从缓存取出（之后销毁）_
                products.value -= 1
                print("Consumer(%s):consume one, now products:%s" % (multiprocessing.current_process().name, products.value))
                _# 当缓冲队列不满的时候，消费者将通知生产者。_
                condition.notify()
            else:
            _# 缓存空，消费者线程等待_
                print("Consumer(%s):only 1, stop consume, products:%s" % (multiprocessing.current_process().name, products.value))
                condition.wait()
            _# 释放资源_
            condition.release()
            time.sleep(1)

if __name__ == '__main__':
    ProducerProcess = Process(target=Producer,args=(condition,products))
    ConsumerProcess = Process(target=Consumer, args=(condition, products))
    ProducerProcess.start()
    ConsumerProcess.start()
```

如下为运行情况，可以看到正常运行。

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250423010643541-1848635340.png)


# 5.基于事件的进程数据同步

示例代码和运行结果如下，与多线程中类似。

```
from multiprocessing import Process,Event
import multiprocessing

event = Event()

def worker(event_obj, i):
    print('{i}号进程等待事件信号'.format(i=i))
    event_obj.wait()
    print('{i}号进程收到事件信号'.format(i=i))

if __name__ == '__main__':
    for i in range(5):
        p = Process(target=worker, args=(event, i))
        p.start()
    event.set()
```

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250423010647623-1395536900.png)


# 6.基于屏障的进程数据同步

下面的代码展示了如何使用 `barrier()` 函数来同步两个进程。我们有 4 个进程，进程 1 和进程 2 由 `barrier` 语句管理，进程 3 和进程 4 没有同步策略。

```
import multiprocessing
from multiprocessing import Barrier, Lock, Process
import time
from datetime import datetime

def test_with_barrier(synchronizer, serializer):
    name = multiprocessing.current_process().name
    synchronizer.wait()
    now = time.time()
    time.sleep(1)
    with serializer:
        print("process %s ----> %s" % (name, datetime.fromtimestamp(now)))

def test_without_barrier():
    name = multiprocessing.current_process().name
    now = time.time()
    print("process %s ----> %s" % (name, datetime.fromtimestamp(now)))

if __name__ == '__main__':
    synchronizer = Barrier(2)
    serializer = Lock()
    Process(name='p1 - test_with_barrier', target=test_with_barrier, args=(synchronizer,serializer)).start()
    Process(name='p2 - test_with_barrier', target=test_with_barrier, args=(synchronizer,serializer)).start()
    Process(name='p3 - test_without_barrier', target=test_without_barrier).start()
    Process(name='p4 - test_without_barrier', target=test_without_barrier).start()
```

运行代码，将看到进程 1 和进程 2 在同一时间打印：

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250423010652470-1173538978.png)


下面这幅图表示了 barrier 如何同步两个进程：

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250423010657648-515428922.png)

