# 全网最适合入门的面向对象编程教程：28 类和对象的 Python 实现-Python 编程原则、哲学和规范大汇总

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240730233958579-1850098569.png)


# 摘要：

本文主要介绍了在使用 Python 进行面向对象编程时，Python 异常处理的原则-“请求谅解，而非许可”，以及软件设计和 Python 的编程原则，同时介绍了 PEP8 规范。

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

## Python 异常处理原则“请求谅解，而非许可”

我们可能不难发现异常处理完全可以用 if...elif...else 结构来完成，那为什么还要使用异常呢？实际上，**Python 程序员通常秉持着“请求谅解，而非许可”的原则，即他们首先执行代码，然后解决出现的错误。**另一种与之相反的“三思而后行”的原则，实际上恰恰相反。

这样做有很多理由，**但最主要的一点是，避免不必要的 CPU 资源消耗在检查极少出现的情况上。**因此，对于极少数的例外情况，使用异常处理是明智之举。进一步探讨这一点，我们可以发现异常处理的语法在流程控制中同样非常有效。就像 if 语句一样，异常可以用于决策、分支和信息传递。在 Python 代码中，面对可能出现的错误情况，相比于各种各样的判断，使用异常处理结构更容易阅读和维护。

## 软件设计的六大原则

1. **开放封闭原则(Open-Closed Principle, OCP)**

   - 软件实体(类、模块、函数等)应对扩展开放,对修改关闭
   - 通过抽象和继承等机制实现
2. **里氏替换原则(Liskov Substitution Principle, LSP)**

   - 子类可以透明地替换父类使用
   - 子类与父类的参数和返回值应一致
3. **依赖倒置原则(Dependency Inversion Principle, DIP)**

   - 高层模块不应依赖低层模块,二者都依赖抽象
   - 抽象不应依赖细节,细节应依赖抽象
4. **接口隔离原则(Interface Segregation Principle, ISP)**

   - 客户端不应依赖它不需要的接口
   - 接口应保持单一和最小粒度
5. **迪米特法则(Law of Demeter, LoD)**

   - 一个软件实体应当尽可能少地与其他实体发生相互作用
   - 高内聚,低耦合
6. **单一职责原则(Single Responsibility Principle, SRP)**

   - 一个类应该仅有一个引起它变化的原因
   - 职责应该明确,避免重复

## Python 六大编程原则

1. **KISS (Keep It Simple, Stupid)**

   - 保持代码简单明了,尽量避免复杂的设计
   - 简单易懂的代码更容易编写、维护和调试
2. **DRY (Don't Repeat Yourself)**

   - 避免重复代码,利用函数、模块等特性进行抽象和封装
   - 减少重复劳动,提高编码效率
3. **Pythonic**

   - 充分利用 Python 的语法特性和标准库
   - 遵循 PEP 8 等 Python 编码规范,编写优雅、高效的代码
4. **Zen of Python**

   - 遵循 Python 的 20 条设计哲学原则,如"美胜于丑"、"明确胜于隐晦"等
     - Beautiful is better than ugly.
     - Explicit is better than implicit.
     - Simple is better than complex.
     - Complex is better than complicated.
     - Flat is better than nested.
     - Sparse is better than dense.
     - Readability counts.
     - Special cases aren't special enough to break the rules.
     - Although practicality beats purity.
     - Errors should never pass silently.
     - Unless explicitly silenced.
     - In the face of ambiguity, refuse the temptation to guess.
     - There should be one-- and preferably only one --obvious way to do it.
     - Although that way may not be obvious at first unless you're Dutch.
     - Now is better than never.
     - Although never is often better than _right_ now.
     - If the implementation is hard to explain, it's a bad idea.
     - If the implementation is easy to explain, it may be a good idea.
     - Namespaces are one honking great idea -- let's do more of those!
     - Python is designed to be readable, and, well, Pythonic.
   - 体现 Python 崇尚简单、优雅的理念
5. **Testing Is Important**

   - 重视测试驱动开发,编写全面的单元测试和集成测试
   - 确保代码质量,方便重构和维护
6. **Batteries Included**

   - 充分利用 Python 丰富的标准库和第三方库
   - 减少重复造轮子,提高开发效率

## PEP8 规范

PEP 8 是 Python 编程的事实标准代码风格指南,其主要内容包括:

1. **命名约定**

   - 变量、函数、模块使用小写字母加下划线
   - 类名使用驼峰式命名
   - 常量全部大写
   - 受保护的实例属性以单个下划线开头
   - 私有的实例属性以两个下划线开头
2. **缩进和空白**

   - 使用 4 个空格作为缩进单位
   - 顶层函数和类定义之间空两行
   - 二元运算符两侧各加一个空格
3. **导入风格**

   - 每个 import 语句独占一行
   - 导入顺序为:标准库、第三方库、自定义库
4. **行长限制**

   - 每行不超过 79 个字符
   - 如果超出可以使用括号换行
5. **注释和文档化**

   - 使用英文编写注释和文档
   - 函数使用 docstring 描述
6. 其他建议

   - 不要使用制表符进行缩进
   - 避免使用单字母变量名
   - 慎用 `from module import *`

PEP 8 的目的是通过一致的代码风格来提高代码的可读性和可维护性。遵守这些约定可以让 Python 代码更加 Pythonic。

PEP 8 规范原文可在如下链接查看：

[https://peps.python.org/pep-0008/](https://peps.python.org/pep-0008/)

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240730234017469-1213632624.png)


中文版可在如下链接查看：

[https://www.cnblogs.com/bymo/p/9567140.html](https://www.cnblogs.com/bymo/p/9567140.html)

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240730234025367-2093493491.png)


![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240730234030531-1504013184.png)

