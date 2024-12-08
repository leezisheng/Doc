# 全网最适合入门的面向对象编程教程：18 类和对象的 Python 实现-多重继承与 PyQtGraph 串口数据绘制曲线图

# 摘要：

本文主要介绍了 Python 中创建自定义类时如何使用多重继承、菱形继承的概念和易错点，同时讲解了如何使用 PyQtGraph 库对串口接收的数据进行绘图。

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

# 更多精彩内容可看：
[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483747&idx=1&sn=0e203586516fd6e925085b9c1244dbee&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483719&idx=1&sn=7ece9da65d002fdc3df9539cc43f3a8d&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483671&idx=1&sn=c267a0c6f4ab93d6b6d934bf803b5919&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483774&idx=1&sn=46d57506febe92c1719c8567ebe95269&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483854&idx=1&sn=fd666dc501a0de850abfbd8793abff00&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")

# **文档和代码获取：**

可访问如下链接进行对文档下载：

[https://github.com/leezisheng/Doc](https://github.com/leezisheng/Doc)

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240711215550373-1274223674.png)


**本文档主要介绍如何使用 Python 进行面向对象编程，需要读者对 Python 语法和单片机开发具有基本了解。相比其他讲解 Python 面向对象编程的博客或书籍而言，本文档更加详细、侧重于嵌入式上位机应用，以上位机和下位机的常见串口数据收发、数据处理、动态图绘制等为应用实例，同时使用 Sourcetrail 代码软件对代码进行可视化阅读便于读者理解。**

**相关示例代码获取链接如下：**[https://github.com/leezisheng/Python-OOP-Demo](https://github.com/leezisheng/Python-OOP-Demo)

# 正文

在 python 中一个类能继承自不止一个父类，这叫做 python 的多重继承，多重继承的语法与单继承类似：

```python
class SubclassName(BaseClass1, BaseClass2, BaseClass3, ...):
    pass
```

当然，子类所继承的所有父类同样也能有自己的父类，这样就可以得到一个继承关系机构图如下图所示：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240717013058883-541152047.png)


多重继承**最常见的用途就是用于创建包含两组完全不同行为的对象**。例如，设计一个对象用于连接扫描器并将扫描的文件通过传真发送出去，这一对象可能继承自两个完全独立的 scanner 和 faxer 对象。

对于 MasterClass 来说，我们希望它可以具有绘图功能，能够将串口接收到的传感器数据动态绘制曲线，这里我们借助 PyQtGraph 库来完成，PyQtGraph 是纯 Python 图形 GUI 库，它充分利用 PyQt 和 PtSide 的高质量的图形表现水平和 NumPy 的快速科学计算与处理能力，在数学、科学和工程领域都有广泛的应用。

**PyQtGraph 相比于 matplotlib 更加适合于数据采集和分析应用。**

我们使用如下两条语句完成 PyQtGraph 库和其依赖库 PyQt5 的安装：

**pip install pyqtgraph  **

**pip install PyQt5  **

**pip install numpy**

这里，我们首先定义一个绘图类及其方法，示例代码如下：

```python
class PlotClass:
    _# 绘图类初始化_
    def __init__(self,wintitle:str="Basic plotting examples",plottitle:str="Updating plot",width:int=1000,height:int=600):
        _# Qt应用实例对象_
        self.app        = None
        _# 窗口对象_
        self.win        = None
        _# 设置窗口标题_
        self.title      = wintitle
        _# 设置窗口尺寸_
        self.width      = width
        self.height     = height
        _# 传感器数据_
        self.value      = 0
        _# 计数变量_
        self.__count    = 0
        _# 传感器数据缓存列表_
        self.valuelist  = []
        _# 绘图曲线_
        self.curve      = None
        _# 图层对象_
        self.plotob     = None
        _# 图层标题_
        self.plottitle  = plottitle
        _# Qt应用和窗口初始化_
        self.appinit()

    _# 应用程序初始化_
    def appinit(self):
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
        self.curve = self.plotob.plot(pen='y')

    _# 接收数据_
    def GetValue(self,value):
        self.value = value
        _# 加入数据缓存列表_
        self.valuelist.append(value)

    _# 更新曲线数据_
    def DataUpdate(self):
        _# 模拟绘制正弦曲线_
        _# 计数变量更新_
        self.__count = self.__count + 0.1
        self.value = np.sin(self.__count)
        self.GetValue(self.value)
        _# 将数据转化为图形_
        self.curve.setData(self.valuelist)

    _# 设置定时更新_
    def SetUpdate(self,time:int = 100):
        _# 创建定时器对象_
        timer = QtCore.QTimer()
        _# 定时器结束，触发DataUpdate方法_
        timer.timeout.connect(self.DataUpdate)
        _# 启动定时器_
        timer.start(time)
        _# 进入主事件循环并等待_
        pg.exec()

if __name__ == '__main__':
    _# 创建PlotClass对象，自动完成初始化_
    p = PlotClass()
    _# 设置定时更新任务_
    p.SetUpdate()
```

这里，我们定义了如下属性和方法：

| **属性/方法**                  | **作用**                                     |
| ------------------------------ | -------------------------------------------- |
| wintitle                       | 窗口标题                                     |
| plottitle                      | 图层标题                                     |
| width                          | 窗口宽度                                     |
| height                         | 窗口高度                                     |
| app                            | Qt 应用实例对象                              |
| win                            | 窗口对象                                     |
| value                          | 传感器数据                                   |
| __count                        | 计数变量                                     |
| valuelist                      | 传感器数据缓存列表                           |
| curve                          | 绘图曲线                                     |
| plotob                         | 图层对象                                     |
| appinit(self)                  | 用于 qt 应用程序初始化，添加窗口、曲线和图层 |
| GetValue(self,value)           | 用于接收传感器数据，加入缓存列表             |
| DataUpdate(self)               | 用于定时进行曲线更新,这里模拟绘制正弦曲线    |
| SetUpdate(self,time:int = 100) | 设置定时更新任务                             |

首先，我们在__init__和 appinit()中完成初始化操作，包括对类内属性、Qt 应用实例、窗口图层及曲线的初始化：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240717013120089-1823526728.png)


