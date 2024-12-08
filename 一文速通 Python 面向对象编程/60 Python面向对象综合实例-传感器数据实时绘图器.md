# 全网最适合入门的面向对象编程教程：60 Python 面向对象综合实例-传感器数据实时绘图器

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240825003614492-408022634.png)

# 摘要：

本文将结合之前内容实现模拟一个传感器系统软件，包括三个线程：传感器线程生成数据并通过串口发送给主机进程；主机进程通过串口接收指令，进行数据滤波和处理后，将处理结果发送给绘图线程；绘图线程负责接收数据并绘制更新数据曲线。

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

[**全网最适合入门的面向对象编程教程：59 Python并行与并发-并行与并发和线程与进程**](https://mp.weixin.qq.com/s/cgs1FP0bRMvqXv00J1AzkA)

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

接下来，我们将运用之前学习过的内容实现如下任务：

- 模拟传感器线程生成数据，通过串口协议传输给模拟主机进程；
- 模拟主机进程通过串口发送给传感器线程指令以获取数据，进行数据滤波和处理，并将数据传输给绘图线程；
- 绘图线程完成数据曲线绘制和更新操作。

可以注意到，我们之前为了阐述面向对象编程的技巧，所提及的某些类和类之间的关联设计，在实际应用中并非最佳实践。此外，原先的程序代码中，为了增强读者的直观感受，我们使用了大量的 print 语句进行输出。然而，这样的做法在程序进行并行运行时，不仅会降低整体的执行效率，而且在观察终端输出时，对于多线程或多进程的运行顺序也易造成混淆，使得理解变得困难。因此，我们有必要对这部分代码进行优化调整，以提高程序的性能和可读性。

在以下代码中，我们定义了一个 MasterProcess 主机多进程类，它继承了 Process 类，用于创建和管理主机多进程。可以看到 MasterProcess 主机多进程类直接在__ReadMasterSerial 和__WriteMasterSerial 方法中实现了串口的读写，而不像原先代码 MasterClass 类继承于 SerialClass 类。

示例代码如下：

```python
class MasterProcess(Process):
    '''
        主机多进程类
    '''
    _# 类变量：_
    _#   START_CMD       - 开启命令      -0_
    _#   STOP_CMD        - 关闭命令      -1_
    _#   SENDID_CMD      - 发送ID命令    -2_
    _#   SENDVALUE_CMD   - 发送数据命令   -3_
    START_CMD, STOP_CMD, SENDID_CMD, SENDVALUE_CMD = (0, 1, 2, 3)

    def __init__(self,
                 lock,
                 Queue,
                 simplequeue,
                 port:str = "COM17",
                 baudrate:int = 115200,
                 bytesize:int = serial.EIGHTBITS,
                 parity  :str = serial.PARITY_NONE,
                 stopbits:int = serial.STOPBITS_ONE):
        '''
        MasterProcess初始化函数
        :param lock: 互斥锁
        :param Queue: 队列
        :param port: 端口号
        :param baudrate: 波特率
        :param bytesize: 数据位
        :param parity: 校验位
        :param stopbits: 停止位
        '''
        self.lock               = lock
        self.Queue              = Queue
        self.simplequeue        = simplequeue
        self.dev                = serial.Serial()
        self.dev.port           = port
        self.dev.baudrate       = baudrate
        self.dev.bytesize       = bytesize
        self.dev.parity         = parity
        self.dev.stopbits       = stopbits
        _# 设置读取timeout超时时间_
        self.dev.timeout        = 0.3
        _# 设置写入timeout超时时间_
        self.dev.write_timeout  = 0.3
        _# 数据缓存_
        self.datalist           = []
        _# 滤波器长度_
        self.filterlength       = 3
        _# 数据处理类实例_
        self.dataprocessobj     = DateProcessClass(self.datalist,self.filterlength)
        _# Process初始化方法_
        Process.__init__(self)
    def StartMasterSerial(self):
        '''
        打开主机串口
        :return: None
        '''
        self.dev.open()
    def StopMasterSerial(self):
        '''
        停止主机串口
        :return: None
        '''
        self.dev.close()
    def __ReadMasterSerial(self):
        '''
        读取主机串口，私有方法
        :return data[int] : 读取的数据
        '''
        _# 按行读取_
        data = self.dev.readline()
        _# 如果接收到字节的情况下，进行处理_
        if data != b'':
            _# 收到为二进制数据_
            _# 用utf-8编码将二进制数据解码为unicode字符串_
            _# 字符串转为int类型_
            data = int(data.decode('utf-8', 'replace'))
        _# 否则，设置data为-1_
        else:
            data = -1
        return data
    def __WriteMasterSerial(self,write_data):
        '''
        写入主机串口，私有方法
        :param write_data: 写入的数据
        :return:
        '''
        _# 非阻塞方式写入_
        self.dev.write(write_data.encode())
        _# 输出换行符_
        _# write的输入参数必须是bytes格式_
        _# 字符串数据需要encode()函数将其编码为二进制数据，然后才可以顺利发送_
        _# \r\n表示换行回车_
        self.dev.write('\r\n'.encode())
    def RecvSensorID(self):
        '''
        读取传感器ID
        :return sensorid[int] : 读取的传感器id号
        '''
        sensorid = self.__ReadMasterSerial()
        return sensorid
    def RecvSensorValue(self):
        '''
        读取传感器数据值
        :return data[int] : 读取的传感器数据
        '''
        data = self.__ReadMasterSerial()
        return data
    def SendSensorCMD(self,cmd):
        '''
        主机发送命令
        :param cmd : MasterProcess中的类变量
        :return: None
        '''
        self.__WriteMasterSerial(str(cmd))
```

同时，我们在其中定义了一个 run 方法，这个方法在多进程启动后被调用。在这个方法中，首先打开串口，然后发送获取 ID 的指令，接收传感器的 ID 号。然后进入一个无限循环，每 9 次循环，计算一次最大值和最小值，并打印出来。然后发送获取数据的指令，接收传感器的数据，将数据放入队列和列表中，然后对数据进行滤波处理，将滤波后的数据放入另一个队列。最后，打印出接收到的传感器数据，并让当前进程休眠 0.5 秒。

示例代码如下：

```python
def run(self):
        '''
        多进程start后运行的方法
        :return: None
        '''
        _# 运行计数变量_
        count = 0
        _# 文件保存索引计数变量_
        index = 0
        _# 打开串口_
        self.StartMasterSerial()
        self.lock.acquire()
        print(" Master Process Started ")
        self.lock.release()

        _# 发送获取ID指令_
        self.SendSensorCMD(self.SENDID_CMD)
        _# 获取传感器ID号_
        id = self.RecvSensorID()

        self.lock.acquire()
        print(" Recv Sensor ID : ", id)
        self.lock.release()

        while True:
            if count == 9:
                maxvalue = self.dataprocessobj.DateCalMax()
                minvalue = self.dataprocessobj.DateCalMin()
                self.lock.acquire()
                print("----------------------------------")
                print("Max Value: ", maxvalue)
                print("Min Value: ", minvalue)
                print("----------------------------------")
                self.lock.release()
                count = 0
            else:
                count = count + 1

            _# 发送获取数据指令_
            self.SendSensorCMD(self.SENDVALUE_CMD)

            self.lock.acquire()
            print("Master Send SENDVALUE_CMD")
            self.lock.release()

            _# 接收传感器数据值_
            data = self.RecvSensorValue()
            self.Queue.put(data)

            self.datalist.append(data)
            filterdata,filterdatalist = self.dataprocessobj.DateFilter()
            self.simplequeue.put(filterdata)

            self.lock.acquire()
            print("  Recv Sensor Data : ",data)
            self.lock.release()

            time.sleep(0.5)
```

同时，我们需要注意 MasterProcess 主机进程类和 DateProcessClass 数据处理类为组合关系，使用如下语句实现：

```python
_# 数据缓存_
        self.datalist           = []
        _# 滤波器长度_
        self.filterlength       = 3
        _# 数据处理类实例_
        self.dataprocessobj     = DateProcessClass(self.datalist,self.filterlength)
```

![image](https://img2024.cnblogs.com/blog/2591203/202412/2591203-20241208234208945-1694189902.png)


同时我们重写了 DateProcessClass 数据处理类，为方便理解程序运行情况，我们去掉了异常类、日志和 print 输出语句，同时在 DateFilter 方法中将计算出的平均值也进行返回。

```python
class DateProcessClass():
    def __init__(self, DateList: List[int], FilterLength: int):
        self.DateList = DateList
        self.FilterLength = FilterLength
        self.TempList = [0] * (self.FilterLength)

    def DateFilter(self) -> List:
        _# 遍历DateList_
        for index, value in enumerate(self.DateList):
            _# 把每个值都当成传入的新的传感器的值_
            NowValue = value
            _# 表示列表求和的变量_
            sum = 0
            for i in range(self.FilterLength - 1):
                _# 实现列表的移位操作_
                self.TempList[i] = self.TempList[i + 1]
                _# 实现列表求和_
                sum += self.TempList[i]
            self.TempList[self.FilterLength - 1] = NowValue
            sum += self.TempList[self.FilterLength - 1]
            _# 求平均值_
            average = sum / self.FilterLength
            _# 将计算得到的平均值替换原始值_
            self.DateList[index] = average
        _# 计算完成后将TempList中元素清零_
        self.TempList = [0] * (self.FilterLength)
        return average,self.DateList

    def DateCalMax(self) -> int:
        max_value = max(self.DateList)
        return int(max_value)

    def DateCalMin(self) -> int:
        min_value = min(self.DateList)
        return int(min_value)
```

同时，我们重写了绘图类，该类包含了初始化、数据更新和定时更新等方法。在初始化方法中，程序创建了一个 Qt 应用实例对象、一个多面板图形窗口对象以及两个绘图曲线对象。数据更新方法用于接收传感器数据并将其添加到缓存列表中，然后将数据转化为图形。定时更新方法则用于定时进行曲线更新。

这里主要对 GetValue 方法和 DataUpdate 方法进行改写，同时我们可以看到在初始化方法和绘图曲线中增加了滤波后数据的相关属性，用于查看滤波效果。

示例代码如下：

```python
class PlotThread:
    def __init__(self,lock,queue,simplequeue,wintitle:str="Basic plotting examples",plottitle:str="Updating plot",width:int=1000,height:int=600):
        '''
        用于初始化PlotThread类
        :param wintitle:  窗口标题
        :param plottitle: 图层标题
        :param width:     窗口宽度
        :param height:    窗口高度
        '''
        self.lock               = lock
        self.queue              = queue
        self.simplequeue        = simplequeue
        _# Qt应用实例对象_
        self.app                = None
        _# 窗口对象_
        self.win                = None
        _# 设置窗口标题_
        self.title              = wintitle
        _# 设置窗口尺寸_
        self.width              = width
        self.height             = height
        _# 传感器数据_
        self.value              = 0
        _# 存放滤波后数据_
        self.filtervalue        = 0
        _# 计数变量_
        self.__count            = 0
        _# 传感器数据缓存列表_
        self.valuelist          = []
        _# 传感器滤波数据缓存列表_
        self.filtervaluelist    = []
        _# 绘图曲线_
        self.curve              = None
        _# 滤波后绘图曲线_
        self.filtercurve        = None
        _# 图层对象_
        self.plotob             = None
        _# 图层标题_
        self.plottitle          = plottitle
        _# 定时器对象_
        self.timer              = QtCore.QTimer()
        _# 定时时间_
        self.time               = 0
        _# Qt应用和窗口初始化_
        self.appinit()

        self.lock.acquire()
        print(" PlotClass Object Init Complete ")
        self.lock.release()

    def appinit(self):
        '''
        用于qt应用程序初始化，添加窗口、曲线和图层
        :return: None
        '''
        _# 创建一个Qt应用，并返回该应用的实例对象_
        self.app = pg.mkQApp("Plotting Example")
        _# 生成多面板图形_
        _# show：(bool) 如果为 True，则在创建小部件后立即显示小部件。_
        _# title：(str 或 None)如果指定，则为此小部件设置窗口标题。_
        self.win = pg.GraphicsLayoutWidget(show=True, title=self.title)
        _# 设置窗口尺寸_
        self.win.resize(self.width, self.height)
        _# 进行窗口全局设置，setConfigOptions一次性配置多项参数_
        _# antialias启用抗锯齿，useNumba对图像进行加速_
        pg.setConfigOptions(antialias=True, useNumba=True)

        _# 添加图层_
        self.plotob = self.win.addPlot(title=self.plottitle)
        _# 添加曲线_
        _# 原始数据-黄色曲线_
        self.curve = self.plotob.plot(pen='y')
        _# 滤波后数据-红色曲线_
        self.filtercurve  = self.plotob.plot(pen='r')

    def GetValue(self,value,filtervalue):
        '''
        用于接收传感器数据，加入缓存列表
        :param value: 传感器数据
        :param filtervalue: 传感器滤波后数据
        :return: None
        '''
        self.value          = value
        self.valuelist.append(self.value)
        self.filtervalue    = filtervalue
        self.filtervaluelist.append(self.filtervalue)

    def DataUpdate(self):
        '''
        用于定时进行曲线更新,这里模拟绘制正弦曲线
        :return: None
        '''
        self.value = self.queue.get()
        self.filtervalue = self.simplequeue.get()
        self.GetValue(self.value,self.filtervalue)
        _# 将数据转化为图形_
        self.curve.setData(self.valuelist)
        self.filtercurve.setData(self.filtervaluelist)

    def SetUpdate(self,time:int = 100):
        '''
        设置定时更新任务
        :param time: 定时的时间
        :return: None
        '''
        _# 定时器结束，触发DataUpdate方法_
        self.timer.timeout.connect(self.DataUpdate)
        _# 启动定时器_
        self.timer.start(time)
        _# 定时时间_
        self.time = time
        _# 进入主事件循环并等待_
        pg.exec()
```

GetValue 方法用于接收传感器数据并将其加入缓存列表，DataUpdate 方法定时运行，它使用队列接收 MasterProcess 进程中产生和传输的数据，并将更新后的数据通过 setData 方法实现绘图曲线的更新。可以看到，数据的绘图和更新都是在主线程中进行的，这是由于在使用 PyQtGraph 绘图时，如果在主线程之外进行绘图操作，可能会出现绘图不生效或程序崩溃的问题。

![image](https://img2024.cnblogs.com/blog/2591203/202412/2591203-20241208234224283-509890318.png)


![image](https://img2024.cnblogs.com/blog/2591203/202412/2591203-20241208234229694-87745758.png)


在主线程中完成创建互斥锁、消息队列和进程实例，然后创建传感器线程和绘图线程实例，最后启动进程和线程。示例代码如下：

```python
if __name__ == "__main__":
    _# 创建互斥锁_
    lock    = Lock()
    _# 创建消息队列_
    queue   = Queue(5)
    _# 创建消息队列_
    simplequeue = SimpleQueue()

    _# 创建进程实例_
    m_process = MasterProcess(lock,queue,simplequeue,port = "COM17")
    _# 创建线程实例_
    s_thread  = SensorThread(lock,port="COM11", id=0, state=SensorThread.WORK_MODE["RESPOND_MODE"])
    _# 创建绘图类实例_
    p_thread  = PlotThread(lock,queue,simplequeue)

    _# 启动进程_
    m_process.start()
    _# 开启线程，start方法以并发方式执行_
    s_thread.start()
    _# 启动p_thread的定时任务_
    p_thread.SetUpdate(600)
```

接下来，我们运行程序：

![image](https://img2024.cnblogs.com/blog/2591203/202412/2591203-20241208234236376-204279870.png)


可以看到整个程序可以并行运行，对于并行运行的 Python 程序来说，我们可以使用 Profile/CProfile 等工具进行分析调试，或者利用 viztracer/SnakeViz 等可视化工具生成线程/进程运行的火焰图，这些工具可以完成记录函数的入口/出口，函数参数/返回值、任意变量的值以及线程/进程的运行顺序等操作。

![image](https://img2024.cnblogs.com/blog/2591203/202411/2591203-20241121002659547-1525516382.png)
