# 全网最适合入门的面向对象编程教程：04 类和对象的 Python 实现-为自定义类添加方法（PySerial 库接收串口数据）

# 摘要：

本文我们主要讲解了如何为自定义类添加方法，pyseria 库的基本使用（串口数据收发、serial.Serial 类的属性和方法），VSPDPro 虚拟串口软件使用方法等，并使用自定义的串口类和 PC 主机进行串口数据收发。

# **往期推荐：**

[**学嵌入式的你，还不会面向对象？？！**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483825&idx=1&sn=149aaf3baa6a96703713e554d4a888db&chksm=c0b08a82f7c70394074a24b722a1caddb0ad598a7303e61133216ae61423df0b5bc57a6b82b2&scene=21#wechat_redirect "**学嵌入式的你，还不会面向对象？？！**")

[**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**](https://mp.weixin.qq.com/s/sycnlnMhtFji8q2fYh0MFQ "**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**")

[**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483853&idx=1&sn=c7685237216b8dd1cadf95f3353fde8e&chksm=c0b08afef7c703e8ce7b76958718ebe381220a199fac9e872710ea1cb4f8fc6f93d36d151279&scene=21#wechat_redirect "**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**")

[**全网最适合入门的面向对象编程教程：02 类和对象的 Python 实现-使用 Python 创建类**](https://mp.weixin.qq.com/s/XKpEAGY9WJ7GRFc98E6dcw)

[**全网最适合入门的面向对象编程教程：03 类和对象的 Python 实现-为自定义类添加属性**](https://mp.weixin.qq.com/s/LsNtLbHLNtVBtiQ3eaJnSg)


# **更多精彩内容可看：**

[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483747&idx=1&sn=0e203586516fd6e925085b9c1244dbee&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483719&idx=1&sn=7ece9da65d002fdc3df9539cc43f3a8d&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483671&idx=1&sn=c267a0c6f4ab93d6b6d934bf803b5919&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483774&idx=1&sn=46d57506febe92c1719c8567ebe95269&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483854&idx=1&sn=fd666dc501a0de850abfbd8793abff00&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")

# **文档和代码获取**

可访问如下链接进行对文档下载：

[https://github.com/leezisheng/Doc](https://github.com/leezisheng/Doc)

![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240629020055160-163886993.png)


**本文档主要介绍如何使用 Python 进行面向对象编程，需要读者对 Python 语法和单片机开发具有基本了解。相比其他讲解 Python 面向对象编程的博客或书籍而言，本文档更加详细、侧重于嵌入式上位机应用，以上位机和下位机的常见串口数据收发、数据处理、动态图绘制等为应用实例，同时使用 Sourcetrail 代码软件对代码进行可视化阅读便于读者理解。**

**相关示例代码获取链接如下：**[https://github.com/leezisheng/Python-OOP-Demo](https://github.com/leezisheng/Python-OOP-Demo)

# 正文

可以看到上一小节，我们为 SerialClass 类添加了串口设备名、波特率、数据位等串口相关的属性，但是注意到面向对象编程的重点在于不同对象之间的交互。我们感兴趣的是，触发某些行为可以使属性发生变化或与外界产生交互。在类中定义函数就相当于定义类的方法，回想一下我们在单片机上使用串口时往往进行打开串口、发送数据、接收数据和关闭串口等操作，在 PC 端串口操作与单片机上类似。这里我们先为类添加方法，具体实现先省略，代码如下：

```python
class SerialClass:

    _# 注意：特殊方法“__init__”前后分别有两个下划线！！！_
    def __init__(self,port,baudrate,bytesize,parity,stopbits):
        self.devport        = port
        self.devbaudrate    = baudrate
        self.devbytesize    = bytesize
        self.devparity      = parity
        self.devstopbits    = stopbits

    _# 打开串口_
    def OpenSerial(self):
        _# __TODO:__打开串口方法待完成_
        pass

    _# 关闭串口_
    def CloseSerial(self):
        _# __TODO:__打开串口方法待完成_
        pass

    _# 串口读取_
    def ReadSerial(self):
        _# __TODO:__串口读取方法待完成_
        pass

    _# 串口写入_
    def WriteSerial(self):
        _# __TODO:__串口写入方法待完成_
        pass
```

这时，我们可以利用 dir(obj)方法获得类的对象实例的所有属性和方法名，dir(obj)返回一个 list。我们使用 for 循环打印，代码如下：

```python
_# serdev是SerialClass类的一个实例化对象_
for item in dir(serdev):
    print(item)
```

![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240629020121899-428642547.png)


可以看到，我们已经给串口类添加了具体方法，这里，你可能会问，那这些方法具体该怎么实现呢？难道说要我们调操作系统的驱动函数读取串口、造轮子对数据解析？当然不可能，Python 强大的第三方库什么都有，这不，它来了：

**pyserial，一个实用的串口通信 python 库**

pySerial 是 Python 中用于操作串口的第三方模块，它支持 Windows、Linux、OSX、BSD 等多个平台。如果要使用 pySerial 模块，首先必须保证 Python 版本高于 Python 2.7 或者 Python 3.4。另外，如果你是用的是 Windows 系统，那必须使用 Win7 及以上的版本。

pySerial 的安装很简单，只需要执行一条命令：**pip install pyserial**。安装完成后，只需要在 Python 代码中使用** import serial **语句导入该模块即可。

pySerial 中主要的类就是 class serial.Serial，官方文档说明如下：

![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240629020153133-746226627.png)


常用参数含义如下：

| **参数名称**      | **含义**                                                                                                                                                                                                |
| ----------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **port**          | 定义设备名称                                                                                                                                                                                            |
| **baudrate** | 波特率：波特率是指串口通信中每秒钟传输的符号数，单位是波特（baud）。它决定了数据传输的速度和效率。在串口通信中，收发双方必须使用相同的波特率才能正常通信。典型值为：9600, 19200, 38400, 57600, 115200。 |
| **bytesize** | 数据位：数据位是指在每个数据包中传输的实际数据位数。它表示每个数据包中携带的有效信息量。常见的数据位长度有 5 位、7 位和 8 位。典型值为： FIVEBITS, SIXBITS, SEVENBITS, EIGHTBITS。                      |
| **parity**        | 设置校验位，奇偶校验是一种错误检测方式，用于检查数据传输过程中是否出现错误，可选择偶校验或奇校验。典型值为：PARITY_NONE, PARITY_EVEN, PARITY_ODD PARITY_MARK, PARITY_SPACE。                            |
| **stopbits**      | 停止位是指在数据包的末尾添加的一个额外的位，用于标识一个数据包的结束。停止位的长度可以是 1 位、1.5 位或 2 位。典型值为： STOPBITS_ONE, STOPBITS_ONE_POINT_FIVE, STOPBITS_TWO。                          |
| **timeout**       | 设置读取超时值（以秒为单位）：可选参数为-0、None、x。                                                                                                                                                   |
| **write_timeout** | 设置写入超时值（以秒为单位）：可选参数为-0、None、x。timeout = None：永远等待/直到收到请求的字节数。timeout = 0：非阻塞模式，任何情况下立即返回，返回零个或多个，最多可达请求的字节数。                 |

serial.Serial 类常用方法如下：

| **方法名称**             | **作用**                                             |
| ------------------------ | ---------------------------------------------------- |
| **serial.open()**        | **打开串口**                                         |
| **serial.close()**       | **关闭串口**                                         |
| **serial.isOpen()**      | **判断串口是否打开**                                 |
| **serial.write(data)**   | **写串口数据 data**                                  |
| **serial.read(size)**    | **读串口 size 个数据**                               |
| **serial.flushInput()**  | **清除输入缓冲区数据**                               |
| **serial.flushOutput()** | **中止当前输出并清除输出缓冲区数据**                 |
| **serial.inWaiting()**   | **判断当前接收的数据**                               |
| **serial.readline()**    | **读一行数据，以/n 结束，要是没有/n 就一直读，阻塞** |

接下来看我们的示例代码：

```python
class SerialClass:
    def __init__(self,devport,devbaudrate,devbytesize,devparity,devstopbits):
        _# 直接传入serial.Serial()类_
        self.dev             = serial.Serial()
        self.dev.port        = devport
        self.dev.baudrate    = devbaudrate
        self.dev.bytesize    = devbytesize
        self.dev.parity      = devparity
        self.dev.stopbits    = devstopbits

    def OpenSerial(self):
        self.dev.open()

    def CloseSerial(self):
        self.dev.close()

    def ReadSerial(self):
        _# 非阻塞方式按行读取_
        data = self.dev.readline()
        _# 收到为二进制数据，用utf-8编码将二进制数据解码为unicode字符串_
        _# 字符串转为int类型_
        data = int(data.decode('utf-8', 'replace'))
        return data

    def WriteSerial(self,write_data):
        _# 非阻塞方式写入_
        self.dev.write(write_data.encode())
        _# write的输入参数必须是bytes 格式，_
        _# 字符串数据需要encode()函数将其编码为二进制数据_
        _# \r\n表示换行回车_
        self.dev.write('\r\n'.encode())
```

这里可以看到，为方便讲解，我们直接调用 pyserial 库中函数完成串口的打开关闭和读写等功能：

- 在初始化函数中，我们定义 self.dev 属性为串口设备，用其接收串口对象，相当于 self.dev 就是 serial.Serial 类的实例对象，其后用其他入参给 self.dev 设置串口通信参数，完成串口设备对象的创建；
- 在打开串口和关闭串口函数中，我们使用 self.dev.open()、self.dev.close()语句，相当于直接调用 serial.open()和 serial.close()方法；
- **重点就在收发函数中，需要特别注意的有两点：**

① 串口接收到的是二进制数据，如果接收到的 data 全是英文，就**需要用 utf-8 编码将二进制数据解码为 unicode 字符串。**如果 data 里包含中文，则最好以 gb18030 编码将二进制数据解码为 unicode 字符串。同时，有时候由于带中文，或者由于串口的传输线缆出现接触不良等原因，会产生错误或者乱码，如果直接解码，就会报错，**为了能够顺畅的解码串口打印，避免这种情况发送，decode 的参数里加上“replace”即可。**它实现的作用是，如果解码的过程中遇到错误，会自动以问号?代替解码失败的字符。

② 在串口发送中，pyserial 的文档注明了，**write 的输入参数必须是 bytes 格式的（也就是二进制数据）**，python3 里对字符串和二进制数据流有明确的区分，文本总是 unicode 编码储存的，由 str 类型表示。二进制数据则由 bytes 类型表示，所以**字符串数据需要 encode()函数将其编码为二进制数据，然后才可以顺利发送**。

串口类的方法已然写好，接下来如果进行测试呢？**我们需要买一个单片机和 usb 转 ttl 模块连接电脑，进行串口类的方法测试？（当然不是，开个玩笑）**

在写与单片机通信的上位机软件时，如果使用单片机的串口来实际调试，那么我们至少还需要一个 USB 转串口，这样才能让单片机和电脑串口通讯，接着我们还需要在单片机上运行程序和串口相关的程序，以便我们知道数据传输的状态，这无疑加大的开发的难度。**这里，我们使用虚拟串口软件即可，虚拟串口软件是一种模拟物理串行接口的软件，它完全复制了硬件 COM 接口的功能，并且将被操作系统和串行应用程序识别为真实端口。**现实生活中，虚拟串口用处很多。比如：你的应用程序检测串行输入数据的时候，方便调试。还比如：多个有应用程序之间使用串口通信。

**这里我们使用 VSPDProv6.9 软件，创建虚拟串口，软件下载安装教程点击链接：**<u>[https://www.xue51.com/soft/9349.html](https://www.xue51.com/soft/9349.html)</u>

![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240629020334915-422413140.png)


这里我们创建两个相互连接的串口 com11 和 com17，虚拟的串口需要成对创建，来指明他们的连接关系，就好比各种连接线的公投和母头一样。我们建立好虚拟串口连接以后，就可以使用它们来通讯了，我们可以选择任意一个串口助手软件来与我们写的 python 串口类进行通信。这里，我们选择 xcom 软件进行测试，xcom 软件的安装下载教程可以点击链接：          <u>[https://blog.csdn.net/qq_41573860/article/details/103796913](https://blog.csdn.net/qq_41573860/article/details/103796913)</u>

打开 xcom 软件，我们先进行相关串口参数的配置，具体如下图所示：

![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240629020434992-155817379.png)


此时，我们在 Python 程序中，创建串口设备实例，连接 com17，代码如下：

```python
_# 生成串口类的实例_
serdev = SerialClass(devport     = "COM17",
                     devbaudrate = 115200,
                     devbytesize = serial.EIGHTBITS,    _# 数据位长度为8位_
                     devparity   = serial.PARITY_NONE,  _# 无奇偶校验_
                     devstopbits = serial.STOPBITS_ONE  _# 1位停止位_
                    )
```

我们首先尝试使用 Python 完成串口发送功能，这里我们定义了一个 count 计数变量，初始值为 0，每次发送完成后递增，循环 100 次后关闭串口，代码如下：

```python
serdev.OpenSerial()
count = 0
while True:
    # 必须使用全局变量，不然每次循环都是一个新的count
    # 关于原因可以自行查看变量的生存期和作用域相关知识点
    count = count + 1
    serdev.WriteSerial(str(count))
    if(count == 100):
        break
serdev.CloseSerial()
print("device close")
```

运行结果如下：
![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240629020545960-771625459.png)



接下来，我们尝试使用 Python 完成串口接收功能，我们在 xcom 中定时发送，在 Python 中轮询接收并打印接收的数据，这里我们导入 time 库，打印接收时间。time 库是 Python 中处理时间的标准库，是最基础的时间处理库。time 库主要用于计时和获取系统时间，**time.ctime()函数用于获取当前世界统一时间，形式为“星期-月份-当月号-时-分-秒-年份”**。

示例代码和配置如下：

```python
import time
while True:
    data = serdev.ReadSerial()
    print("serdev recieve %d"%data)
    print("recieve time:"+str(time.ctime()))
```

![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240629020644490-683132571.png)


运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240629020721208-522719458.png)

![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240629020735038-394146862.png)
