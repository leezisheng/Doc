# 全网最适合入门的面向对象编程教程：20 类和对象的 Python 实现-组合关系的实现与 CSV 文件保存

# 摘要：

本文主要介绍了在使用 Python 面向对象编程时，如何实现组合关系，同时对比了组合关系和继承关系的优缺点，并讲解了如何通过 csv 模块来保存 Python 接收/生成的数据。

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

前面讲了面向类与对象的继承，知道了继承是一种什么“是”什么的关系。然而类与类之间还有另一种关系，这就是组合。**组合是将几个对象收集在一起生成一个新对象的行为。当一个对象是另外一个对象的一部分时，组合通常是不错的选择。**

例如，汽车是由发动机、传动装置、启动装置、车前灯、挡风玻璃以及其他部件组成的，发动机又是由活塞、曲柄轴和阀门等组合而成的。**汽车是发动机等多个元器件的抽象，而发动机是活塞等元器件的抽象，二者处于不同的层次而又有彼此交互的接口，组合是提供不同抽象层的好办法。**汽车对象可以提供司机所需要的接口，同时也能够获取内在组成部分，从而为机械师提供适合操作的深层抽象。当然，如果机械师需要更多信息来诊断问题或调整发动机，这些组成部分也可以进一步被细分。

总的来说，组合就是**让不同的类混合并且加入其他类中来增加功能和代码重用性**，这种适用于**由多个小类组成一个大类的情况**，并且不需要对小类进行太多修改。在前面示例中，我们实现了主机的串口收发和绘图功能，在实际应用中，我们往往需要将传感器数据存储到文件中，以便后续的查看和处理，很明显前面的传感器数据为一维的时间序列数据，**适合存储为表格类型（即列标题为索引和值），我们通常将该类数据保存为 csv 格式文件，csv 是一种字符串文件的格式，它组织数据的语法就是在字符串之间加分隔符（行与行之间是加换行符，同行字符之间是加逗号分隔）**，可以用任意的文本编辑器打开（如记事本），也可以用 Excel 打开，还可以通过 Excel 把文件另存为 csv 格式。**用 csv 格式存储数据，读写比较方便，易于实现，文件也会比 Excel 文件小。**但 csv 文件缺少 Excel 文件本身的很多功能，如不能嵌入图像和图表，不能生成公式等等。

操作 csv 文件我们需要借助 csv 模块，python 自带 csv 模块，不需要我们使用 pip 安装，我们可以点击如下链接查看 csv 模块使用方法：

<u>[https://docs.python.org/zh-cn/3.13/library/csv.html#csv.writer](https://docs.python.org/zh-cn/3.13/library/csv.html#csv.writer)</u>

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240719014107879-1298921761.png)


这里，我们首先定义一个 FileIOClass 类，其中具有初始化方法、写入传感器数据到文件方法和关闭文件方法，示例代码如下：

```python
import csv
_# 使用typing模块提供的复合注解功能_
from typing import List

class FileIOClass:
    def __init__(self,path:str="G:\\Python面向对象编程\\Demo\\file.csv"):
        '''
        初始化csv文件和列标题
        :param path: 文件路径和文件名
        '''
        self.path   = path
        _# path为输出路径和文件名，newline=''是为了不出现空行_
        self.csvFile = open(path, "w+", newline='')
        _# rowname为列名，index-索引，data-数据_
        self.rowname = ['index', 'data']
        _# 返回一个writer对象，将用户的数据在给定的文件型对象上转换为带分隔符的字符串_
        self.writer = csv.writer(self.csvFile)
        _# 写入csv文件的列标题_
        self.writer.writerow( self.rowname)

    def WriteFile(self,index:List[int],data:List[int])->None:
        '''
        :param index: 传感器索引列表
        :param data:  传感器数据列表
        :return:
        '''
        writedatalist = []
        for i in range(len(data)):
            writedatalist.append([index[i],data[i]])
            _# 将列表中的每个元素将被写入CSV文件的一列中_
            self.writer.writerow(writedatalist[i])

    def CloseFile(self)->None:
        '''
        关闭文件
        :return: None
        '''
        self.csvFile.close()
```

这里，在初始化方法中，我们需要传入文件保存路径。之后创建一个 writer 对象，将用户的数据在给定的文件型对象上转换为带分隔符的字符串，同时写入 csv 文件的列标题。在 WriteFile 方法中传入数据的索引列表用于表示数据的先后顺序，之后是数据列表（这里的类型注解需要使用 typing 模块提供的复合注解功能），并循环将每个元素将被写入 CSV 文件的一列中，最后定义了文件的关闭方法。

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240719014121230-1947128857.png)


在主函数中，我们创建 FileIOClass 对象，写入模拟传感器数据后关闭文件，以下为示例代码和运行效果：

