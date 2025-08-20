# 一文速通 Python 并行计算：06 Python 多线程编程-基于队列进行通信

![image](https://img2024.cnblogs.com/blog/2591203/202503/2591203-20250326231509385-1642894601.png)

# **摘要：**

队列是一种线性数据结构，支持先进先出（FIFO）操作，常用于解耦生产者和消费者。慢速生产-快速消费场景中，队列作为缓冲区平衡速度差异。LifoQueue 是后进先出（LIFO）的栈式队列，适用于撤销操作等场景。PriorityQueue 则按优先级排序，适合任务调度等需要优先处理的场景。这三种队列分别通过 Queue、LifoQueue 和 PriorityQueue 类实现，提供 put()、get()等方法，是并发编程中线程安全的重要工具。

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

# **文档获取：**

可访问如下链接进行对文档下载：

[https://github.com/leezisheng/Doc](https://github.com/leezisheng/Doc)

该文档是一份关于 **并行计算** 和 **Python 并发编程** 的学习指南，内容涵盖了并行计算的基本概念、Python 多线程编程、多进程编程以及协程编程的核心知识点：

![image](https://img2024.cnblogs.com/blog/2591203/202503/2591203-20250321010038855-257589202.png)


# **正文**

# 1.队列的基本概念和应用

队列（queue），是先进先出（FIFO, First-In-First-Out）的线性表，在具体应用中通常用链表或者数组来实现，队列只允许在后端（称为 rear）进行插入操作，在前端（称为 front）进行删除操作，队列的操作方式和堆栈类似，唯一的区别在于队列只允许新数据在后端进行添加。在 Python 中队列可以通过内置模块 `queue` 导入，具体导入方法：`from queue import Queue`，`queue` 模块提供了适合多线程编程的先进先出的数据结构，可以用来在生产者和消费者线程之间安全的传递消息或者数据。

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250407005733945-1904108169.png)


`Queue` 常用的方法有以下四个：

- **put()****:** 往 `queue` 中放一个 `item`。
- **get()****: **从 `queue` 删除一个 `item`，并返回删除的这个 `item`。
- **task_done()****:** 每次 `item` 被处理的时候需要调用这个方法。
- **join()****: **所有 `item` 都被处理之前一直阻塞。

这里以生产者-消费者模型为例，生产者向队列中发送产品，消费者从队列中接收产品。代码如下：

```
from threading import Thread, Event
from queue import Queue
import time
import random
class producer(Thread):

    _# 首先，我们创建一个生产者类。_
    _# 由于我们使用队列存放数字，所以不需要用来存放数字的list了。_
    def __init__(self, queue):
        Thread.__init__(self)
        self.queue = queue

    def run(self) :
        _# producer 类生产整数，然后通过一个 for 循环将整数放到队列中_
        for i in range(10):
            item = random.randint(0, 256)
            _# 生产者使用 Queue.put(item [,block[, timeout]]) 来往queue中插入数据。_
            _# Queue是同步的，在插入数据之前内部有一个内置的锁机制。_
            self.queue.put(item)
            _# 可能发生两种情况：_
            _# (1)如果 block 为 True ， timeout 为 None :_
            _#   那么可能会阻塞掉，直到出现可用的位置。如果 timeout 是正整数，_
            _#   那么阻塞直到这个时间，就会抛出一个异常。_
            _# (2)如果 block 为 False:_
            _#   如果队列有闲置那么会立即插入，否则就立即抛出异常（ timeout 将会被忽略）。_
            _#   本例中， put() 检查队列是否已满，然后调用 wait() 开始等待。_
            print('Producer notify: item N° %d appended to queue by %s' % (item, self.name))
            time.sleep(1)


class consumer(Thread):
    def __init__(self, queue):
        Thread.__init__(self)
        self.queue = queue


    def run(self):
        while True:
            _# 消费者使用 Queue.get([block[, timeout]]) 从队列中取回数据，_
            _# queue内部也会经过锁的处理。如果队列为空，消费者阻塞。_
            item = self.queue.get()
            print('Consumer notify : %d popped from queue by %s' % (item, self.name))
            _# 消费者从队列中取出整数然后用 task_done() 方法将其标为任务已处理。_
            self.queue.task_done()


if __name__ == '__main__':
    queue = Queue()
    t1 = producer(queue)
    t2 = consumer(queue)
    t3 = consumer(queue)
    t4 = consumer(queue)
    t1.start()
    t2.start()
    t3.start()
    t4.start()
    t1.join()
    t2.join()
    t3.join()
    t4.join()
```

代码运行如下：

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250407005744318-125966317.png)


生产者和消费者之间的操作可以用下图来描述：

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250407005747782-618429222.png)


