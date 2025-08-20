# 全网最适合入门的面向对象编程教程：54 Python 字符串与序列化-字符串格式化与 format 方法

![image](https://img2024.cnblogs.com/blog/2591203/202408/2591203-20240825003614492-408022634.png)

# 摘要：

在 Python 中，字符串格式化是将变量插入到字符串中的一种方式，Python 提供了多种字符串格式化的方法，包括旧式的 % 格式化、新式的 str.format 方法以及 f-string（格式化字符串字面量）。

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

[**全网最适合入门的面向对象编程教程：50 Python函数方法与接口-接口和抽象基类**](https://mp.weixin.qq.com/s/DwKug8eHOYyC2pE77eLw9w)

[**全网最适合入门的面向对象编程教程：51 Python函数方法与接口-使用Zope实现接口**](https://mp.weixin.qq.com/s/pDQWfDDh3WeCgjC5b5rP1Q)

[**全网最适合入门的面向对象编程教程：52 Python函数方法与接口-Protocol协议与接口**](https://mp.weixin.qq.com/s/Wgqc8PbpMMf8pKFHo4H7PA)

[**全网最适合入门的面向对象编程教程：53 Python字符串与序列化-字符串与字符编码**](https://mp.weixin.qq.com/s/jvOLalgkUpxR7LGgQnJ9aQ)

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

字符串格式化是将变量值插入到字符串中的占位符位置的过程。这使得能够创建动态的文本，其中一些部分可能需要根据不同情况进行替换。

在 Python 中字符串格式化的方式包括 Print 函数输出格式化和 Format 函数格式化。

## 使用 Print 函数格式化符号实现格式化

常用格式化符号包括：

- （1）%c：格式化字符及其 ASCII 码；
- （2）%s：格式化字符串；
- （3）%d：格式化整数；
- （4）%u：格式化无符号整型；
- （5）%o：格式化无符号八进制数；
- （6）%x：格式化无符号十六进制数；
- （7）%f：格式化浮点数字，可指定小数点后的精度；
- （8）%e：用科学计数法格式化浮点数；
- （9）%g：%d 和 %e 的简写。

示例代码如下所示：

```python
print("%c" % 'a')
print("%s" % "string")
print("%s" % 123)   
print("%d" % 100.0)
```

运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002509921-538958678.png)


同时转换符格式化 (conversion specifier) 可以引用字典变量。

转换符的格式为 %(mapping_key)flags，mapping_key 指明引用变量的名称，flags 指明转换格式。

示例代码如下：

```python
print('%(language)s has %(number)01d quote types.'
      % {'language': "Python", "number": 2})
```

运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002515971-515793908.png)


## 使用 format()方法进行格式化

内置的字符串类提供了通过使用 PEP 3101 所描述的 format()方法进行复杂变量替换和值格式化的能力。string 模块中的 Formatter 类允许你使用与内置 format()方法相同的实现来创建并定制你自己的字符串格式化行为。

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002524430-459255612.png)


str.format()方法和 Formatter 类共享相同的格式字符串语法（虽然对于 Formatter 类来说，其子类可以定义它们自己的格式字符串语法）。任何字符串都可以通过调用 format()方法而编写一个格式化字符串。这个方法返回一个新的字符串，其中的特殊字符将会替换成传入该方法的参数以及关键字参数。format 方法不限定参数数量，它使用我们前面提到的方法传参中*args 和**kwargs 语法。

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002526505-1762143850.png)


在格式化字符串中被替换的特殊符号是开闭花括号：{和}。我们可以成对地插入，最终其会按照顺序被 str.format 方法中传入的位置参数所替换。

示例代码如下：

```python
template = "Hello {}, you are currently {}." 
print(template.format('Dusty', 'writing'))
```

运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002532800-474445922.png)


str.format()方法可以使用位置参数或关键字参数来填充占位符。位置参数是按顺序传递的，而关键字参数使用占位符名称来匹配值。

示例代码如下，运行结果同上。

```python
template = "Hello {0}, you are currently {1}."
print(template.format('Dusty', 'writing'))
template = "Hello {name}, you are currently {doing}."
print(template.format(name='Dusty', doing='writing'))
```

我们不是只能传递字符串变量给 format 方法，任何基本类型，例如可以被打印出来的整数或浮点数都可以。更有趣的是，复杂对象，包括列表、元组、字典以及任意对象都可以使用；在 format 的字符串中我们可以通过索引和对象的属性（方法不行）访问变量。例如在下面的例子中，我们输出一个邮件消息，我们在邮箱地址中将发件人和收件人组合成元组，并将主题和消息存放在字典中，就可以这样来格式化：

