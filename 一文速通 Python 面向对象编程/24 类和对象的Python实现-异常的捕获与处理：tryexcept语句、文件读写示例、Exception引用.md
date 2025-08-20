# 全网最适合入门的面向对象编程教程：24 类和对象的 Python 实现-异常的捕获与处理：try/except 语句、文件读写示例、Exception 引用

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240724010214135-816068722.png)

# 摘要：

本文主要介绍了在使用 Python 面向对象编程时，如何使用 try/except 语句捕获并处理异常，并辅以 CSV 文件读写为例进行讲解，同时说明了如何对 Exception 对象进行引用。

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

当 Python 脚本发生异常时我们需要捕获处理它，否则程序会终止执行。捕捉异常可以使用 try/except 语句。try/except 语句用来检测 try 语句块中的错误，从而让 except 语句捕获异常信息并处理。

如果你不想在异常发生时结束你的程序，只需在 try 里捕获它。以下为简单的 try....except...else 的语法：

```c
try:
<语句>       
except <名字>：
<语句>
```

**try 语句的工作原理如下：**

- （1）首先，执行 try 子句（try 和 except 关键字之间的（多行）语句）。

- （2）如果没有触发异常，则跳过 except 子句，try 语句执行完毕。

- （3）如果在执行 try 子句时发生了异常，则跳过该子句中剩下的部分。如果异常的类型与 except 关键字后指定的异常相匹配，则会执行 except 子句，然后跳到 try/except 代码块之后继续执行。

- （4）如果发生的异常与 except 子句中指定的异常不匹配，则它会被传递到外层的 try 语句中；如果没有找到处理句柄，则它是一个未处理异常且执行将停止并输出一条错误消息。

示例代码如下：

```c
class SensorClass(SerialClass):  
    ...
    _# 类的初始化_
    def __init__(self,port:str = "COM11",id:int = 0,state:int = RESPOND_MODE):
        try:
            if id <= 0 or id >= 99:
                _# 触发异常后，后面的代码就不会再执行_
                raise Exception("InvalidIDError:", id)
            _# 调用父类的初始化方法，super() 函数将父类和子类连接_
            super().__init__(port)
            self.sensorvalue = 0
            self.sensorid    = id
            self.sensorstate = state
            print("Sensor Init")
            logging.info("Sensor Init")
        except:
            _# 当发生异常时，输出如下语句，提醒用户重新输入ID号_
            print("Input error ID, Please try id : 0~99") 
         ...
if __name__ == "__main__":
    _# 创建传感器类，ID号为100_
    s = SensorClass(port  = "COM11",id = 100,state = SensorClass.RESPOND_MODE)
```

如下为运行结果：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240725004238275-788349039.png)


以上方式 try-except 语句捕获所有发生的异常。但这不是一个很好的方式，我们不能通过该程序识别出具体的异常信息。因为它捕获所有的异常。

你也可以使用相同的 except 语句来处理多个异常信息，如下所示：

```c
try:
    正常的操作
   ......................
except(Exception1[, Exception2[,...ExceptionN]]):
   发生以上多个异常中的一个，执行这块代码
   ......................
else:
    如果没有异常执行这块代码
```

try 语句可以有多个 except 子句来为不同的异常指定处理程序。 **但最多只有一个处理程序会被执行。处理程序只处理对应的 try 子句中发生的异常，而不处理同一 try 语句内其他处理程序中的异常。**except 子句可以用带圆括号的元组来指定多个异常，例如:

```c
... except (RuntimeError, TypeError, NameError):
...     pass
```

示例代码如下所示，我们在 SensorClass 传感器类的初始化方法中，加入对输入 port 端口号数据类型的检查，如果不是 str 类型，则抛出 TypeError 异常：

```c
def __init__(self,port:str = "COM11",id:int = 0,state:int = RESPOND_MODE):
        try:
            _# 判断输入端口号是否为str类型_
            if type(port) is not str:
                raise TypeError("InvalidPortError:",port)
            _# 判断ID号是否在0~99之间_
            if id <= 0 or id >= 99:
                _# 触发异常后，后面的代码就不会再执行_
                _# 当传递给函数或方法的参数类型不正确或者参数的值不合法时，会引发此异常。_
                raise ValueError("InvalidIDError:",id)

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
        except ValueError:
            _# 当发生异常时，输出如下语句，提醒用户重新输入ID号_
            print("Input error ID, Please try id : 0~99")
```