Queue 的其他方法包括：

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250407005753629-1241048887.png)


> **join()方法与 task_done()方法**
> `Queue.task_done()` 在完成一项工作之后，`Queue.task_done()` 函数向任务已经完成的队列发送一个信号。
> `Queue.join()` 实际上意味着等到队列为空，再执行别的操作。
> 如果线程里每从队列里取一次，但没有执行 `task_done()`，则 `join` 无法判断队列到底有没有结束，在最后执行个 `join()` 是等不到结果的，会一直挂起。可以理解为，每 `task_done` 一次 就从队列里删掉一个元素，这样在最后 `join` 的时候根据队列长度是否为零来判断队列是否结束，从而执行主线程。

# 2.慢速生产-快速消费

在快速生产-慢速消费的场景中，我们可以直接用 `task_done()` 与 `join()` 配合，来让 `empty()` 判断出队列是否已经结束。 当然，`queue` 我们可以正确判断是否已经清空，但是对于线程里的 `get` 方法，如果没有东西告诉它队列空了，`get` 会继续阻塞，那么我们就需要在 `get` 程序中加一个判断，如果 `empty()` 成立，`break` 退出循环，否则 get()还是会一直阻塞。

但是**如果生产者速度与消费者速度相当，或者生产速度小于消费速度**，则靠 `task_done()` 来实现队列减一则不靠谱，队列会时常处于供不应求的状态，常为 `empty`，所以用 `empty` 来判断则不靠谱。 那么这种情况会导致 `join` 可以判断出队列结束了，但是线程里不能依靠 `empty()` 来判断线程是否可以结束。 我**们可以在消费队列的每个线程最后塞入一个特定的“标记”，在消费的时候判断，如果 get 到了这么一个“标记”，则可以判定队列结束了，因为生产队列都结束了，也不会再新增了。**

# 3.先进后出队列 LifoQueue

与上文的 Queue 相反，最后存入的数据最先取出，最先存入的数据最后取出，先进后出队列类似于栈。

示例代码如下：

```
import queue
import threading
_# 可以设置队列的长度，当队列满的时候自动进入阻塞状态_
q = queue.LifoQueue(5)
def put():
    for i in range(3):
        q.put(i)
        print("数据 %d 被存入到队列中" % i)
    q.join()
def get():
    for i in range(3):
        value = q.get()
        print("数据 %d 从队列中取出" % value)
        q.task_done()
if __name__ == '__main__':
    t1 = threading.Thread(target=put, args=())
    t1.start()
    t2 = threading.Thread(target=get, args=())
    t2.start()
```

代码输出如下：

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250407005802782-1755779571.png)


从运行结果，我们发现，我们写入数据的顺序是正序的，但是我们取出数据的顺序却是逆序的，这就说明，最新存进去的数据是最后出来的，也就是先进后出队列。

# 4.优先级队列 PriorityQueue

`PriorityQueue`(优先级队列)，即存入数据时候加入一个优先级，**取数据的时候优先级最高的取出**，在将数据存入到优先队列 `PriorityQueue` 时，**设置的值越小，优先级越高**（注意：使用优先级存数据取数据，队列中的数据必须是同一类型，举个栗子：班级成绩排名/身高排名……）。

示例代码：

```
import queue

q = queue.PriorityQueue()
q.put([1, 'ace'])
q.put([40, 333])
q.put([3, 'afd'])
q.put([5, '4asdg'])
_# 1是级别最高的，_

while not q.empty():  _# 不为空时候执行_
    print(q.get())

q = queue.PriorityQueue()

q.put('我')
q.put('你')
q.put('他')
q.put('她')
q.put('ta')

while not q.empty():
    print(q.get())
```

输出结果：

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250407005808418-740298958.png)


按优先级：不管是数字、字母、列表、元组等（字典、集合没测），使用优先级存数据取数据，队列中的数据必须是同一类型，都是**按照实际数据的 ascii 码表的顺序进行优先级匹配，汉字是按照 unicode 表。**

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250407005811683-730166707.png)

