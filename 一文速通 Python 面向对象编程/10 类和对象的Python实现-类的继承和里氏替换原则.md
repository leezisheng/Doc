# 全网最适合入门的面向对象编程教程：10 类和对象的 Python 实现-类的继承和里氏替换原则，Python 模拟主机和传感器自定义类

# 摘要：

本文主要介绍了类的继承的基本概念和里氏替换原则，以**模拟传感器数据串口输出-上位机串口接收**为例，对工作流程、工作模式和基本概念进行讲解，同时创建了主机类和传感器类，定义了属性和抽象方法。

# 原文链接：

[FreakStudio 的博客](https://www.cnblogs.com/FreakEmbedded)

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

# 更多精彩内容可看：
[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483747&idx=1&sn=0e203586516fd6e925085b9c1244dbee&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483719&idx=1&sn=7ece9da65d002fdc3df9539cc43f3a8d&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483671&idx=1&sn=c267a0c6f4ab93d6b6d934bf803b5919&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483774&idx=1&sn=46d57506febe92c1719c8567ebe95269&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483854&idx=1&sn=fd666dc501a0de850abfbd8793abff00&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")
# **文档和代码获取**

可访问如下链接进行对文档下载：

[https://github.com/leezisheng/Doc](https://github.com/leezisheng/Doc)

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240707011449309-1466863883.png)


**本文档主要介绍如何使用 Python 进行面向对象编程，需要读者对 Python 语法和单片机开发具有基本了解。相比其他讲解 Python 面向对象编程的博客或书籍而言，本文档更加详细、侧重于嵌入式上位机应用，以上位机和下位机的常见串口数据收发、数据处理、动态图绘制等为应用实例，同时使用 Sourcetrail 代码软件对代码进行可视化阅读便于读者理解。**

**相关示例代码获取链接如下：**[https://github.com/leezisheng/Python-OOP-Demo](https://github.com/leezisheng/Python-OOP-Demo)

# 正文

## 类的继承的基本概念

刚才我们提到了，可以在已有类的基础上创建新类，这其中的一种做法就是**让一个类从另一个类那里将属性和方法直接继承下来，从而减少重复代码的编写。提供继承信息的我们称之为父类，也叫超类或基类；得到继承信息的我们称之为子类，也叫派生类或衍生类。子类除了继承父类提供的属性和方法，还可以定义自己特有的属性和方法，所以子类比父类拥有的更多的能力，**在实际开发中，我们经常会用子类对象去替换掉一个父类对象，这是面向对象编程中一个常见的行为，对应的原则称之为**里氏替换原则**。

## **里氏替换原则**

所谓**里氏替换原则**通俗来说就是子类可以扩展父类的功能，但不能改变父类原有的功能。有以下几个引申含义：

- （1）子类可以实现父类的抽象方法，但不能覆盖父类的非抽象方法。
- （2）子类中可以增加自己特有的方法。
- （3）当子类的方法重载父类的方法时，方法的前置条件（方法的输入，入参）要比父类的入参更宽松。
- （4）当子类的方法实现父类的方法时（重写，重载，实现抽象方法），方法的后置条件（输出、返回值）要比父类更严格或相等。

更多相关信息可以看：<u>[https://www.jyt0532.com/2020/03/22/lsp/](https://www.jyt0532.com/2020/03/22/lsp/)</u>

## 应用实例的抽象实现

这里，我们以**模拟传感器数据串口输出-上位机串口接收**为例，进行讲解：在现在的开发中，许多传感器都内部集成了 ADC 和 MCU 芯片，可以将采集到的传感器测量的物理量对应的电压量进行转换并进行滤波等处理后，将更精确的传感器数据通过串口进行输出。这里，传感器和上位机间关于串口通信的部分就可以抽象为串口类，二者都具有串口的收发功能。但传感器类和上位机接收类与串口类有有所不同：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240707011543295-587366258.png)


| **SensorClass 类**                       |                                                                                                                                                                   |
| ---------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **类内成员**                             | **作用**                                                                                                                                                          |
| **属性 attribute:sensorvalue**           | **传感器采集的数据**                                                                                                                                              |
| **属性 attribute:sensorid**              | **传感器 ID 号，用于识别是哪个传感器**                                                                                                                            |
| ** **** ****属性 attribute:sensorstate** | **传感器工作状态，包括：****  ① 被动响应模式（默认）：主机发送查询数据指令后，传感器发送数据；****  ② 轮询工作模式：间隔 100ms 发送一个传感器数据，轮询工作；** |
| **方法 operation：SendSensorID**         | **发送传感器 ID 号**                                                                                                                                              |
| **方法 operation：SendSensorValue**      | **发送传感器采集的数据**                                                                                                                                          |
| **方法 operation：RecvMasterCMD**        | **接收主机指令**                                                                                                                                                  |
| **方法 operation：StartSensor**          | **开始传感器工作**                                                                                                                                                |
| **方法 operation：StopSensor**           | **停止传感器工作**                                                                                                                                                |
| **方法 operation：InitSensor**           | **初始化传感器**                                                                                                                                                  |

工作流程简单来说就是传感器初始化后开始工作，不断采集数据，接收到主机发送的查询数据命令后，发送传感器数据；对应的接收到主机发送的不同指令后执行对应操作。

我们来看如下示例代码，SensorClass 类具体方法实现先省略：

```python
class SensorClass(SerialClass):
    _# 类的初始化_
    def __init__(self,id,state):
        _# 调用父类的初始化方法，super() 函数将父类和子类连接_
        super().__init__()
        self.sensorvalue = 0
        self.sensorid    = id
        self.sensorstate = state

    _# 传感器上电初始化_
    def InitSensor(self):
        pass
    _# 开启传感器_
    def StartSensor(self):
        pass
    _# 停止传感器_
    def StopSensor(self):
        pass
    _# 发送传感器ID号_
    def SendSensorID(self):
        pass
    _# 发送传感器数据_
    def SendSensorValue(self):
        pass
```

这里，继承语法为：

```python
class 派生类名(基类名)
    ...
```

在 SensorClass 类的初始化方法中，我们首先调用如下语句：

```python
super().__init__()
```

这里，super()用来调用父类(基类)的方法，__init__()是类的构造方法， super().__init__() 就是调用父类的 init 方法， 同样可以使用 super()去调用父类的其他方法。这里，你可能会问，我们为何不用如下语句来初始化父类 SerialClass 呢？

```python
SerialClass.__init__()
```

这看起来多清晰、多方便。实际上，super() 是用来解决多重继承问题的，直接用类名调用父类方法在使用单继承的时候没问题，但是如果使用多继承，会涉及到查找顺序（MRO）、重复调用（钻石继承）等种种问题。这里，不对钻石继承问题做过多叙述，只需知道子类初始化时必须调用 super() 方法。

有关钻石继承问题可以查看如下链接：

<u>[https://blog.csdn.net/qq_41556318/article/details/84521836](https://blog.csdn.net/qq_41556318/article/details/84521836)</u>

对于主机的 **MasterClass 类**来说，除了继承于父类 SerialClass 的属性和方法外，还包括其他属性和方法，如下讲解：

| **MasterClass 类**                       |                                                                                                                            |
| ---------------------------------------- | -------------------------------------------------------------------------------------------------------------------------- |
| **类内成员**                             | **作用**                                                                                                                   |
| **属性 attribute:valuequeue**            | **主机中传感器采集数据的缓存队列**                                                                                         |
| **属性 attribute:masterstate**| **主机状态，包括：****① 空闲状态（默认）：主机工作空闲，可以接收数据；****② 忙碌状态：主机工作忙碌，暂时停止数据接收。** |
| **方法 operation：RecvSensorID**         | **接收传感器 ID 号**                                                                                                       |
| **方法 operation：RecvSensorValue**      | **接收传感器采集的数据**                                                                                                   |
| **方法 operation：SendSensorCMD**        | **发送主机指令**                                                                                                           |
| **方法 operation：StartMaster**          | **开始主机工作**                                                                                                           |
| **方法 operation：StopMaster**           | **停止主机工作**                                                                                                           |
| **方法 operation：RetMasterState**       | **返回主机状态**                                                                                                           |

工作流程简单来说就是主机在空闲时，发送数据查询指令，接收传感器数据；在忙碌时，不接收数据。

我们来看如下示例代码，MasterClass 类具体方法实现先省略：

```python
class MasterClass(SerialClass):
    _# 类的初始化_
    def __init__(self,state):
        _# 调用父类的初始化方法，super() 函数将父类和子类连接_
        super().__init__()
        self.valuequeue  = queue.Queue(5)
        self.masterstatue = state
    _# 开启主机_
    def StartMaster(self):
        pass
    _# 停止主机_
    def StopMaster(self):
        pass
    _# 接收传感器ID号_
    def RecvSensorID(self):
        pass
    _# 接收传感器数据_
    def RecvSensorValue(self):
        pass
    _# 主机发送命令_
    def SendSensorCMD(self):
        pass
    _# 主机返回工作状态_
    def RetMasterStatue(self):
        pass
```

这里，我们使用队列创建了一个传感器数据缓冲区：

```python
self.valuequeue  = queue.Queue(5)
```

我们使用 import queue 语句导入队列库，队列类似于一条管道，元素先进先出,元素进入使用 put()方法，元素获取使用 get( )方法。关于新建的两个类方法的具体实现可以看下一节内容。

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240707011739815-1292401439.png)

