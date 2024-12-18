# 全网最适合入门的面向对象编程教程：02 类和对象的 Python 实现-使用 Python 创建类

# 摘要

本文主要介绍了串口通信协议的基本概念、串口通信的基本流程、如何使用 Python 语言创建一个类和类内成员中属性和方法的定义。

# 正文

这里开始，我们将以嵌入式中常用的串口通信协议为例，讲解以下知识：

① 如何在 Python 中创建类和对象；

② 如何为 Python 对象添加属性和行为；

③ 如何将类组织成包和模块；

④ 如何限制外部访问私有数据。

**在使用 Python 进行编程之前，我们先回想一下平时我们是如何使用串口的。总结来说，无非就是下面几个步骤：**

**① 首先，我们需要确定要使用的串口号。**

**② 其次，配置波特率、数据位、奇偶校验位、停止位、DTR/DSR、RTS/CTS 和 XON/XOFF。**

**③ 第三，打开串口。**

**④ 第四，收发数据。**

**⑤ 第五，关闭串口。**

**接下来，我们就来研究下用 Python 怎么实现面对对象的串口操作。**

在大多数编程语言中，类就是一组用来描述如何生成一个对象的代码段，由于 Python 是动态语言，类是动态生成的。通过 class 关键字我们可以定义一个新的类型，class 之后为类的名称并以冒号结尾:

```python
_# 类名必须遵循标准的 Python 变量名准则_
_# 必须以字母或下画线开头，并只能由字母、下画线或数字组成_
_# PEP 8标准建议类名应该用驼峰格式：_
_#   以大写字母开头，任意后续单词都以大写字母开头_
class ClassName:
    pass
```

类的定义行后面是类的内容块。和其他的 Python 代码结构一样，类也用缩进而非其他语言常用的大括号或方括号来界定。Python 中尽量用 4 个空格作为缩进。任何好用的代码编辑器都支持将 Tab 键输入替换为 4 个空格。由于示例中第一个类实际上什么都不做，因此我们简单地在第 2 行用 pass 关键字表示下面没有进一步的动作了。

```python
class ClassName:
    pass

c = ClassName()
print(id(ClassName), type(ClassName), ClassName)
print(id(c), type(c), c)
```

![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240627013630336-344689800.png)

这里，我们使用 printf 函数输出类和实例的相关信息。需要说明的是，在 Python，所有的数据类型，值，变量，函数，类，实例等等一切可操作的基本单元都使用对象（Object）表示。**每个对象有三个基本属性：ID，类型和值，也即有一块内存中存储了一个对象，这块内存中一定存有这三个属性。**在以上的输出中，**我们可以看到在 Python 中定义一个新类（Class）等于创建了一个新类型（Type）的对象（Object），解释器中一切对象均存储在 PyObject 结构中。**

示例中，我们定义了一个自己的类型 ClassName，c 是它的实例（Instance），它的类型是 __main__.ClassName。Class 和 Type 均是指类型（Type），Class 通常用于普通用户使用 class 自定义的类型。Type 通常指 Python 的解释器 CPython 内置的类型。

```python
<__main__.ClassName object at 0x00000281CFD71190>
```

指明了当前实例 c 所处内存空间为 0x00000281CFD71190。

这里，我们首先创建一个串口类 SerialClass：

```python
_# 创建一个串口类_
class SerialClass:
    pass
```

但可以看到，我们并没有定义类中任何东西，现在该怎么操作呢，怎么实现一个串口的收发功能呢？对于一个类而言，一般具有两个成员：属性和方法。用来描述具体某个对象的特征的是属性，是静态的，例如串口通信需要设置的一些参数，如波特率、数据位位数等。每个对象有它们自己的行为或者是使用它们的方法，比如串口发送数据、接收数据、设置通信参数等，我们把这些行为称之为方法，是动态的，可以使用这些方法来操作一个对象。

关于如何为我们刚刚创建的串口类添加属性和方法，我们下一节会讲到。

# **文档和代码获取**

可访问如下链接进行对文档下载：

[https://github.com/leezisheng/Doc](https://github.com/leezisheng/Doc)

![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240627013618920-1535800624.png)


**本文档主要介绍如何使用 Python 进行面向对象编程，需要读者对 Python 语法和单片机开发具有基本了解。相比其他讲解 Python 面向对象编程的博客或书籍而言，本文档更加详细、侧重于嵌入式上位机应用，以上位机和下位机的常见串口数据收发、数据处理、动态图绘制等为应用实例，同时使用 Sourcetrail 代码软件对代码进行可视化阅读便于读者理解。**

**相关示例代码获取链接如下：**[https://github.com/leezisheng/Python-OOP-Demo](https://github.com/leezisheng/Python-OOP-Demo)

![image](https://img2024.cnblogs.com/blog/2591203/202406/2591203-20240627013742619-1494470491.png)


# **往期推荐：**

[**学嵌入式的你，还不会面向对象？？！**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483825&idx=1&sn=149aaf3baa6a96703713e554d4a888db&chksm=c0b08a82f7c70394074a24b722a1caddb0ad598a7303e61133216ae61423df0b5bc57a6b82b2&scene=21#wechat_redirect "**学嵌入式的你，还不会面向对象？？！**")

[**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**](https://mp.weixin.qq.com/s/sycnlnMhtFji8q2fYh0MFQ "**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**")

[**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483853&idx=1&sn=c7685237216b8dd1cadf95f3353fde8e&chksm=c0b08afef7c703e8ce7b76958718ebe381220a199fac9e872710ea1cb4f8fc6f93d36d151279&scene=21#wechat_redirect "**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**")

# **更多精彩内容可看：**

[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483747&idx=1&sn=0e203586516fd6e925085b9c1244dbee&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483719&idx=1&sn=7ece9da65d002fdc3df9539cc43f3a8d&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483671&idx=1&sn=c267a0c6f4ab93d6b6d934bf803b5919&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483774&idx=1&sn=46d57506febe92c1719c8567ebe95269&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483854&idx=1&sn=fd666dc501a0de850abfbd8793abff00&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")
