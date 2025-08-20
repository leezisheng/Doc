# 全网最适合入门的面向对象编程教程：06 类和对象的 Python 实现-自定义类的数据封装

# 摘要：

本文我们主要介绍了数据封装的基本概念和特性，如何设置自定义类的私有属性和私有方法，protect 属性的概念和特点。

# 往期推荐：
[**学嵌入式的你，还不会面向对象？？！**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483825&idx=1&sn=149aaf3baa6a96703713e554d4a888db&chksm=c0b08a82f7c70394074a24b722a1caddb0ad598a7303e61133216ae61423df0b5bc57a6b82b2&scene=21#wechat_redirect "**学嵌入式的你，还不会面向对象？？！**")

[**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**](https://mp.weixin.qq.com/s/sycnlnMhtFji8q2fYh0MFQ "**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**")

[**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483853&idx=1&sn=c7685237216b8dd1cadf95f3353fde8e&chksm=c0b08afef7c703e8ce7b76958718ebe381220a199fac9e872710ea1cb4f8fc6f93d36d151279&scene=21#wechat_redirect "**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**")

[**全网最适合入门的面向对象编程教程：02 类和对象的 Python 实现-使用 Python 创建类**](https://mp.weixin.qq.com/s/XKpEAGY9WJ7GRFc98E6dcw)

[**全网最适合入门的面向对象编程教程：03 类和对象的 Python 实现-为自定义类添加属性**](https://mp.weixin.qq.com/s/LsNtLbHLNtVBtiQ3eaJnSg)

[**全网最适合入门的面向对象编程教程：04 类和对象的Python实现-为自定义类添加方法**](https://mp.weixin.qq.com/s/A5rMO3ppTZTUwRPL2NQxdg)

[**全网最适合入门的面向对象编程教程：05 类和对象的Python实现-PyCharm代码标签**](https://mp.weixin.qq.com/s/YjM1JPzLakfyWiDkyy4LQw)

# 更多精彩内容可看：
[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483747&idx=1&sn=0e203586516fd6e925085b9c1244dbee&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483719&idx=1&sn=7ece9da65d002fdc3df9539cc43f3a8d&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483671&idx=1&sn=c267a0c6f4ab93d6b6d934bf803b5919&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483774&idx=1&sn=46d57506febe92c1719c8567ebe95269&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483854&idx=1&sn=fd666dc501a0de850abfbd8793abff00&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")

# **文档和代码获取**

可访问如下链接进行对文档下载：

[FreakStudio-Python面向对象文档](https://github.com/leezisheng/Doc)

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240701105325779-312130542.png)


**本文档主要介绍如何使用 Python 进行面向对象编程，需要读者对 Python 语法和单片机开发具有基本了解。相比其他讲解 Python 面向对象编程的博客或书籍而言，本文档更加详细、侧重于嵌入式上位机应用，以上位机和下位机的常见串口数据收发、数据处理、动态图绘制等为应用实例，同时使用 Sourcetrail 代码软件对代码进行可视化阅读便于读者理解。**

**相关示例代码获取链接如下：**
[FreakStudio-Python面向对象示例代码](https://github.com/leezisheng/Python-OOP-Demo)

# 正文

面向对象编程的一个重要特点就是数据封装。在上面的 SerialClass 类中，有关于串口波特率、设备名称等多个属性，我们编写代码的过程中，**往往不希望别的模块可以直接访问本模块的数据，而仅通过调用我们的接口函数来访问数据，也就是高内聚和低耦合原则。**

在 Python 中，**我们可以通过给属性或方法命名时可以用两个下划线作为开头来改变属性和方法的访问权限。**在 Python 中，属性和方法的访问权限只有两种，也就是公开的和私有的，对于私有属性或私有方法来说，是不允许外界访问的。

- （1）类的私有属性格式：__private_attrs 两个下划线开头，声明该属性为私有，不能在类的外部被使用或直接访问。在类内部的方法中使用时__private_attrs。
- （2）类的私有方法格式：__private_method：两个下划线开头，声明该方法为私有方法，不能在类的外部调用。在类的内部调用 self.__private_methods。

这里，我们联系上一节中串口收发的相关方法，可以看到在使用串口收发的相关方法时，我们并没有判断当前串口的状态，如果串口状态为关闭，那么就不能正常工作。于是我们添加了一个__devstate 私有属性用于标识串口状态，同时添加了 RetSerialState()方法用于外界获取串口状态，示例代码如下：

```python
import serial
import serial.tools.list_ports

class SerialClass:
    _# 初始化_
    _# 使用默认参数_
    def __init__(self,
                 devport = "COM17",
                 devbaudrate = 115200,
                 devbytesize = serial.EIGHTBITS,
                 devparity = serial.PARITY_NONE,
                 devstopbits = serial.STOPBITS_ONE):
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

    _# 打开串口_
    def OpenSerial(self):
        self.dev.open()
        self.__devstate = True
    _# 关闭串口_
    def CloseSerial(self):
        self.dev.close()
      self.__devstate = False
    _# 串口读取_
    def ReadSerial(self):
        if self.__devstate:
            _# 非阻塞方式读取_
            _# 按行读取_
            data = self.dev.readline()
            _# 收到为二进制数据_
            _# 用utf-8编码将二进制数据解码为unicode字符串_
            _# 字符串转为int类型_
            data = int(data.decode('utf-8', 'replace'))
            return data

    _# 串口写入_
    def WriteSerial(self,write_data):
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

_# 生成串口类的实例_
serdev = SerialClass()

print("serdev state :",serdev.RetSerialState())
serdev.OpenSerial()
print("serdev state :",serdev.RetSerialState())
serdev.CloseSerial()
print("serdev state :",serdev.RetSerialState())
print(serdev.__devstate)
```

这里我们在初始化方法中使用了默认参数，即在定义方法时，直接给形式参数指定一个默认值，这样的话，即便初始化时没有给拥有默认值的形参传递参数，该参数可以直接使用定义函数时设置的默认值。

代码运行结果如下，可以看到在打开或关闭串口设备时，RetSerialState()方法可以正常获取串口状态，而当我们访问类内私有属性时，程序报错：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240701105352240-1892269373.png)


好的，现在我们终于松了一口气，声明__devstate 为私有属性后，外部终于无法访问我们的数据了。但是真的是这样吗？

尝试将：

```python
print(serdev.__devstate)
```

修改为：

```python
print(serdev._SerialClass__devstate)
```

此时，我们运行程序，发现代码输出如下：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240701105405486-1971446604.png)


**坏了，怎么外界还能访问我们类内私有属性？这是什么魔法？**

这是 Python 的名字改装在起作用。Python 不允许实例化的类访问私有数据，但你可以使用 **object._className__attrName**（ 对象名._类名__私有属性名 ）访问属性。

**由此可知，在 Python 中私有属性为假私有属性。**那为什么不从语法上保证 private 字段的私密性呢？用最简单的一句话来说：**We are all consenting adults here（我们都是成年人）**。正如 Python 程序员的观点：开放要比封闭好。

通过以上讲解，我们实际上已经对类的封装特性有所了解，所谓封装就是：

**"隐藏一切可以隐藏的实现细节，只向外界暴露（提供）简单的编程接口"。**我们在类中定义的方法其实就是把数据和对数据的操作封装起来了，在我们创建了对象之后，**只需要给对象发送一个消息（调用方法）就可以执行方法中的代码，也就是说我们只需要知道方法的名字和传入的参数（方法的外部视图），而不需要知道方法内部的实现细节（方法的内部视图）。**

> 对于类的私有属性来说，子类是无法访问的，私有变量只有本类的内部能直接调用。这时我们可以用 protect 属性进行修改，在属性和方法前加一个下划线就是 protect 类型了。**类的 protect 属性，子类可以继承，同时实例对象、类对象都能直接调用 protect 属性、方法。**
> **受保护属性在类的外部是可见但不建议直接访问，其命名约定表示它们是内部实现的一部分，不应该被直接访问。**总体而言，Python 强调封装性，鼓励使用公共方法来访问和修改属性，而不是直接在外部访问。这种做法有助于提高代码的可维护性，防止意外的修改和增加代码的灵活性。

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240701105416084-1417127898.png)
