# 全网最适合入门的面向对象编程教程：41 Python 常用复合数据类型-队列（FIFO、LIFO、优先级队列、双端队列和环形队列）

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240825003614492-408022634.png)

# 摘要：

在 Python 中，队列（Queue）是一种常用的数据结构，用于按照特定的顺序存储和访问数据。队列的主要类型包括先进先出（FIFO）、后进先出（LIFO）、优先级队列、双端队列（Deque）和环形队列，每种队列在不同的应用场景中都有其独特的用途。

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

队列作为一种特殊的数据结构，与集合一样，完全可以通过列表来实现其功能。队列是一种特殊的线性表，其特殊性在于仅允许在前端进行删除操作，而在后端进行插入操作，这与栈的行为模式相似，是一种受限制的线性表。插入操作的端被称作队尾，删除操作的端被称作队头，其核心概念是“先进先出”。

在 Python 中 Queue 模块提供了一个同步的线程安全的队列类，它包括常见的 FIFO（先入先出）、LIFO（后入先出）、PriorityQueue（按优先级队列）以及先入先出类型的简单队列（SimpleQueue）。

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240830002836440-1810162987.png)


队列的基本操作方法如下：

| **方法**                  | **描述**                                  |
| ------------------------- | ----------------------------------------- |
| Q.qsize()                 | 返回队列的大小。                          |
| Q.empty()                 | 如果队列为空，返回 True,反之 False。      |
| Q.full()                  | 如果队列满了，返回 True,反之 False。      |
| Q.get([block[, timeout]]) | 获取队列，timeout 等待时间。              |
| Q.get_nowait()            | 相当于 Queue.get(False)，非阻塞方法。     |
| Q.put(item)               | 写入队列，timeout 等待时间。              |
| Q.task_done()             | task_done()调用告诉队列该任务已经处理完毕 |
| Q.join()                  | 实际上意味着等到队列为空，再执行别的操作  |

## FIFO 队列

FIFO，即 First In First Out，是我们对队列最常见的理解定义。想象一下，在银行或取款机前排成一队的情况，排在最前面的人通常会最先接受服务，而排在后面的人依次接受服务。Python 的 Queue 类正是如此。

Queue 类通常被用作某种沟通媒介，当一些对象产生数据而其他对象需要消耗这些数据时，且可能以不同的速度进行。设想一个消息应用从网络接收消息，但同一时间只能向用户展示一条消息。其他的消息会按照接收顺序缓存在队列中。

当考虑下一个对象被消耗时才需要访问数据结构中的数据时，Queue 类便成为了一个理想的选择。在这种情况下，使用列表会效率低下，因为在列表的头部插入（或移除）数据需要移动剩余的所有元素。

```python
import queue
# 如果不设置长度,默认为无限长
q = queue.Queue(5)
# 注意没有括号
print(q.maxsize)
q.put(123)
q.put(456)
q.put(789)
q.put(100)
print(q.get())
print(q.get())
print(q.get())
```

运行结果如下：
![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240830002836554-1283587930.png)


## LIFO 队列

**LIFO 代表“后进先出”（Last In First Out），LIFO 队列通常被称为栈。**想我们可以将一摞纸作为形象的比喻，你每次只能拿到最上面的一张。你可以往上面放另外一张纸，使它成为最上层，或者可以拿走最上层的纸露出下面的一张。

按照惯例，对栈进行的操作被称为 push 和 pop，但是 Python 的 queue 模块使用的是与 FIFO 队列完全相同的 API：put()和 get()。只不过在 LIFO 队列中，这些方法作用于栈“顶”而不是队伍的前后端。**（实际上，LIFO 和 FIFO 队列继承于同一个父类，在相同的方法中实现了不同的操作，这也是我们前面讲过的面向对象编程中多态的一个非常好的例子。）**

**LIFO 队列在底层的实现就是一个标准的列表，相比于列表，Lifo 队列支持多线程并发访问，同时 Lifo 队列强制使用栈接口。**你无法随意地向 Lifo 队列中的错误位置插入值。

```python
from queue import LifoQueue

_# 创建对象_
lifoQueue = LifoQueue()
lifoQueue.put(1)
lifoQueue.put(2)
lifoQueue.put(3)
print(lifoQueue.queue)

_# 返回并删除队列尾部元素_
print(lifoQueue.get())

print(lifoQueue.queue)
```

运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240830002923183-1893524017.png)


## 优先级队列

优先级队列强制使用一种与之前的队列实现迥然不同的排序风格。它们仍然使用相同的 get()和 put()函数，**不过不同的是，它们不是按照加入顺序来返回的，而是首先返回“最重要”的元素。按照约定，最重要或者说优先级最高的元素是通过小于操作排在最低位的元素。**

