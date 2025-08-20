# 全网最适合入门的面向对象编程教程：50 Python 函数方法与接口-接口和抽象基类

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240825003614492-408022634.png)

# 摘要：

在 Python 中，接口和抽象基类（Abstract Base Classes, ABCs）都用于定义类的结构和强制子类实现特定的方法，Python 没有内建的接口机制，但可以通过抽象基类（ABC）来模拟接口的行为。

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

## 1. 接口

### 1.1 接口的概念

1994 年，GoF 在其经典之作《设计模式》中，提出了一个至关重要的编程原则，即**“基于接口编程，而非面向实现编程”**。这一原则的英文原句为“Program to an interface, not an implementation”。在此，**所谓的“接口”，并非专指某一特定编程语言的接口定义，而是一种跨语言的概念。**它代表了开发者向使用者提供的一组功能列表，对这些功能的理解对于编程实践至关重要。简而言之，**接口定义了程序应完成的任务，而不涉及具体的实现细节。**这一原则对于提升代码的可扩展性、可维护性和灵活性具有深远影响。

通过定义接口，我们可以在实现具体功能的函数发生问题时（可能是用的没有授权的盗版模块，被人家发现了、起诉了；也可能是库的版本变了，某个重要的函数改名了/取消了）来减少代码的改动量，**通过接口和实现相分离的模式，封装不稳定的实现，暴露稳定的接口。**上下游系统在使用我们开发的功能时，只需要使用接口中声明的函数列表，这样当实现发生变化的时候，上游系统的代码基本上不需要做改动，以此来降低耦合性，提高扩展性。

同时，通过定义接口将系统分成多个小模块，每个模块只需实现自己所需的接口，而不需要关心其他模块的实现细节。这样在与他人协作时，我们只需要修改自己实现该接口的模块，而不需要修改其他模块。

### 1.2 接口的实现

常见的面向对象语言通常在类的接口和实现之间有明确的区分。例如，一些语言提供明确的 interface 关键字，用于定义类必须包含的方法，但是不需要实现。在这样的环境下，抽象类提供一个接口，以及众多方法中某几个的具体实现。任何类可以明确声明它实现自某个接口。

与 Java、Go 和 C++ 这些语言相比，Python 的接口设计方法有些不同。这些语言都提供了一个 interface 关键字来定义接口，而在 Python 中，却没有提供这个关键字。Python 在另一个方面与其他语言有明显的区别，python 并不要求实现接口的类来定义接口的所有抽象方法。

## 2. 使用类的继承实现接口

这里，我们首先定义一个数据处理类的接口，声明该类需要具有数据滤波、计算最大值、计算最小值和傅里叶变换的方法。同时定义了在初始化的过程中，需要接收哪些参数，如数据列表、滤波器点数（以平均值滤波为例，对多少个点计算平均值）等。

示例代码如下：

```python
_# 使用typing模块提供的复合注解功能_
from typing import List

_# 定义数据处理接口_
class DateProcessInterface(object):
    def __init__(self,DateList:List[int],FilterLength:int):
        '''
        初始化方法
        :param DateList: 数据列表
        :param FilterLength: 对多少个点做数据滤波
        
        '''
        pass
    def DateFilter(self)->List:
        '''
        数据滤波
        :return: List
        '''
        pass
    def DateCalMax(self)->int:
        '''
        计算数据最大值
        :return: int
        '''
        pass
    def DateCalMin(self)->int:
        '''
        计算最小值
        :return: int
        '''
        pass
```

在定义该接口的过程中，虽然没有实现具体操作，但是我们主要关心的是该接口类规定了数据处理的一般方法，也可以看作规范，就是我们首先会对数据进行滤波等预处理，然后计算一些时域特征进行分析。DateProcessInterface 实际上就是标准 python 的 class，不过因为形似接口所以可以将这个类看做一个接口。

为了使用接口，首先创建一个具体类来继承于 DateProcessInterface，也就是这个类是接口类的子类，提供了接口抽象方法的具体实现。

示例代码如下，这里我们需要引入 math 库去使用 sin 函数，引入 random 库生成随机数序列来模拟噪声，引入 matplotlib 库去绘图，matplotlib 库需要使用 conda 或者 pip 命令去安装：