接着我们在 SetUpdate 方法中创建定时器对象并设置定时任务，当设置的延时时间到达时，调用 DataUpdate 方法，在其中对数据曲线并进行更新，示例中，我们利用__count 属性每次递增，使得其绘制正弦曲线。

同时设置进入主事件循环并等待吗，以使得 Qt 界面保持显示：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240717013129522-1389331219.png)


这里，我们在主函数中创建对象并启动运行定时刷新曲线，如下为结果：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240717013136027-1685056420.png)


这里，我们想要使得 MasterClass 类同时具备串口收发和绘图功能，因此要用到多重继承，MasterClass 类同时继承于 SerialClass 和 PlotClass。通过多重继承，一个子类就可以同时获得多个父类的所有功能。

示例代码如下：

```python
class MasterClass(SerialClass,PlotClass):
    _# 类变量：_
    _#   BUSY_STATE  -忙碌状态-0_
    _#   IDLE_STATE  -空闲状态-1_
    BUSY_STATE, IDLE_STATE = (0, 1)

    _# 类变量：_
    _#   START_CMD       - 开启命令      -0_
    _#   STOP_CMD        - 关闭命令      -1_
    _#   SENDID_CMD      - 发送ID命令    -2_
    _#   SENDVALUE_CMD   - 发送数据命令   -3_
    START_CMD, STOP_CMD, SENDID_CMD, SENDVALUE_CMD = (0, 1, 2, 3)

    _# 类的初始化_
    def __init__(self,state:int = IDLE_STATE,port:str = "COM17",wintitle:str="Basic plotting examples",plottitle:str="Updating plot",width:int=1000,height:int=600):
        _# 分别调用不同父类的__init__方法_
        SerialClass.__init__(self,port)
        PlotClass.__init__(self,wintitle,plottitle,width,height)
        self.valuequeue   = queue.Queue(10)
        self.__masterstatue = state
        _# 初始化完成的标志量_
        self.INIT_FLAG = False

    @classmethod
    def MasterInfo(cls):
        print("Info : "+str(cls))

    _# 开启主机_
    def StartMaster(self):
        super().OpenSerial()
        logging.info("START MASTER :"+self.dev.port)

    _# 停止主机_
    def StopMaster(self):
        super().CloseSerial()
        logging.info("CLOSE MASTER :" + self.dev.port)

    _# 接收传感器ID号_
    def RecvSensorID(self):
        sensorid = super().ReadSerial()
        logging.info("MASTER RECIEVE ID : " + str(sensorid))
        return sensorid

    _# 接收传感器数据_
    def RecvSensorValue(self):
        data = super().ReadSerial()
        logging.info("MASTER RECIEVE DATA : " + str(data))
        self.valuequeue.put(data)
        return data

    _# 主机发送命令_
    def SendSensorCMD(self,cmd):
        super().WriteSerial(str(cmd))
        logging.info("MASTER SEND CMD : " + str(cmd))

    _# 主机返回工作状态-_
    def RetMasterStatue(self):
        return self.__masterstatue

    _# 重写父类的DataUpdate方法_
    def DataUpdate(self):
        self.SendSensorCMD(self.SENDVALUE_CMD)
        self.value = self.RecvSensorValue()
        self.WriteSerial("Recv:"+str(self.value))
        self.GetValue(self.value)
        self.curve.setData(self.valuelist)

if __name__ == "__main__":
    _# 初始化对象_
    m = MasterClass(state = MasterClass.IDLE_STATE,
                    port = "COM17",
                    wintitle = "Basic plotting examples",
                    plottitle = "Updating plot",
                    width = 1000,
                    height = 600)
    m.StartMaster()
    m.SendSensorCMD(MasterClass.SENDID_CMD)
    m.RecvSensorID()
    _# 设置定时更新任务_
    m.SetUpdate()
```