如下为运行结果，可以看到仅捕获和处理了输入错误 port 类型的异常，而没有捕获和处理输入错误范围的 ID 号的异常：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240725004254188-1699959.png)


除了使用 except 块来处理异常，我们还可以使用 finally 块来执行一些必要的清理操作。无论是否出现异常，finally 块中的代码都会被执行。如果我们需要在代码执行完成之后执行特定的任务（即便是遇到了异常），这将非常有用。一些常见的例子包括：清除打开的数据库连接；关闭打开的文件；向网络发送一次关闭握手。**finally 语句对于我们在 try 中执行 return 语句也非常重要。finally 中的代码仍然会在返回值之前执行。**

例如在 FileIOClass 类中，需要读写 csc 文件，基本流程就是打开了一个 csc 文件，然后读取，写入，最后关闭文件对象。这是一套常规流程，如果我想捕捉代码过程中的异常，又要保证无论是否有异常，最后都必须要关闭文件。这时候就用到 finally，示例代码如下：

```c
class FileIOClass:
    def __init__(self,path:str="G:\\Python面向对象编程\\Demo\\file.csv"):
        '''
        初始化csv文件和列标题
        :param path: 文件路径和文件名
        '''
        self.path   = path
        try:
            _# path为输出路径和文件名，newline=''是为了不出现空行_
            self.csvFile = open(path, "w+", newline='')
            _# rowname为列名，index-索引，data-数据_
            self.rowname = ['index', 'data']
            _# 返回一个writer对象，将用户的数据在给定的文件型对象上转换为带分隔符的字符串_
            self.writer = csv.writer(self.csvFile)
            _# 写入csv文件的列标题_
            self.writer.writerow(self.rowname)
        except (FileNotFoundError, IOError):
            print("Could not open file")
            logging.info("Could not open file")
        except KeyboardInterrupt:
            print("Cancell the file operation")
            logging.info("Cancell the file operation")
        finally:
                self.CloseFile()
```

我们将文件路径改到一个根本不存在的路径下，初始化 FileIOClass 实例对象，

代码如下：

```c
f = FileIOClass(path = "H:\\Python面向对象编程\\Demo\\file.csv")
```

可以看到运行结果中，在发生 IOError 时，运行了 except 中的语句：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240725004305596-1812385373.png)


在第 16 行中：

```c
16        except (FileNotFoundError, IOError):
```

表示只要发生 FileNotFoundError 或 IOError 中任意一个就会执行这块代码。

实际上，我们可以用同样的代码一次处理两个或更多不同的异常。具体格式如下：

```c
except(Exception1[, Exception2[,...ExceptionN]]):
   _# 发生以上多个异常中的一个，执行这块代码_
```

当多种异常同时发生时，我们可以使用如下方式打印出相应异常的类名：

```c
except (FileNotFoundError, IOError) as e:
            print("Could not open file",e.__class__.__name__)
            logging.info("Could not open file")
```

我们再次运行代码：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240725004314755-1222634099.png)


有时，当我们捕获一个异常时，需要用到对 Exception 对象的引用。这通常发生在我们自己定义的有特定参数的异常，此时我们可以使用 as 语句带上参数，作为输出的异常信息参数。示例代码如下：

```c
except (FileNotFoundError, IOError) as e:
            print("Could not open file",e.__class__.__name__)
            print("The exception arguments were", e.args)
            logging.info("Could not open file")
```

运行结果如下，可以看到，在示例中输出参数为错误代码（为 2），表示没有这个文件或者目录。

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240725004322474-2038146046.png)


实际上变量接收的异常值通常包含在异常的语句中。在元组的表单中变量可以接收一个或者多个值。元组通常包含错误字符串，错误数字，错误位置。

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240724010509841-168506076.png)
