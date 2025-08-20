# 全网最适合入门的面向对象编程教程：16 类和对象的 Python 实现-多态、方法重写与开闭原则

# 摘要：

本文主要介绍了 Python 中创建自定义类时子类如何实现对父类方法的重写、方法重写的定义和多态的基本概念，并对开闭原则进行介绍。

# 原文链接：

**FreakStudio 的博客**

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

子类在继承了父类的方法后，可以对父类已有的方法给出新的实现版本，这个动作称之为**方法重写（override）**。如果你的父类方法的功能不能满足你的需求，你可以在子类重写你父类的方法。这里，我们在 SerialClass 类的 ReadSerial 方法中，使用 data = self.dev.readline()语句按行读取数据，如果我们想要按照字节数读取呢？又该如何操作，我们来看如下代码：

```python
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

if __name__ == "__main__":

    d = DevClass("COM1")
    d.StartDev()

    while True:
        data = d.ReadSerial(1)
        print(data)
```

这里，我们重写了 ReadSerial 方法，使之一次性读取一个字节，运行如下：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240713144651349-1228510050.png)


通过方法重写我们可以让**父类的同一个行为在子类中拥有不同的实现版本**，当我们调用这个经过子类重写的方法时，**不同的子类对象会表现出不同的行为**，这个就是**多态**。

要理解多态的好处，我们还需要再编写一个函数，该函数主要用于判断串口对象的串口代码是否开启，示例代码如下：

```python
_# 判断串口类对象的串口是否开启_
def IsSerialConnected(serialclass):
    return serialclass.RetSerialState()
```

这里，我们不仅可以传入 SerialClass 类，其子类也可以传入：

```python
s = SensorClass()
    m = MasterClass()
    d = DevClass()
    _# 判断是否为继承关系_
    issub = issubclass(SensorClass, SerialClass)
    print(issub)

    _# isinstance() 内置方法本质是在判断对象的数据类型_
    _# isinstance用于判断实例和类的关系_
    isin = isinstance(s, SerialClass)
    print(isin)

    _# 判断s对象-SensorClass的串口是否开启_
    print(IsSerialConnected(s))
    _# 判断m对象-MasterClass的串口是否开启_
    print(IsSerialConnected(m))
    _# 判断d对象-DevClass的串口是否开启_
    print(IsSerialConnected(d))
```

实际上我们会发现新增一个 SerialClass 的子类，不必对 IsSerialConnected()做任何修改，实际上，任何依赖 SerialClass 作为参数的函数或者方法都可以不加修改地正常运行，原因就在于多态。

对于一个变量，我们只需要知道它是 SerialClass 类型，无需确切地知道它的子类型，就可以放心地调用 RetSerialState()方法，而具体调用的 RetSerialState()方法是作用在 SensorClass、MasterClass、DevClass 对象上，由运行时该对象的确切类型决定，这就是多态真正的威力：调用方只管调用，不管细节，而当我们新增一种 SerialClass 的子类时，只要确保 RetSerialState()方法编写正确，不用管原来的代码是如何调用的。这就是**著名的“开闭”原则**：

**对扩展开放：允许新增 SerialClass 子类；**

**对修改封闭：不需要修改依赖 SerialClass 类型的 IsSerialConnected()等函数。**

实际上，在继承关系中，如果一个实例的数据类型是某个子类，那它的数据类型也可以被看做是父类。

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240713144714456-1612456793.png)


![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240713144717811-1618611120.png)