我们可以看到两个父类和子类关系及不同类的属性和方法如下：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240717013150737-1922570630.png)


首先，我们使用如下语句表明 MasterClass 继承于 SerialClass 和 PlotClass：

```python
class MasterClass(SerialClass,PlotClass):
```

接着，我们在 MasterClass 的初始化方法中分别调用不同父类的__init__方法：

```python
SerialClass.__init__(self,port)
        PlotClass.__init__(self,wintitle,plottitle,width,height)
```

同时我们在 MasterClass 中重写父类的 DataUpdate 方法，首先发送查询数据指令，接着等待接收数据，完成数据接收后发送接收到的数据并存入数据缓存列表，在设置定时任务后，定时更新曲线。

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240717013201286-1475359441.png)


如下为运行效果，我们可以看到接收到数据后正常完成曲线的更新：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240717013208322-2070090916.png)


在测试过程中，我们可以看到 Qt 窗口会有无法响应的情况出现，这是由于界面主线程是单线程，如果在 UI 主线程中执行耗时操作，例如点击按钮，响应函数去数据库查询数据，数据量比较大时，查询需要几秒钟甚至几十秒的时间，如果 UI 主线程一直等待响应函数返回，阻塞在响应函数内部，就无法响应界面的其他消息或者事件，界面就会卡死，无响应。这种情况可以利用 Python 的多线程或多进程得以避免，这个情况将在后面讲到。

可以看到，在创建包含两组完全不同行为的对象的情况下，两个类接口不同，子类完全可以正常运行，但是如果两个类的接口有重叠，同时继承就可能造成混乱。最好的方法就是避免这种情况，重新分析系统，看看是否能够去掉多重继承关系并用其他的关联或组合设计替代。

同时切记，尽量不要在子类的初始化方法中手动调用父类对象的初始化方法，会导致导致菱形继承无法被正确处理，尽量使用 Python 内置的 super() 函数，并且为 Python 类规定了标准的方法解析顺序 MRO 。使用 super() 函数初始化父类可以确保菱形继承体系中的共同超类只初始化一次。MRO 则可以确定超类之间的初始化顺序。

关于多重继承中调用同名方法时的具体情况和调用顺序可以查看如下链接：

<u>[https://pythonhowto.readthedocs.io/zh-cn/latest/object.html#id29](https://pythonhowto.readthedocs.io/zh-cn/latest/object.html#id29)</u>

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240717013220458-1617178790.png)