```python
import math
import matplotlib.pyplot as plt
import random

_# 创建一个具体类来继承于DateProcessInterface_
class DateProcessClass(DateProcessInterface):
    def __init__(self,DateList:List[int],FilterLength:int):
        self.DateList       = DateList
        self.FilterLength   = FilterLength
        self.TempList       = [0] * (self.FilterLength)
    def DateFilter(self)->List:
        _# 遍历DateList_
        for index,value in enumerate(self.DateList):
            _# 把每个值都当成传入的新的传感器的值_
            NowValue = value
            _# 表示列表求和的变量_
            sum = 0
            for i in range(self.FilterLength-1):
                _# 实现列表的移位操作_
                self.TempList[i] = self.TempList[i + 1]
                _# 实现列表求和_
                sum += self.TempList[i]
            self.TempList[self.FilterLength-1] = NowValue
            sum += self.TempList[self.FilterLength - 1]
            _# 求平均值_
            average = sum / self.FilterLength
            _# 将计算得到的平均值替换原始值_
            self.DateList[index] = average
        _# 计算完成后将TempList中元素清零_
        self.TempList = [0] * (self.FilterLength)
        return self.DateList
    def DateCalMax(self)->int:
        max_value = max(self.DateList)
        return int(max_value)
    def DateCalMin(self)->int:
        min_value = min(self.DateList)
        return int(min_value)

_# 创建l的索引列表，主要提供给plot函数作为x轴坐标_
index = [x for x in range(0,100)]
_# 生成一个正弦序列_
originalsignal = [math.sin(x)*10 for x in range(0,100)]
_# 生成随机数序列，模拟噪声_
noise = [random.uniform(0, 5) for x in range(0,100)]
_# 将两个列表中的元素相加_
signal = [x+y for x,y in zip(originalsignal,noise) ]
_# 创建DateProcessClass类，传入signal.copy()_
_# 通过创建signal的拷贝序列，从而不改变l的原始数据_
s = DateProcessClass(signal.copy(),10)
_# 进行数据滤波_
filtersignal = s.DateFilter()
_# 曲线绘图_
plt.plot(index,signal,'b')
plt.plot(index,filtersignal,'r')
_# 显示图像_
plt.show()
_# 打印信号最大值_
print("Signal Max value:",s.DateCalMax())
_# 打印信号最小值_
print("Signal Min value:",s.DateCalMin())
```

我们来看一下运行效果，可以看到我们对原始数据使用 5 点的滑动平均滤波的效果（蓝色是原始波形、红色是滤波后波形）：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240920003330156-1161338817.png)

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240920003336660-199003915.png)


为了防止有人直接从我们的接口类中实例化对象，我们可以使用如下代码，在直接调用接口中方法时抛出 NotImplementedError 异常：

```python
_# 定义数据处理接口_
class DateProcessInterface(object):
    def __init__(self,DateList:List[int],FilterLength:int):
        '''
        初始化方法
        :param DateList: 数据列表
        :param FilterLength: 对多少个点做数据滤波
        '''
        raise NotImplementedError
```

## 3. 使用抽象基类(ABC 类)实现接口

在 Python 编程中，抽象基类（Abstract Base Classes，简称 ABC）是一种非常有用的工具，用于定义接口和规范类的行为。抽象基类提供了一种机制，可以确保子类实现了特定的方法和属性。

抽象基类，也是类，需要使用 class 关键字进行定义，它与普通类不同之处有两点：

- **抽象基类不能被实例化，只能被继承；**
- **子类必须实现抽象基类里定义的抽象方法，否则不能被实例化。**

在 Python 中，可以使用 abc 模块来定义抽象基类。以上的 DateProcessInterface 使用抽象基类时，示例代码如下：

```python
from abc import ABCMeta, abstractmethod
_# 使用抽象基类定义数据处理接口_
class DateProcessInterface(metaclass=ABCMeta):
    def __init__(self,DateList:List[int],FilterLength:int):
        '''
        初始化方法
        :param DateList: 数据列表
        :param FilterLength: 对多少个点做数据滤波
        '''
        pass

    @abstractmethod
    def DateFilter(self)->List:
        '''
        抽象方法，数据滤波
        :return: List
        '''
        pass

    @abstractmethod
    def DateCalMax(self)->int:
        '''
        抽象方法，计算数据最大值
        :return: int
        '''
        pass

    @abstractmethod
    def DateCalMin(self)->int:
        '''
        抽象方法，计算最小值
        :return: int
        '''
        pass
```

这里，我们首先需要给接口类传递 metaclass 关键字参数，该关键字涉及到了元类编程的相关知识点，我们不予详细介绍，只需知道通过分配 ABCMeta 元类，可以赋予你的类为抽象基类。接下来使用 @abstractmethod 的装饰器实现了将方法标记为抽象，它们声明该类的任何子类必须实现这一方法。

具体来说，使用 @abstractmethod 装饰器的方法必须满足以下两个条件：

- 方法必须是抽象方法，即只定义方法名和参数列表，但没有实现代码；
- 方法必须在抽象类或者实现抽象类接口的子类中实现。

@abstractmethod 还能注解静态方法、类方法和属性。 你只需保证这个注解紧靠在方法定义前即可。

```python
class A(metaclass=ABCMeta):
    @property
    @abstractmethod
    def name(self):
        pass

    @name.setter
    @abstractmethod
    def name(self, value):
        pass

    @classmethod
    @abstractmethod
    def method1(cls):
        pass

    @staticmethod
    @abstractmethod
    def method2():
        pass
```

抽象基类还可以用于类型检查，使用 isinstance()和 issubclass()函数。例如：

```python
print(issubclass(DateProcessClass, DateProcessInterface))
print(isinstance(DateProcessClass, DateProcessInterface))
```

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240920003418461-1041863076.png)