```python
emails = ("a@example.com", "b@example.com")
message = {
            'subject': "You Have Mail!",'message': "Here's some mail for you!"
          }
template = """ 
From: <{0[0]}> 
To: <{0[1]}> 
Subject: {message[subject]} 
{message[message]}"""
print(template.format(emails, message=message))
```

我们在传递 emails 元组时传递了一个基于位置的参数，这两个邮箱地址可以通过 0[x]获得，其中 x 可以是 0 或 1，表示元组中第一个或第二个元素。第一个 0 表示传入 format 的第一个位置参数（在这个例子中是 emails 元组）。

我们在传递 message 字典时传递了一个基于关键字的参数，其中通过字符串键名访问字典时，使用 message[subject]和 message[message]，注**意这里和平常访问字典中值时有所不同，我们不需要加引号。**

```python
print(message['subject'])
```

如果有嵌套的数据结构，我们甚至可以实现多层查询。**这里建议不要这样做，因为这样一来，模板字符串很快就会变得难以理解。**如果我们有一个字典包含了元组，可以这样做，代码运行结果同上：

```python
emails = ("a@example.com", "b@example.com")
message = {
            'emails': emails,
            'subject': "You Have Mail!",
            'message': "Here's some mail for you!"
          }
template = """ 
From: <{0[emails][0]}> 
To: <{0[emails][1]}> 
Subject: {0[subject]} 
{0[message]}"""
print(template.format(message))
```

实际上，我们也可以给 format 函数传递任意对象作为参数，然后用点号标记访问对象的属性。在如下代码中，我们使用 format 函数输出了类的名字、描述和属性/方法。

```python
class SensorClass(SerialClass):
    '''
        传感器类，继承自SerialClass
    '''
    ... ...
if __name__ == "__main__":
    template = '''
    Class Name : <{0.__name__}>
    Class Description :  <{0.__doc__}>
    Class Method and Class Properties : <{0.__dict__}>    
    '''
    print(template.format(SensorClass))
```

运行结果如下所示：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002547293-615301944.png)


通常来说，我们会在想要格式化的对象已经存在的情况下使用这种查询方式，但不会为了在模板中使用对象而创建一个类。

在模板字符串中引入变量确实极具便利性，然而，有时候为了确保输出结果的准确性，我们需要对这些变量进行适当的调整。例如，在进行准确率计算时，我们可能会得到冗长的小数，但在特定的应用场景中，我们并不希望这些详尽的小数点后的数值出现在最终的展示中。

此时，str.format()方法就显得尤为实用。它不仅允许我们灵活地控制输出的格式，还提供了诸多选项以满足不同的格式化需求，如指定小数位数、调整文本对齐方式以及设置填充字符等。通过这些功能，我们可以更加精准地控制输出内容的呈现方式，从而确保信息的传达既准确又符合预期的展示效果。

标准格式说明符的一般形式如下：

```python
format_spec     ::=  [[fill]align][sign]["z"]["#"]["0"][width][grouping_option]["." precision][type]
fill            ::=  <any character>
align           ::=  "<" | ">" | "=" | "^"
sign            ::=  "+" | "-" | " "
width           ::=  digit+
grouping_option ::=  "_" | ","
precision       ::=  digit+
type            ::=  "b" | "c" | "d" | "e" | "E" | "f" | "F" | "g" | "G" | "n" | "o" | "s" | "x" | "X" | "%"
```

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002554649-141851924.png)


![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002559211-111771028.png)


![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002603100-1600012642.png)


这里，type 参数具体含义如下：

```python
(1) s: string, 字符串;
(2) d: decimal integer, 十进制数;
(3) i: integer, 用法同%d;
(4) u: unsigned integer, 无符号十进制数;
(5) f: float, 浮点数(默认保留小数点后6位);
(6) F: Float, 浮点数(默认保留小数点后6位);
(7) e: exponent, 将数字表示为科学计数法(小写e, 默认保留小数点后6位);
(8) E: Exponent, 将数字表示为科学计数法(大写E, 默认保留小数点后6位);
(9) o: octal, 八进制数(即0-7);
(10) x: hexdecimal, 十六进制数(即0-9a-f);
(11) X: Hexdecimal, 十六进进制数(0-9A-F);
(12) g: general format, 通用格式，详见如下...;
(13) G: General format, 通用格式，详见如下...;
(14) %c: character, 将十进制数转换为所对应的unicode值;
(15) %r: representation, 调用__repr__魔法方法输出;
(16) %%: 转义%，输出百分号。
```

具体可看下面示例：

```python
price = 49.95
formatted_price = "The price is {:.2f} dollars.".format(price)
print(formatted_price)
```

运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002610238-474385346.png)


冒号之后的 0.2f 格式指示符表明，从左向右，对于小于 1 的值，确保小数点左侧有个 0；小数点之后保留两位数字，将输入值格式化为浮点数。

