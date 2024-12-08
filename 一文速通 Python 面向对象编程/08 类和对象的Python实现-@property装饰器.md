# 全网最适合入门的面向对象编程教程：08 类和对象的 Python 实现-\@property 装饰器：把方法包装成属性

# 摘要：

本文主要对@property 装饰器的基本定义、使用场景和使用方法进行了介绍，同时介绍了setter装饰器和deleter装饰器的应用场景和语法。

# 原文链接：

[**FreakStudio 的博客**](https://www.cnblogs.com/FreakEmbedded)

# 往期推荐：

[**学嵌入式的你，还不会面向对象？？！**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==\&mid=2247483825\&idx=1\&sn=149aaf3baa6a96703713e554d4a888db\&chksm=c0b08a82f7c70394074a24b722a1caddb0ad598a7303e61133216ae61423df0b5bc57a6b82b2\&scene=21#wechat_redirect "**学嵌入式的你，还不会面向对象？？！**")

[**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**](https://mp.weixin.qq.com/s/sycnlnMhtFji8q2fYh0MFQ "**全网最适合入门的面向对象编程教程：00 面向对象设计方法导论**")

[**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**](http://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==\&mid=2247483853\&idx=1\&sn=c7685237216b8dd1cadf95f3353fde8e\&chksm=c0b08afef7c703e8ce7b76958718ebe381220a199fac9e872710ea1cb4f8fc6f93d36d151279\&scene=21#wechat_redirect "**全网最适合入门的面向对象编程教程：01 面向对象编程的基本概念**")

[**全网最适合入门的面向对象编程教程：02 类和对象的 Python 实现-使用 Python 创建类**](https://mp.weixin.qq.com/s/XKpEAGY9WJ7GRFc98E6dcw)

[**全网最适合入门的面向对象编程教程：03 类和对象的 Python 实现-为自定义类添加属性**](https://mp.weixin.qq.com/s/LsNtLbHLNtVBtiQ3eaJnSg)

[**全网最适合入门的面向对象编程教程：04 类和对象的Python实现-为自定义类添加方法**](https://mp.weixin.qq.com/s/A5rMO3ppTZTUwRPL2NQxdg)

[**全网最适合入门的面向对象编程教程：05 类和对象的Python实现-PyCharm代码标签**](https://mp.weixin.qq.com/s/YjM1JPzLakfyWiDkyy4LQw)

[**全网最适合入门的面向对象编程教程：06 类和对象的Python实现-自定义类的数据封装**](https://mp.weixin.qq.com/s/z7CmgHJXf0QlAgIIRRTXlw)

[**全网最适合入门的面向对象编程教程：07 类和对象的Python实现-类型注解**](https://mp.weixin.qq.com/s/7r4hgM3a187si_D5ReEMCA)

# 更多精彩内容可看：

[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==\&mid=2247483747\&idx=1\&sn=0e203586516fd6e925085b9c1244dbee\&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==\&mid=2247483719\&idx=1\&sn=7ece9da65d002fdc3df9539cc43f3a8d\&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==\&mid=2247483671\&idx=1\&sn=c267a0c6f4ab93d6b6d934bf803b5919\&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==\&mid=2247483774\&idx=1\&sn=46d57506febe92c1719c8567ebe95269\&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==\&mid=2247483854\&idx=1\&sn=fd666dc501a0de850abfbd8793abff00\&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5\&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")

# **文档和代码获取**

可访问如下链接进行对文档下载：

[FreakStudio-一文速通面向对象编程-文档](https://github.com/leezisheng/Doc)

![image](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/212e2b921cc04d81959fabc2af1536e8~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1425\&h=569\&s=75865\&e=png\&b=ffffff)

**本文档主要介绍如何使用 Python 进行面向对象编程，需要读者对 Python 语法和单片机开发具有基本了解。相比其他讲解 Python 面向对象编程的博客或书籍而言，本文档更加详细、侧重于嵌入式上位机应用，以上位机和下位机的常见串口数据收发、数据处理、动态图绘制等为应用实例，同时使用 Sourcetrail 代码软件对代码进行可视化阅读便于读者理解。**

**相关示例代码获取链接如下：**
[FreakStudio-一文速通面向对象编程-示例代码](https://github.com/leezisheng/Python-OOP-Demo)

# 正文

上一篇文章链接：

**全网最适合入门的面向对象编程教程：06 类和对象的 Python 实现-自定义类的数据封装**

上面程序中，使用＠property 修饰了 devstate()方法，这样就使得该方法变成了 devstate 属性的 getter 方法。

这里用如下语句直接通过方法名来访问方法：

```python
s = SerialClass()
print(s.devstate)
```

程序运行如下：

![image](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/6466a1fdafb14711b67bb59a59a3a9e0~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=830\&h=283\&s=941440\&e=png\&b=2d2d2d)

property 装饰器主要应用在以下场景：

*   保护类的封装特性
*   让开发者可以使用“对象.属性”的方式操作操作类属性

@property 的语法格式如下：

```python
@property
def 方法名(self)
    代码块
```

类似的要想实现修改 devstate 属性的值，还需要为属性添加 setter 方法，就需要用到 setter 装饰器

它的语法格式如下：

```python
@方法名.setter
def 方法名(self, value):
    代码块
```

除此之外，还可以使用 deleter 装饰器来删除指定属性，其语法格式为：

```python
@方法名.deleter
def 方法名(self):
    代码块
```

关于装饰器更详细的介绍可以看如下链接，这里不做过多赘述：

<https://www.runoob.com/w3cnote/python-func-decorators.html>