```python
if __name__ == '__main__':
    path  = "G:\\Python面向对象编程\\Demo\\file.csv"
    data  = [11,42,307,46,55,61,78,80,19,11]
    index = [count for count in range(len(data))]

    file = FileIOClass(path)
    file.WriteFile(index,data)
    file.CloseFile()
```

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240719014133831-1435534471.png)


这里，我们可以直接在 MasterClass 类的初始化中创建 FileIOClass 类的实例化对象来实现组合。代码如下：

```python
_# 文件保存路径_
        self.savepath = "G:\\Python面向对象编程\\Demo\\file.csv"
        _# 创建FileIOClass类的实例化对象_
        self.fileio = FileIOClass(self.savepath)
```

通过 sourcetrail，我们可以清晰看到类之间的组合与继承关系：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240719014141158-2048293300.png)

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240719014146706-296904900.png)


在主程序中，我们在主机接收 10 次数据后，将数据保存到 file.csv 中：

```python
if __name__ == "__main__":
_    # 创建数据列表_
    datalist = []
    m = MasterClass(state = MasterClass.IDLE_STATE,
                    port = "COM17",
                    wintitle = "Basic plotting examples",
                    plottitle = "Updating plot",
                    width = 1000,
                    height = 600)
    m.StartMaster()
    m.SendSensorCMD(MasterClass.SENDID_CMD)
    m.RecvSensorID()

    # 循环10次接收数据
    for i in range(10):
        m.SendSensorCMD(MasterClass.SENDVALUE_CMD)
        value = m.RecvSensorValue()
        datalist.append(value)
    indexlist = [count for count in range(len(datalist))]

    # 写入数据
    m.fileio.WriteFile(indexlist,datalist)
    m.fileio.CloseFile()
```

如下为运行效果：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240719014158746-2124587297.png)


目前，整个文件的完整代码如下，可以看到单单是这么一个简单程序就有了三百多行，对于代码查找修改来讲，非常不便。同时我们注意到，几个不同类之间似乎功能并不相同，不应该放到一个文件中。下一节我们将会说如何利用 Python 中的模块和包来组织我们的代码。

完整代码如下：

