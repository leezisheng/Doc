# 摘要：

本文主要介绍了，当使用 Python 创建自定义类时，如何为其添加属性，包括为类和实例添加属性两种，以及如何获取自定义的属性等内容。

# **往期推荐：**

[**学嵌入式的你，还不会面向对象？？！**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483825&idx=1&sn=149aaf3baa6a96703713e554d4a888db&chksm=c0b08a82f7c70394074a24b722a1caddb0ad598a7303e61133216ae61423df0b5bc57a6b82b2&scene=21#wechat_redirect "**学嵌入式的你，还不会面向对象？？！**")

[**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**](https://mp.weixin.qq.com/s/sycnlnMhtFji8q2fYh0MFQ "**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**")

[**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483853&idx=1&sn=c7685237216b8dd1cadf95f3353fde8e&chksm=c0b08afef7c703e8ce7b76958718ebe381220a199fac9e872710ea1cb4f8fc6f93d36d151279&scene=21#wechat_redirect "**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**")

[**全网最适合入门的面向对象编程教程：02 类和对象的 Python 实现-使用 Python 创建类**](https://mp.weixin.qq.com/s/XKpEAGY9WJ7GRFc98E6dcw)


# **更多精彩内容可看：**

[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483747&idx=1&sn=0e203586516fd6e925085b9c1244dbee&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483719&idx=1&sn=7ece9da65d002fdc3df9539cc43f3a8d&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483671&idx=1&sn=c267a0c6f4ab93d6b6d934bf803b5919&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483774&idx=1&sn=46d57506febe92c1719c8567ebe95269&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483854&idx=1&sn=fd666dc501a0de850abfbd8793abff00&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")


# **文档和代码获取**

可访问如下链接进行对文档下载：

[https://github.com/leezisheng/Doc](https://github.com/leezisheng/Doc)

![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240627235843684-811707306.png)


**本文档主要介绍如何使用 Python 进行面向对象编程，需要读者对 Python 语法和单片机开发具有基本了解。相比其他讲解 Python 面向对象编程的博客或书籍而言，本文档更加详细、侧重于嵌入式上位机应用，以上位机和下位机的常见串口数据收发、数据处理、动态图绘制等为应用实例，同时使用 Sourcetrail 代码软件对代码进行可视化阅读便于读者理解。**

**相关示例代码获取链接如下：**[https://github.com/leezisheng/Python-OOP-Demo](https://github.com/leezisheng/Python-OOP-Demo)

# 正文

类自身可以具有自己的属性，被称为类属性，或者类成员变量。我们可以通过点标记法在不改动类定义的情况下为实例对象设定任意属性：

```python
_# 创建一个串口类_
class SerialClass:
    pass

_# 生成串口类的实例_
serdev = SerialClass()
_# 添加属性-串口设备名_
serdev.devport      = "COM17"
_# 添加属性-波特率_
serdev.devbaudrate  = 115200
_# 添加属性-数据位_
serdev.devbytesize  = 8
_# 添加属性-校验位_
serdev.devparity    = 0
_# 添加属性-停止位_
serdev.devstopbits  = 1
_# __dict__可以动态的获取到对象的全部属性_
print(serdev.__dict__)
```

以上代码创建了一个空的 SerialClass 类，没有任何数据或行为。然后创建了这个类的两个实例并分别赋予它们串口设备名、波特率、数据位等串口相关的属性并赋值。

**为对象属性赋值的语法是 < 对象.< 属性=< 值 >**

这种方法被称为点标记法（dot notation）。这里的值可以是任何类型：Python 的基本类型、内置数据类型或者其他的对象，甚至可以是一个函数或另一个类！

最后通过__dict__，就可以动态的获取到对象的全部属性，__dict__返回一个字典，属性名是字典的 key，属性值是字典的 value。

我们也可以**对类属性赋值**，方法同上，代码如下：

```python
_# 创建一个串口类_
class SerialClass:
    pass

_# 添加属性-串口设备名_
SerialClass.devport      = "COM17"
_# 添加属性-波特率_
SerialClass.devbaudrate  = 115200
_# 添加属性-数据位_
SerialClass.devbytesize  = 8
_# 添加属性-校验位_
SerialClass.devparity    = 0
_# 添加属性-停止位_
SerialClass.devstopbits  = 1
_# __dict__可以动态的获取到对象的全部属性_
print(SerialClass.__dict__)

_# 生成串口类的实例_
serdev = SerialClass()
print(serdev.devport)
print(serdev.devbaudrate)
print(serdev.devbytesize)
print(serdev.devparity)
print(serdev.devstopbits)
```

![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240627235906946-1903744616.png)


可以看到，**对类属性赋予新的值，它的所有实例的类属性也会更新。**实际上，类属性在创建实例时并不会被单独创建，都是引用的类的属性，它们在内存中只有一份。

同样我们可以**通过实例来改变类属性，此时将进行拷贝动作，**该实例的类属性将脱离类的属性，实现了属性的解绑定，把原来类属性覆盖了，该**属性成为了实例的私有属性，其他实例不会受影响**。

```python
serdev.devport = "COM15"
print(serdev.devport)
print(SerialClass.devport)
```
![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240627235919627-901870556.png)


在实际的使用时，类属性应该只用于类相关的描述，类示例可以访问和使用它们，但不应该更改它们。

由于类可以起到模板的作用，因此，可以在创建实例的时候，把一些我们认为必须绑定的属性强制填写进去。通过定义一个特殊的__init__方法，在创建实例的时候，就把 devport，devbaudrate 等属性绑上去：

```python
_# 创建一个串口类_
class SerialClass:
    _# 注意：特殊方法“__init__”前后分别有两个下划线！！！_
    def __init__(self,port,baudrate,bytesize,parity,stopbits):
        self.devport        = port
        self.devbaudrate    = baudrate
        self.devbytesize    = bytesize
        self.devparity      = parity
        self.devstopbits    = stopbits

_# 生成串口类的实例_
serdev = SerialClass(port     = "COM17",
                     baudrate = 115200,
                     bytesize = 8,
                     parity   = 0,
                     stopbits = 1
                    )
```

init 方法的第一个参数永远是 **self，表示创建的实例本身**，因此，在 init 方法内部，就可以把各种属性绑定到 self，因为 **self 就指向创建的实例本身**。有了 init 方法，在创建实例的时候，就不能传入空的参数了，必须传入与 init 方法匹配的参数，但 self 不需要传，Python 解释器自己会把实例变量传进去。