我们也可以通过占位值让每个数字占据特定数量的字符位置。这对于输出表格数据很有用，例如：

```python
orders = [('burger', 2, 5),
          ('fries', 3.5, 1),
          ('cola', 1.75, 3)]
print("PRODUCT    QUANTITY    PRICE   SUBTOTAL")
for product, price, quantity in orders:
    subtotal = price * quantity
    print("{0:10s}{1: ^9d} ${2: <8.2f}${3: >7.2f}".format(product, quantity, price, subtotal))
```

这里，quantity 变量的格式化操作符{1: ^9d}为例，d 表示这是一个整数值，数字 9 说明这个值需要占据 9 个字符。

但是对于整数来说，默认是用 0 而不是空格来填充的。所以我们在冒号之后添加一个空格作为占位符。插入符号说明数字按照居中方式对齐。运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002617617-2066672259.png)


我们也可以使用 < 或 > 选择不同的对齐方式（左对齐/右对齐）。这里，我们对 price 和 subtotal 变量使用相似的指示符。对于 price，我们使用{2: <8.2f}；对于 subtotal，我们使用{3: >7.2f}。我们都指定了一个空格作为填充字符，不过用 < 和 > 符号分别说明数字按照长度为 8 和 7 的位置居左和居右对齐。而且，每个浮点数都保留两位小数。

对于不同的数据类型，“类型”字符的不同会导致输出格式的变化。我们已经了解了 s、d 和 f 这三种类型，它们分别用于表示字符串、整数和浮点数。实际上，大部分其他的格式指示符都可以看作是这三种基本类型的变体或扩展。例如，o 类型用于表示八进制整数，而 X 类型则用于表示十六进制整数。此外，n 类型指示符是一个特殊的存在，它允许我们根据本地的习惯对整数进行分隔。这对于浮点数，% 类型指示符则具有特殊的功能，它可以将浮点数乘以 100，从而将其转换为百分数形式。

示例代码如下：

```python
_# 使用千位分隔符_
number = 1234567
formatted_number = "Formatted number: {:,}".format(number)
print(formatted_number)
_# 使用百分比格式_
percentage = 0.25
formatted_percentage = "Formatted percentage: {:.2%}".format(percentage)
print(formatted_percentage)
```

运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002624578-220753098.png)


值得注意的是，这些标准的格式化操作符不仅可以应用于内置的数据类型，还可以应用于其他对象。对于非标准对象，我们可以定义自己的格式指示符来满足特定的需求。例如，如果我们将 datetime 对象传递给 format，就可以使用那些可用于 datetime.strftime 函数的指示符，例如：

```python
from datetime import datetime

now = datetime.now()
_# 格式化日期和时间_
formatted_date = "Current date and time: {:%Y-%m-%d %H:%M:%S}".format(now)
print(formatted_date)
```

输出结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002638672-473801958.png)


**需要注意的是：这些指示符必须按照正确的顺序，不过它们都是可选的：首先是填充字符，其次是对齐方式，然后是大小，最后是类型。**

```python
::=  [[fill]align][sign]["z"]["#"]["0"][width][grouping_option]["." precision][type]
```

除了使用标准的格式化操作符，我们也可以通过重写 format 特殊方法来自定义我们自己对象的格式化操作符，可以通过查看如下文档进一步了解更加细节的操作：<u>[https://peps.python.org/pep-3101/](https://peps.python.org/pep-3101/)</u>。

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002645755-538121975.png)


![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002650343-884926110.png)


同时，开闭花括号：{和}除了在格式化字符串中作为被替换的特殊符号，花括号符号本身也常用于字符串。我们需要有办法跳过格式化，只作为花括号符号本身出现，而不是被替换。我们可以通过重复两次花括号来实现，例如，我们可以用 Python 来格式化一个基本的 Java 程序：

```python
template = """
public class {0} {{
    public static void main(String[] args) {{
        System.out.println("{1}");
    }}
}}"""
print(template.format("MyClass", "print('hello world')"))
```

运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002655698-714318515.png)


可以看到输出的类名和内容已经被两个参数所替换，而双花括号被替换为单花括号，结果得到的就是一段合法的 Java 代码。只要在模板中看到{{或}}，也就是用于封闭 Java 类和方法定义的符号。我们知道 format 方法会将它们替换为单个的花括号符号，而不是替换为传入 format 方法的参数。

这里，我们也总结了常用的一些格式化标准符号使用方法：

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002701805-201024243.png)


总的来说，格式化操作符是 Python 中一个非常强大的工具，它允许我们根据需要灵活地控制数据的输出格式。通过深入了解这些操作符的用法和特点，我们可以编写出更加清晰、易读和高效的代码。

![image](https://img2024.cnblogs.com/blog/2591203/202409/2591203-20240929002711826-1069405272.png)

