# 全网最适合入门的面向对象编程教程：27 类和对象的 Python 实现-Python 中异常层级与自定义异常类的实现

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240730004832105-282645280.png)


# 摘要：

本文主要介绍了在使用 Python 进行面向对象编程时，异常的层级和如何使用继承关系完成自定义自己项目中异常类，并以传感器数据采集为例进行讲解。

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

## 异常层级

大部分异常都是 Exception 类的子类，但并非所有异常都是。Exception 类本身实际上继承自 BaseException。事实上，所有异常必须继承 Base Exception 类或是其子类。

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240730004936817-402098011.png)


![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240730004943633-1051245271.png)


有两个关键的异常，SystemExit 和 KeyboardInterrupt，它们直接继承自 BaseException 而不是 Exception：

- SystemExit 异常在程序自然退出时抛出，通常是因为我们在代码中的某处调用了 sys.exit 函数（例如，当用户选择了菜单选项中的退出，或者是单击了窗口中的“关闭”按钮，或者是输入指令关闭服务器）。**设计这个异常的目的是，在程序最终退出之前完成清理工作，而不需要显式地处理（因为清理代码发生在 finally 语句中）。**
- KeyboardInterrupt 异常常见于命令行程序。当用户执行依赖于系统的按键组合（通常是 Ctrl+C）中断程序时会抛出这个异常。这是用户故意中断一个正在运行的程序的标准方法，与 SystemExit 类似，应该以结束程序作为对它的响应。同时，与 SystemExit 类似，处理它应该在 finally 块中完成清理任务。

内置异常的类层级结构如下：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240730004952126-1442131677.png)


当我们仅用 except:从句而不添加任何类型的异常时，将会捕获所有

BaseException 的子类；也就是说将捕获所有异常，包括上述的两个特殊的异常对象。如果你想要捕获所有除了 SystemExit 和 KeyboardInterrupt 之外的其他异常，你应该明确指明捕获 Exception。更进一步，如果你真的想要捕获所有异常，我建议你使用 except BaseException:语法而不是 except:。这样可以告诉其他人你是故意这样做以处理特殊异常的。

## 自定义异常类

在通常情况下，当我们需要在特定情境下触发一个异常时，我们可能会发现并无现成的内置异常对象能够满足我们的需求。然而，值得庆幸的是，创建我们自己的异常类是相当简便的。异常类的命名通常旨在传达发生了何种错误，同时，我们也可以在初始化函数中添加任何所需的参数，以提供更详细的信息。

不论是以直接还是间接的方式，异常都应从 Exception 类派生。异常类可以被定义成能做其他类所能做的任何事，但通常应当保持简单，它往往只提供一些属性，允许相应的异常处理程序提取有关错误的信息。大多数异常命名都以 “Error” 结尾，类似标准异常的命名。

这里，我们定义一个 InvalidIDError 表示传入的传感器 ID 号非法。

同时，在 try 语句块中，用户自定义的异常后执行 except 块语句，变量 e 是用于创建 InvalidIDError 类的实例。示例代码如下：

```python
_# 定义一个ID号非法的异常_
class InvalidIDError(Exception):
    pass

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
        try:
            _# 判断输入端口号是否为str类型_
            if type(port) is not str:
                raise TypeError("InvalidPortError:",port)
            _# 判断ID号是否在0~99之间_
            if id <= 0 or id >= 99:
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
        except TypeError:
            _# 当发生异常时，输出如下语句，提醒用户重新输入端口号_
            print("Input error com, Please try new com number")
        except InvalidIDError as e:
            _# 当发生异常时，输出如下语句，提醒用户重新输入ID号_
            print("Input error ID, Please try id : 0~99")
            print(e.args)
```

运行代码结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240730005007623-1735906517.png)


对于 InvalidIDError 类而言，**我们可以给异常传入任意数量的参数，通常用一个字符串信息，但是任何可能用于后面异常处理的对象都是可以的。**

**Exception.__init__方法设计成接收任意参数并将它们作为元组保存在一个名为 args 的属性中。这使得我们可以更容易地定义新的异常，而不需要重写 init 方法。**

当然，如需自定义初始化函数，这是完全可行的做法，我们可以这么做。

举个例子，在接收传感器数据中，有时传感器数据会离实际数据偏差过大。我们在 MasterClass 主机类的 RecvSensorValue 接收传感器数据方法中，可以设计一个 InvalidSensorValueError 异常类，在该异常类的初始化函数中接收当前获取的传感器数值和设定的传感器数据阈值为参数。此外，它还有一个方法用于计算这次传感器数值与设定阈值间差值的方法。示例代码如下：

```python
_# 表示传感器数据过高的异常_
class InvalidSensorValueError(Exception):
    def __init__(self,recvvalue,setvalue):
        super().__init__("Receive Sensor Value is too high")
        self.recvvalue = recvvalue
        self.setvalue = setvalue
    _# 计算接收数据和设定数据的误差值_
    def cal_offset(self):
        offset = self.setvalue - self.recvvalue
        return offset

class MasterClass(SerialClass,PlotClass):
    ...
    _# 接收传感器数据_
    def RecvSensorValue(self):

        try:
            _# 设定的阈值_
            setvalue = 99
            data = super().ReadSerial()

            _# 如果接收的传感器数据大于阈值_
            if data >= setvalue:
                raise InvalidSensorValueError(data,setvalue)

            print("MASTER RECIEVE DATA : " + str(data))
            logging.info("MASTER RECIEVE DATA : " + str(data))
            self.valuequeue.put(data)
        except InvalidSensorValueError as e:
            print("invalid sensor value",e.args)
            print("value offset is : ",e.cal_offset())
        return data 
    ...
if __name__ == "__main__":
    _# 创建主机类_
    m = MasterClass()
    m.StartMaster()
    m.RecvSensorValue()
```

运行代码，结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240730005018697-989998729.png)


有许多原因值得我们考虑如何定义自己的异常。**这样做有助于向异常中添加信息或以其他形式记录日志。然而，自定义异常的真正优势在于，它们能够创建出供他人使用的框架、库或 API。**在此过程中，我们必须注意确保我们编写的代码所抛出的异常对于客户端程序员来说是合理的。他们应该能够轻松地处理这些异常，并清楚地描述当前的情况。同时，客户端程序员应能轻松地看出如何修复这些错误（如果这导致他们的代码中出现错误）或者处理这些异常（如果是他们需要了解的情况）。这不仅要求我们确保异常处理的清晰度和一致性，同时也需考虑到程序的整体可读性和维护性。

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240730005024357-161124694.png)