```python
_# 串口相关库_
import serial
import serial.tools.list_ports
_# 队列相关_
import queue
import random
_# 日志输出相关库_
import logging
_# 曲线作图相关库_
import pyqtgraph as pg
import numpy as np
from pyqtgraph.Qt import QtCore
_# 文件读写相关库_
import csv
_# 使用typing模块提供的复合注解功能_
from typing import List
import time


_# # 设置日志输出级别_
_# logging.basicConfig(level=logging.DEBUG)_
_# 在配置下日志输出目标文件和日志格式_
LOG_FORMAT="%(asctime)s-%(levelname)s-%(message)s"
logging.basicConfig(filename='my.log',level=logging.DEBUG,format=LOG_FORMAT)

class SerialClass:
    _# 限定SerialClass对象只能绑定以下属性_
    __slots__ = ('dev','_SerialClass__devstate')
    _# 初始化_
    _# 使用默认参数_
    def __init__(self,
                 devport:str     = "COM17",
                 devbaudrate:int = 115200,
                 devbytesize:int = serial.EIGHTBITS,
                 devparity  :str = serial.PARITY_NONE,
                 devstopbits:int = serial.STOPBITS_ONE):
        _# 直接传入serial.Serial()类_
        self.dev             = serial.Serial()
        self.dev.port        = devport
        self.dev.baudrate    = devbaudrate
        self.dev.bytesize    = devbytesize
        self.dev.parity      = devparity
        self.dev.stopbits    = devstopbits
        _# 表示串口设备的状态-打开或者关闭_
        _# 初始化时为关闭_
        self.__devstate      = False

        print("SerialClass init")
        logging.info("SerialClass init")

    _# 取值方法_
    @property
    def devstate(self):
        return self.__devstate

    _# 打开串口_
    def OpenSerial(self):
        print("SerialClass-OpenSerial")
        logging.info("SerialClass-OpenSerial")
        self.dev.open()
        self.__devstate = True

    _# 关闭串口_
    def CloseSerial(self):
        print("SerialClass-CloseSerial")
        logging.info("SerialClass-CloseSerial")
        self.dev.close()
        self.__devstate = False

    _# 串口读取_
    def ReadSerial(self):
        print("SerialClass-ReadSerial")
        logging.info("SerialClass-ReadSerial")
        if self.__devstate:
            _# 阻塞方式读取_
            _# 按行读取_
            data = self.dev.readline()
            _# 收到为二进制数据_
            _# 用utf-8编码将二进制数据解码为unicode字符串_
            _# 字符串转为int类型_
            data = int(data.decode('utf-8', 'replace'))
            return data

    _# 串口写入_
    def WriteSerial(self,write_data):
        print("SerialClass-WriteSerial")
        logging.info("SerialClass-WriteSerial")
        if self.__devstate:
            _# 非阻塞方式写入_
            self.dev.write(write_data.encode())
            _# 输出换行符_
            _# write的输入参数必须是bytes 格式_
            _# 字符串数据需要encode()函数将其编码为二进制数据，然后才可以顺利发送_
            _# \r\n表示换行回车_
            self.dev.write('\r\n'.encode())

    def RetSerialState(self):
        if self.dev.isOpen():
            self.__devstate = True
            return True
        else:
            self.__devstate = False
            return False

class PlotClass:
    _# 绘图类初始化_
    def __init__(self,wintitle:str="Basic plotting examples",plottitle:str="Updating plot",width:int=1000,height:int=600):
        '''
        用于初始化Plot类
        :param wintitle:  窗口标题
        :param plottitle: 图层标题
        :param width:     窗口宽度
        :param height:    窗口高度
        '''
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
        _# 定时器对象_
        self.timer = QtCore.QTimer()
        _# 定时时间_
        self.time  = 0
        _# Qt应用和窗口初始化_
        self.appinit()

        print("PLOT INIT SUCCESS")
        logging.info("PLOT INIT SUCCESS")

    _# 应用程序初始化_
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
        self.curve = self.plotob.plot(pen='y')

    _# 接收数据_
    def GetValue(self,value):
        '''
        用于接收传感器数据，加入缓存列表
        :param value: 传感器数据
        :return: None
        '''
        self.value = value
        _# 加入数据缓存列表_
        self.valuelist.append(value)
        print("PLOT RECV DATA : "+str(self.value))
        logging.info("PLOT RECV DATA : "+str(self.value))

    _# 更新曲线数据_
    def DataUpdate(self):
        '''
        用于定时进行曲线更新,这里模拟绘制正弦曲线
        :return: None
        '''
        _# 模拟绘制正弦曲线_
        _# 计数变量更新_
        self.__count = self.__count + 0.1
        self.value = np.sin(self.__count)
        self.GetValue(self.value)
        _# 将数据转化为图形_
        self.curve.setData(self.valuelist)

    _# 设置定时更新_
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
        print("PLOT SET UPDATA")
        logging.info("PLOT SET UPDATA")
        _# 进入主事件循环并等待_
        pg.exec()

class FileIOClass:
    def __init__(self,path:str="G:\\Python面向对象编程\\Demo\\file.csv"):
        '''
        初始化csv文件和列标题
        :param path: 文件路径和文件名
        '''
        self.path   = path
        _# path为输出路径和文件名，newline=''是为了不出现空行_
        self.csvFile = open(path, "w+", newline='')
        _# rowname为列名，index-索引，data-数据_
        self.rowname = ['index', 'data']
        _# 返回一个writer对象，将用户的数据在给定的文件型对象上转换为带分隔符的字符串_
        self.writer = csv.writer(self.csvFile)
        _# 写入csv文件的列标题_
        self.writer.writerow(self.rowname)

    def WriteFile(self,index:List[int],data:List[int])->None:
        '''
        :param index: 传感器索引列表
        :param data:  传感器数据列表
        :return:
        '''
        writedatalist = []
        for i in range(len(data)):
            writedatalist.append([index[i],data[i]])
            _# 将列表中的每个元素将被写入CSV文件的一列中_
            self.writer.writerow(writedatalist[i])

    def CloseFile(self)->None:
        '''
        关闭文件
        :return: None
        '''
        self.csvFile.close()

class SensorClass(SerialClass):
    _# 类变量：_
    _#   RESPOND_MODE -响应模式-0_
    _#   LOOP_MODE    -循环模式-1_
    RESPOND_MODE,LOOP_MODE = (0,1)
    _# 类变量：_
    _#   START_CMD       - 开启命令      -0_
    _#   STOP_CMD        - 关闭命令      -1_
    _#   SENDID_CMD      - 发送ID命令    -2_
    _#   SENDVALUE_CMD   - 发送数据命令   -3_
    START_CMD,STOP_CMD,SENDID_CMD,SENDVALUE_CMD = (0,1,2,3)

    _# 类的初始化_
    def __init__(self,port:str = "COM11",id:int = 0,state:int = RESPOND_MODE):
        _# 调用父类的初始化方法，super() 函数将父类和子类连接_
        super().__init__(port)
        self.sensorvalue = 0
        self.sensorid    = id
        self.sensorstate = state
        print("Sensor Init")
        logging.info("Sensor Init")

    @staticmethod
    _# 判断传感器ID号是否正确：这里判断ID号是否在0到99之间_
    def IsTrueID(id:int = 0):
        if id >= 0 and id <= 99:
            print("Sensor ID True")
            return True
        else:
            print("Sensor ID False")
            return False

    _# 传感器上电初始化_
    def InitSensor(self):
        _# 传感器上电初始化工作_
        _# 同时输出ID号以及状态_
        print("Sensor %d Init complete : %d"%(self.sensorid,self.sensorstate))
        logging.info("Sensor %d Init complete : %d"%(self.sensorid,self.sensorstate))

    _# 开启传感器_
    def StartSensor(self):
        super().OpenSerial()
        print("Sensor %d start serial %s "%(self.sensorid,self.dev.port))
        logging.info("Sensor %d start serial %s "%(self.sensorid,self.dev.port))

    _# 停止传感器_
    def StopSensor(self):
        super().CloseSerial()
        print("Sensor %d close serial %s " % (self.sensorid, self.dev.port))
        logging.info("Sensor %d close serial %s " % (self.sensorid, self.dev.port))

    _# 发送传感器ID号_
    def SendSensorID(self):
        super().WriteSerial(str(self.sensorid))
        print("Sensor %d send id "%self.sensorid)
        logging.info("Sensor %d send id "%self.sensorid)

    _# 发送传感器数据_
    def SendSensorValue(self):
        _# 生成[1, 10]内的随机整数_
        data = random.randint(1, 10)
        super().WriteSerial(str(data))
        print("Sensor %d send data  %d" % (self.sensorid,data))
        logging.info("Sensor %d send data  %d" % (self.sensorid,data))

    _# 接收主机指令_
    def RecvMasterCMD(self):
        cmd = super().ReadSerial()
        print("Sensor %d recv cmd %d " % (self.sensorid,cmd))
        logging.info("Sensor %d recv cmd %d " % (self.sensorid,cmd))
        return cmd

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
        _# 文件保存路径_
        self.savepath = "G:\\Python面向对象编程\\Demo\\file.csv"
        _# 创建FileIOClass类的实例化对象_
        self.fileio = FileIOClass(self.savepath)
        print("MASTER INIT SUCCESSS")
        logging.info("MASTER INIT SUCCESSS")

    @classmethod
    def MasterInfo(cls):
        print("Info : "+str(cls))

    _# 开启主机_
    def StartMaster(self):
        super().OpenSerial()
        print("START MASTER :"+self.dev.port)
        logging.info("START MASTER :"+self.dev.port)

    _# 停止主机_
    def StopMaster(self):
        super().CloseSerial()
        print("CLOSE MASTER :" + self.dev.port)
        logging.info("CLOSE MASTER :" + self.dev.port)

    _# 接收传感器ID号_
    def RecvSensorID(self):
        sensorid = super().ReadSerial()
        print("MASTER RECIEVE ID : " + str(sensorid))
        logging.info("MASTER RECIEVE ID : " + str(sensorid))
        return sensorid

    _# 接收传感器数据_
    def RecvSensorValue(self):
        data = super().ReadSerial()
        print("MASTER RECIEVE DATA : " + str(data))
        logging.info("MASTER RECIEVE DATA : " + str(data))
        self.valuequeue.put(data)
        return data

    _# 主机发送命令_
    def SendSensorCMD(self,cmd):
        super().WriteSerial(str(cmd))
        print("MASTER SEND CMD : " + str(cmd))
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
        print("PLOT UPDATA : " + str(self.value))
        logging.info("PLOT UPDATA : " + str(self.value))

class DevClass(SerialClass):
    def __init__(self,port:str = "COM1"):
        super().__init__(port)

    _# 开启设备_
    def StartDev(self):
        super().OpenSerial()
        print("START Dev :" + self.dev.port)

    def ReadSerial(self,byte_size):
        if super().RetSerialState():
            data = self.dev.read(byte_size)
            data = int(data.decode('utf-8', 'replace'))
            return data

_# 判断串口类对象的串口是否开启_
def IsSerialConnected(serialclass):
    return serialclass.RetSerialState()

if __name__ == "__main__":
    _# 创建数据列表_
    datalist = []
    m = MasterClass(state = MasterClass.IDLE_STATE,
                    port = "COM17",
                    wintitle = "Basic plotting examples",
                    plottitle = "Updating plot",
                    width = 1000,
                    height = 600)
    m.StartMaster()
    m.SendSensorCMD(MasterClass.SENDID_CMD)
    m.RecvSensorID()

    _# 循环10次接收数据_
    for i in range(10):
        m.SendSensorCMD(MasterClass.SENDVALUE_CMD)
        value = m.RecvSensorValue()
        datalist.append(value)
    indexlist = [count for count in range(len(datalist))]

    _# 写入数据_
    m.fileio.WriteFile(indexlist,datalist)
    m.fileio.CloseFile()
```

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240719014224753-1923256244.png)