通常是将一个元组存储到优先级队列中，其中元组的第一个元素代表其优先级，第二个元素是数据；另一种常用范式是实现__lt__方法（队列中多个元素拥有相同的优先级时无法保证哪个会最先返回）。

优先级队列在许多实际应用中非常有用，例如任务调度、网络流量控制和机器学习中的一些算法。以任务调度为例，可以使用优先级队列来管理一组任务。每个任务都有一个优先级值，优先级值最高的任务最先被执行。通过使用优先级队列，可以确保高优先级的任务能够及时得到处理。

**如果队列是空的，get()方法将会阻塞（默认情况下）；如果队列非空，就不会阻塞，也不会等待优先级更高的元素添加进来。**队列对于还未添加的元素（甚至是已经被提取出来的元素）毫不关心，仅仅基于队列当前内容做出决定。

```python
import queue

_# 创建优先级队列_
q = queue.PriorityQueue()
_# put一个元组，元组格式为（优先级，数据）_
_# 数字越小，优先级越高_
q.put((4,'aaaaa'))
q.put((3,'bbbbb'))
q.put((2,'ccccc'))
q.put((1,'ddddd'))
print(q.get())
print(q.get())
print(q.get())
print(q.get())
```

如下为运行结果：

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240830002931268-2087701053.png)


优先级队列的通用实现都是基于 heap（堆）数据结构的。Python 实现利用了 heapq 模块来高效地将 heap 存储在一个寻常的列表中。关于 heap 堆的详细介绍在后文中会提到。

## 双端队列

双端队列 Double-ended queue，简称为 Deque，和队列的操作方式出列同名但不是一个意思。 在计算机科学中，双端队列(缩写为 deque) 是一种抽象数据类型，它概括了一个队列，其中的元素可以从前(头) 或后(尾) 添加或删除。因此也经常被称为首尾链表。

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240830003055347-505805212.png)


双端队列有两种：

**（1）输入限制型双端队列：**这种队列中输入被限制在一端，而删除则可以两端同时进行；

**（2）输出限制型双端队列：**这种队列只能在一端进行删除，而插入元素则可以两端同时进行。
![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240830003055579-36119648.png)



双端队列在许多实际应用中有着广泛的用途，其中一些包括：

- **页面缓存: **浏览器的前进、后退功能可以通过双端队列实现；
- **调度算法:** 在某些调度算法中，双端队列可以用于任务的优先级调度；
- **优先级队列: **双端队列可以用作优先级队列的基础数据结构。

以下是关于双端队列相关操作的示例代码，首先我们需要导入 collections 模块，这个模块实现了一些专门化的容器，提供了对 Python 的通用内建容器 dict、list、set 和 tuple 的补充：

```python
from collections import deque

_# 创建一个双端队列_
deque_obj = deque()

_# 在头部插入元素_
deque_obj.appendleft(10)
deque_obj.appendleft(15)
deque_obj.appendleft(20)

_# 在尾部插入元素_
deque_obj.append(25)
deque_obj.append(30)
print(deque_obj)

_# 循环右移2次_
deque_obj.rotate(2)
print(deque_obj)

_# 从头部删除元素_
front = deque_obj.popleft()
print(front)

_#从尾部删除元素_
rear = deque_obj.pop()
print(rear)

print(deque_obj)
```

以下为运行结果：

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240830003129253-452111482.png)


## 环形队列

在一个普通队列里，一旦一个队列满了，我们就不能插入下一个元素，即使在队列前面仍有空间。这时，我们可以利用循环队列实现利用这个队列之前用过的空间，通过循环队列我们能使用这些空间去存储新的值。循环队列是一种线性数据结构，其操作表现基于 FIFO（先进先出）原则并且队尾被连接在队首之后以形成一个循环。它也被称为“环形缓冲器”。

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240830003135178-1424899267.png)


循环队列在逻辑上可以将其视为一个环，当队首指针等于队列长度减去一个单位后，再前进一个位置就自动到 0，即取余运算。我们可以使用 Python 的 collections 模块中的 deque 来实现一个循环队列，在创建 deque 时，可以指定最大长度 collections.deque(maxlen=x) ，如果 maxlen 没有指定或者是 None，deques 可以增长到任意长度。否则，deque 就限定到指定最大长度，当 deque 满了，有新项加入时，同样数量的项就从另一端弹出。示例代码如下：

```python
from collections import deque

# 创建一个大小为 3 的循环队列
queue = deque(maxlen=3)

# 添加元素
queue.append('a')
queue.append('b')
queue.append('c')

# 添加第四个元素会导致第一个元素被弹出
queue.append('d')
print(queue)
```

如下为运行结果：

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240830003141847-195688540.png)


![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240830003146474-1397590858.png)

