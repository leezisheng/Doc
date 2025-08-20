# 一文速通 Python 并行计算：14 Python 异步编程-协程的管理和调度

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250416003327388-1352068275.png)

# **摘要：**

Python 异步编程基于 async/await 构建协程，运行在事件循环中。协程生成 Task，遇到 await 时挂起，I/O 完成触发回调恢复运行，通过事件循环非阻塞调度并发任务，实现单线程高并发。

![image](https://img2024.cnblogs.com/blog/2591203/202503/2591203-20250321010016257-450656136.png)

> **关于我们更多介绍可以查看云文档：**[Freak 嵌入式工作室云文档](https://f1829ryac0m.feishu.cn/docx/SGvHdRW1eoxgGIxwIjacX7SVnVb?from=from_copylink)**，或者访问我们的 wiki：****[https://github.com/leezisheng/Doc/wik](https://github.com/leezisheng/Doc/wik)**

# **原文链接：**

[**FreakStudio的博客**](https://www.cnblogs.com/FreakEmbedded)

# **往期推荐：**

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

[**全网最适合入门的面向对象编程教程：54 Python字符串与序列化-字符串格式化与format方法**](https://mp.weixin.qq.com/s/z3JS3dcpPQTD9ygWyxRUDg)

[**全网最适合入门的面向对象编程教程：55 Python字符串与序列化-字节序列类型和可变字节字符串**](https://mp.weixin.qq.com/s/C0rgRhmC1ydh2PpEwAuMlw)

[**全网最适合入门的面向对象编程教程：56 Python字符串与序列化-正则表达式和re模块应用**](https://mp.weixin.qq.com/s/UmXPSAbrLvYyH-45kBHLZQ)

[**全网最适合入门的面向对象编程教程：57 Python字符串与序列化-序列化与反序列化**](https://mp.weixin.qq.com/s/-Y8DX8wo1OAhKkWK7dikzg)

[**全网最适合入门的面向对象编程教程：58 Python字符串与序列化-序列化Web对象的定义与实现**](https://mp.weixin.qq.com/s/BFTYNXXtXarbU70RvOs20Q)

[**全网最适合入门的面向对象编程教程：59 Python并行与并发-并行与并发和线程与进程**](https://mp.weixin.qq.com/s/cgs1FP0bRMvqXv00J1AzkA)

[**一文速通Python并行计算：00 并行计算的基本概念**](https://mp.weixin.qq.com/s/plVWoeJY-W4Yhm25jrt9yw)

[**一文速通Python并行计算：01 Python多线程编程-基本概念、切换流程、GIL锁机制和生产者与消费者模型**](https://mp.weixin.qq.com/s/SJx4UHy_Ql0gnz_PklWaRg)

[**一文速通Python并行计算：02 Python多线程编程-threading模块、线程的创建和查询与守护线程**](https://mp.weixin.qq.com/s/wc3Vu_Ymzuq4cJFz5g5L0A)

[**一文速通Python并行计算：03 Python多线程编程-多线程同步（上）—基于互斥锁、递归锁和信号量**](https://mp.weixin.qq.com/s/LBNCaDv-PhNEkpT_hTqtGA)

[**一文速通Python并行计算：04 Python多线程编程-多线程同步（下）—基于条件变量、事件和屏障**](https://mp.weixin.qq.com/s/oaMad4LndD8517WdWwCeng)

[**一文速通Python并行计算：05 Python多线程编程-线程的定时运行**](https://mp.weixin.qq.com/s/Dh4-nFCj6fEYzt0DloNVNA)

[**一文速通Python并行计算：06 Python多线程编程-基于队列进行通信**](https://mp.weixin.qq.com/s/vnBkExVk6IPuXP81NxR5HA)

[**一文速通Python并行计算：07 Python多线程编程-线程池的使用和多线程的性能评估**](https://mp.weixin.qq.com/s/8QeUDrREakdMTYsxYuHLdA)

[**一文速通Python并行计算：08 Python多进程编程-进程的创建命名、获取ID、守护进程的创建和终止进程**](https://mp.weixin.qq.com/s/Ypqdm9sF1qxvta3l3uNwrg)

[**一文速通Python并行计算：09 Python多进程编程-进程之间的数据同步-基于互斥锁、递归锁、信号量、条件变量、事件和屏障**](https://mp.weixin.qq.com/s/3XMun_vJ3bH2l-72NT8XdQ)

[**一文速通Python并行计算：10 Python多进程编程-进程之间的数据共享-基于共享内存和数据管理器**](https://mp.weixin.qq.com/s/mJVP6sFtmD21ZvEKQrp3uA)

[**一文速通Python并行计算：11 Python多进程编程-进程之间的数据安全传输-基于队列和管道**](https://mp.weixin.qq.com/s/yhFPpeFQn9N5t8JHwGCo4g)

[**一文速通Python并行计算：12 Python多进程编程-进程池Pool**](https://mp.weixin.qq.com/s/ZLC8wZUeY4esWGSCKytGIw)

[**一文速通Python并行计算：13 Python异步编程-基本概念与事件循环和回调机制**](https://mp.weixin.qq.com/s/jOCE4J8vAaMT2VToqcQQwQ)

# **更多精彩内容可看：**

[**C语言一点五编程实战：纯 C 的模块化×继承×多态框架**](https://mp.weixin.qq.com/s/A13chtfHQbR2dHHvan-yIA)

[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483747&idx=1&sn=0e203586516fd6e925085b9c1244dbee&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483719&idx=1&sn=7ece9da65d002fdc3df9539cc43f3a8d&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483671&idx=1&sn=c267a0c6f4ab93d6b6d934bf803b5919&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483774&idx=1&sn=46d57506febe92c1719c8567ebe95269&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483854&idx=1&sn=fd666dc501a0de850abfbd8793abff00&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")

[**Avnet ZUBoard 1CG开发板—深度学习新选择**](https://mp.weixin.qq.com/s/2-Z6WqekVOuDbEdiE65Wfw)

[**工程师不要迷信开源代码，还要注重基本功**](https://mp.weixin.qq.com/s/WrFVqS2-s1g6RYNd_Q5CDA)

[**什么？配色个性化的电机驱动模块？！！**](https://mp.weixin.qq.com/s/FUzf9kAHABNfo2aZh1jHzA)

[**什么？XIAO主控新出三款扩展板!**](https://mp.weixin.qq.com/s/TNsGwgi0pdE9v-tY4FZu6w)

[**手把手教你实现Arduino发布第三方库**](https://mp.weixin.qq.com/s/0jIkDXaGKFOn2o03wUmUmQ)

[**万字长文手把手教你实现MicroPython/Python发布第三方库**](https://mp.weixin.qq.com/s/7n7tYqg5GVHvRC9TUi50MA)

[**一文速通电子设计大赛，电子人必看的获奖秘籍**](https://mp.weixin.qq.com/s/nxKpy35t-ueg4KSTCu0_TQ)

[**一文速通光电设计大赛，电子人必看！**](https://mp.weixin.qq.com/s/492GMMgNKbIr1n3G6NX7Xg)

[**工科比赛“无脑”操作指南：知识学习硬件选购→代码调试→报告撰写的保姆级路线图**](https://mp.weixin.qq.com/s/9Xxc0lF5aA4rVVcwhdnpHQ)

[**单场会议拍摄收费6000+？拍摄技巧和步骤都在这里**](https://mp.weixin.qq.com/s/R9UI3jLUFhANIxl9y8aIIA)

[**0基础如何冲击大唐杯国奖？学姐的的备赛心得都在这里**](https://mp.weixin.qq.com/s/9IJIHjTH_Dt1D9DMfHRQVw)

[**爆肝整理长文】大学生竞赛速通指南：选题 × 组队 × 路演 48 小时备赛搞定**](https://mp.weixin.qq.com/s/31-doRja81SZ2rqad8YiKg)

[**当代大学生竞赛乱象：从“内卷”到“祖传项目”的生存指南**](https://mp.weixin.qq.com/s/xmNkjsOEBZFKoIbnlcR2rg)

[**女大学生摆摊亏损5000元踩点实录：成都哪里人最多、最容易赚到钱？我告诉你！**](https://mp.weixin.qq.com/s/4QWMuN3i5rrTCWnOWNi8UA)

[**用拍立得在成都网红打卡点赚钱：一份超实用地摊级旅游副业教程**](https://mp.weixin.qq.com/s/59lNhEwaO2Yh__Pe8HRyJA)

[**成都印象：一个电子女孩亲手做了点浪漫**](https://mp.weixin.qq.com/s/aixb4fNG2zT_wyE0HWX6Uw)

[**普通继电器 vs 磁保持继电器 vs MOS管：工作原理与电路设计全解析**](https://mp.weixin.qq.com/s/LfxgJxSoqFpabFQI4635kA)

[**告别TP4056！国产SY3501D单芯片搞定充放电+升压，仅需7个元件！附开源PCB文件**](https://mp.weixin.qq.com/s/gtTuP9_gE2Lav0L9g1WKWg)

[**POB面向老板编程—现实驱动的新型编程范式**](https://mp.weixin.qq.com/s/n-XTcXv4gq7rD_65-JJTNA)


# **文档获取：**

可访问如下链接进行对文档下载：

**[https://github.com/leezisheng/Doc](https://github.com/leezisheng/Doc)**

该文档是一份关于 **并行计算** 和 **Python 并发编程** 的学习指南，内容涵盖了并行计算的基本概念、Python 多线程编程、多进程编程以及协程编程的核心知识点：

![image](https://img2024.cnblogs.com/blog/2591203/202503/2591203-20250321010038855-257589202.png)

# **正文**

在上文提到的例子中，我们看到当一个程序变得很大而且复杂时，将其划分为子程序，每一部分实现特定的任务是个不错的方案。子程序不能单独执行，只能在主程序的请求下执行，主程序负责协调使用各个子程序。**协程就是子程序的泛化。和子程序一样的事，协程只负责计算任务的一步；和子程序不一样的是，协程没有主程序来进行调度。这是因为协程通过管道连接在一起，没有监视函数负责顺序调用它们。**

对于子程序来说，调用是通过栈实现的，子程序调用总是一个入口，一次返回，调用顺序是明确的。比如 A 调用 B，B 在执行过程中又调用了 C，C 执行完毕返回，B 执行完毕返回，最后是 A 执行完毕。协程看上去也是子程序，但**执行过程中，在子程序内部可中断，然后转而执行别的子程序，在适当的时候再返回来接着执行。从心理学的角度看，协程类似于人类的“任务切换”能力，我们可以暂时将注意力从一个任务转移到另一个，然后再回来继续未完成的任务。**

或者说，**在协程中，执行点可以被挂起，可以被从之前挂起的点恢复执行。**通过协程池就可以插入到计算中：运行第一个任务，直到它返回(yield)执行权，然后运行下一个，这样顺着执行下去。**这种插入的控制组件就是前文介绍的事件循环。它持续追踪所有的协程并执行它们。**

协程的另外一些重要特性如下：

- 协程可以有多个入口点，并可以 yield 多次；
- 协程可以将执行权交给其他协程

yield 表示协程在此暂停，并且将执行权交给其他协程。因为协程**可以将值与控制权一起传递给另一个协程**，所以“yield 一个值”就表示将值传给下一个执行的协程。

协程与传统的线程或进程相比，有几个关键区别：

**（1）轻量级：**协程通常是用户态的，子程序切换（函数）不是线程切换，由程序自身控制，切换开销比系统线程小得多。

**（2）非抢占式：**协程的切换是协作式的，即协程需要显式地 yield 来让出控制权。

**（3）更好的控制：**协程提供了更细粒度的控制，如何以及何时切换是由程序员或协程库决定的。

协程可以处理 IO 密集型程序的效率问题，但是处理 CPU 密集型不是它的长处，如要充分发挥 CPU 利用率可以结合多进程 + 协程。

# 1.使用 Asyncio 管理协程

Python3.x 提供了如下方式实现协程：

- `asyncio + yield` from (python3.4+) ：

`asyncio` 是 Python3.4 版本引入的标准库，直接内置了对异步 IO 的支持。`asyncio` 的异步操作，需要在 `coroutine` 中通过 `yield from` 完成。

```python
import asyncio

@asyncio.coroutine
def test(i):
    print('test_1', i)
    r = yield from asyncio.sleep(1)
    print('test_2', i)

if __name__ == '__main__':
    loop = asyncio.get_event_loop()
    tasks = [test(i) for i in range(3)]
    loop.run_until_complete(asyncio.wait(tasks))
    loop.close()
```

`asyncio.coroutine` 使用装饰器，定义了一个协程。所谓装饰器是给现有的模块增添新的小功能的函数，它可以对原函数进行功能扩展，而且还不需要修改原函数的内容，也不需要修改原函数的调用。

使用 `@asyncio.coroutine` 定义协程的通用方法如下：

```bash
import asyncio

@asyncio.coroutine
def coroutine_function(function_arguments):
    _# DO_SOMETHING_
```

以上代码将 `test(i)` 定义为一个协程，然后就把这个协程放到事件循环中执行。`test(i)` 首先执行打印操作，这里用 `asyncio.sleep(1)` 模拟一个耗时 1 秒的 IO 操作，`asyncio.sleep()` 本身也是一个协程，这里使用 `yield from` 语法调用 `asyncio.sleep()`，但注意线程不会等待 `asyncio.sleep()`，而是直接中断并执行下一个消息循环。当 `asyncio.sleep()` 返回时，线程就可以从 `yield from` 拿到返回值（此处是 `None`），然后接着执行下一行语句。由此实现异步执行。

- `asyncio + async/await `(python3.5+)：

为了简化并更好地标识异步 IO，从 Python3.5 开始引入了新的语法 async 和 await，可以让 coroutine 的代码更简洁易读。请注意，async 和 await 是 coroutine 的新语法，使用新语法只需要做两步简单的替换：

- 把 @asyncio.coroutine 替换为 async；
- 把 yield from 替换为 await，即让出当前的执行权，等待的对象有结果返回时，再重新获得可以被继续执行的权利，只有可等待对象才能被 await。

**注意，包含 @asyncio.coroutine 装饰器的将从 Python3.11 中删除，因此 asyncio 模块没有 @asyncio.coroutine 装饰符。**

```python
import asyncio
async def test(i):
    print('test_1', i)
    await asyncio.sleep(1)
    print('test_2', i)

if __name__ == '__main__':
    loop = asyncio.new_event_loop()
    asyncio.set_event_loop(loop)
    _# 在python3.8后直接把协程对象传给asyncio.wait()是不行的，_
    _# 必须封装成tasks对象传入_
    tasks = [loop.create_task(test(1)),loop.create_task(test(2)),loop.create_task(test(3))]
    loop.run_until_complete(asyncio.wait(tasks))
    loop.close()
```

![image](https://img2024.cnblogs.com/blog/2591203/202508/2591203-20250816222143826-799507894.png)


除了 `await` 方法，`asyncio` 提供了**asyncio.run()**来执行协程：

`run()` 函数接收一个协程对象，在执行时，总会**创建一个新的事件循环，并在结束后关闭循环。****理想情况下，****run() ****函数应当被作为程序的总入口，并且只会被调用一次。**如果同一线程中还有其它事件循环在运行，则此方法不能被调用。

![image](https://img2024.cnblogs.com/blog/2591203/202508/2591203-20250816222153831-1097253441.png)


# 2.使用 Asyncio 控制任务

`Asyncio` 是用来处理事件循环中的异步进程和并发任务执行的。**它还提供了 ****asyncio.Task()**** 类，可以在任务中使用协程。**它的作用是，在同一事件循环中,**运行某一个任务的同时可以并发地运行多个任务。当协程被包在任务中，它会自动将任务和事件循环连接起来，当事件循环启动的时候，任务自动运行。**这样就提供了一个可以自动驱动协程的机制。

![image](https://img2024.cnblogs.com/blog/2591203/202508/2591203-20250816222200862-426518909.png)


## 2.1 asyncio.create_task()

![image](https://img2024.cnblogs.com/blog/2591203/202508/2591203-20250816222205006-1026761286.png)


下面的例子中我们使用 `asyncio.create_task()` 创建 Task，`create_task()` 会把一个协程打包成一个任务（`Task`），并立即排入日程准备执行，函数返回值是打包完成的 `Task ` 对象。

```python
import asyncio
import time
async def foo(n):
    await asyncio.sleep(n)

async def main():
    task1 = asyncio.create_task(foo(1))
    task2 = asyncio.create_task(foo(2))
    t1 = time.time()
    print('hello')
    await task1
    await task2
    print('coroutine')
    t2 = time.time()
    print('cost:', t2 - t1)

asyncio.run(main())
```

如下为运行结果：

![image](https://img2024.cnblogs.com/blog/2591203/202508/2591203-20250816222211532-613172051.png)


当使用 `create_task() ` 时，创建的任务立即被加入到事件循环中，并不会阻塞当前的程序，所以上述程序在打印出 `hello` 后只需等待 2 秒就打印出 `coroutine`。

## 2.2 asyncio.gather()

`asyncio.gather()` 函数允许调用者将多个可等待对象组合在一起。分组后，可等待对象可以并发执行、等待和取消。它是一个有用的实用函数，可用于分组和执行多个协程或多个任务。

![image](https://img2024.cnblogs.com/blog/2591203/202508/2591203-20250816222216259-1606004006.png)


从功能上看，`asyncio.wait` 和 `asyncio.gather` 实现的效果是相同的，都是把所有 `Task ` 任务结果收集起来。但不同的是，`asyncio.wait` 会返回两个值：`done` 和 `pending`，`done` 为已完成的协程 `Task`，`pending ` 为超时未完成的协程 `Task`，需通过 `future.result` 调用 `Task` 的 `result`；而 **asyncio.gather****返回的是所有已完成****Task****的****result****，不需要再进行调用或其他操作，就可以得到全部结果。**

```python
import asyncio

async def foo():
    return 'foo'
async def bar():
    raise RuntimeError('fake runtime error')
async def main():
    task1 = asyncio.create_task(foo())
    task2 = asyncio.create_task(bar())

    _# return_exceptions=True_
    _# 如果return_exceptions为True，_
    _# 异常会和成功的结果一样处理，并聚合至结果列表_
    results = await asyncio.gather(task1, task2, return_exceptions=True)
    print(results)
    _# 返回结果的顺序和传参顺序一致_
    _# isinstance() 函数来判断一个对象是否是一个已知的类型_
    _# isinstance(object, classinfo)_
    assert isinstance(results[1], RuntimeError)
    try:
        _# 如果return_exceptions为False(默认)_
        _# 所引发的首个异常会立即传播给等待gather()的任务_
        results = await asyncio.gather(task1, task2, return_exceptions=False)
        _# 此处打印并不会被执行, results 也未被赋值_
        print(results)

    except RuntimeError as runtime_err:
        _# 捕获异常并打印: fake runtime error_
        print(runtime_err)

asyncio.run(main())
```

执行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202508/2591203-20250816222223006-1753753680.png)


## 2.3 asyncio.wait()

`asyncio.wait() ` 函数可用于**等待一组异步任务完成**，回想一下，`asyncio ` 任务是包装协程的 `asyncio.Task` 类的一个实例。它允许独立调度和执行协程，`Task` 实例提供任务句柄以查询状态和获取结果。**wait()****函数允许我们等待一组任务完成。等待调用可以配置为等待不同的条件，例如所有任务完成、第一个任务完成以及第一个任务因错误而失败。**

![image](https://img2024.cnblogs.com/blog/2591203/202508/2591203-20250816222226567-337233584.png)


`asyncio.wait ` 最常见的写法是：`await asyncio.wait(task_list)`，表示运行直到所有给定的协程都完成。常见写法为：

```bash
...
_# create many tasks_
tasks = [asyncio.create_task(task_coro(i)) for i in range(10)]
```

示例代码如下：

```python
import asyncio

async def foo():
    await asyncio.sleep(3)
    return 'foo'
async def bar():
    await asyncio.sleep(1)
    return 'bar'
async def main():
    task1 = asyncio.create_task(foo())
    task2 = asyncio.create_task(bar())
    _# 有一个任务执行完成即返回, 总共耗时 1 秒_
    done, pending = await asyncio.gather(task1, task2, return_exceptions=True)
    _# done 集合里包含打包成 Task 的 bar()_
    print(f'done: {done}')
    _# pendding 集合里包含打包成 Task 的 foo()_
    print(f'pending: {pending}')
    _# 所有任务执行完成后返回, 总共耗时 3 秒_
    done, pending = await asyncio.gather(task1, task2, return_exceptions=True)
    _# done 集合里包含被带打包成 Task 的 foo() 和 bar()_
    print(f'done: {done}')
    _# pending 集合为空_
    print(f'pending: {pending}')
    _# 所有任务执行完成, 但运行时间不能超 2 秒后返回, 总共耗时 2 秒_
    done, pending = await asyncio.gather(task1, task2, return_exceptions=True)
    _# done 集合里包含打包成 Task 的 bar()_
    print(f'done: {done}')
    _# pendding 集合里包含打包成 Task 的 foo()_
    print(f'pending: {pending}')
asyncio.run(main())
```

![image](https://img2024.cnblogs.com/blog/2591203/202508/2591203-20250816222232614-1209280312.png)


## 2.4 asyncio.as_completed()

有时，我们必须在完成一个后台任务后立即开始下面的动作。比如我们爬取一些数据，马上调用机器学习模型进行计算，`gather` 方法不能满足我们的需求，但是我们可以使用 `as_completed` 方法。

![image](https://img2024.cnblogs.com/blog/2591203/202508/2591203-20250816222236988-454507686.png)


as_completed 不是并发方法，接受 aws 集合，返回一个带有 yield 语句的迭代器。所以我们可以直接遍历每个完成的后台任务，我们可以对每个任务单独处理异常，而不影响其他任务的执行：

示例代码如下：

```python
import asyncio

async def foo():
    await asyncio.sleep(2)
    return 'foo'

async def bar():
    await asyncio.sleep(1)
    return 'bar'

async def main():
    for fut in asyncio.as_completed({foo(), bar()}):
        earliest_result = await fut
        _# 会依次打印 bar 和 foo, 因为 bar() 会更早执行完毕_
        print(earliest_result)

asyncio.run(main())
```

![image](https://img2024.cnblogs.com/blog/2591203/202508/2591203-20250816222242210-1237702578.png)


以上介绍多任务并发时引入了超时的概念，超时也可以被应用在单独的一个任务中，使用 `asyncio.wait_for(aw, timeout) ` 函数，该函数接受一个任务 `aw ` 和超时时间 `timeout`，如果在限制时间内完成，则会正常返回，否则会被取消并抛出 `asyncio.TimeoutError` 异常。

为了防止任务被取消，可以使用 `asyncio.shield(aw) ` 进行保护。`shield()` 会屏蔽外部取消操作，如果外部任务被取消，其内部正在执行的任务不会被取消，在内部看来取消操作并没有发生，由于内部仍正常执行，执行完毕后会触发异常，如果确保程序能忽略异常继续执行，需要在外部使用 `try-except` 捕获异常。如果在任务内部取消，则会被成功取消。

`Asyncio` 模块为我们提供了 `asyncio.Task(coroutine)` 方法来处理计算任务，它可以调度协程的执行。任务对协程对象在事件循环的执行负责。如果被包裹的协程要从 `future`（就是协程的实例化对象）调度，那么任务会被挂起，等待 `future` 的计算结果。

当 `future` 计算完成，被包裹的协程将会拿到 future 返回的结果或异常继续执行。另外，需要注意的是，事件循环一次只能运行一个任务，除非还有其它事件循环在不同的线程并行运行，此任务才有可能和其他任务并行。当一个任务在等待 `future` 执行的期间，事件循环会运行一个新的任务。

在下面的代码中，我们展示了三个可以被 `Asyncio.Task()` 并发执行的数学函数，在这个例子中，我们定义了三个协程， `factorial`, `fibonacci` 和 `binomialCoeff `，为了能并行执行这三个任务，我们将其放到一个 `task` 的 `list` 中得到事件循环然后运行任务，最后，关闭事件循环。

```python
import asyncio

async def factorial(number):
    f = 1
    for i in range(2, number + 1):
        print("Asyncio.Task: Compute factorial(%s)" % (i))
        await asyncio.sleep(1)
        f *= i
    print("Asyncio.Task - factorial(%s) = %s" % (number, f))

async def fibonacci(number):
    a, b = 0, 1
    for i in range(number):
        print("Asyncio.Task: Compute fibonacci (%s)" % (i))
        await asyncio.sleep(1)
        a, b = b, a + b
    print("Asyncio.Task - fibonacci(%s) = %s" % (number, a))

async def binomialCoeff(n, k):
    result = 1
    for i in range(1, k+1):
        result = result * (n-i+1) / i
        print("Asyncio.Task: Compute binomialCoeff (%s)" % (i))
        await asyncio.sleep(1)
    print("Asyncio.Task - binomialCoeff(%s , %s) = %s" % (n, k, result))


if __name__ == "__main__":
    tasks = [asyncio.Task(factorial(10)),
             asyncio.Task(fibonacci(10)),
             asyncio.Task(binomialCoeff(20, 10))]
    loop = asyncio.get_event_loop()
    loop.run_until_complete(asyncio.wait(tasks))
    loop.close()
```

运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202508/2591203-20250816222249247-1580775032.png)


# 3.使用 Asyncio 和 Futures

`future ` 是一个 `Python ` 对象，它包含一个你希望在未来某个时间点获得、但目前还不存在的值。通常，当创建 `future ` 时，它没有任何值，因为它还不存在。在这种状态下，它被认为是不完整的、未解决的或根本没有完成的。然后一旦你得到一个结果，就可以设置 `future ` 的值，这将完成 `future`。那时，我们可以认为它已经完成，并可从 `future ` 中提取结果。

![image](https://img2024.cnblogs.com/blog/2591203/202508/2591203-20250816222254628-906152657.png)


要操作 `Asyncio` 中的 `Future `，必须进行以下声明：

```bash
import asyncio
future = asyncio.Future()
```

基本的方法有：

| **方法**                     | **作用**                                                 |
| ---------------------------- | -------------------------------------------------------- |
| **cancel()**                 | 取消 future 的执行，调度回调函数                         |
| **result()**                 | 返回 future 代表的结果                                   |
| **exception()**              | 返回 future 中的 Exception                               |
| **add_done_callback(fn)**    | 添加一个回调函数，当 future 执行的时候会调用这个回调函数 |
| **remove_done_callback(fn)** | 从“call whten done”列表中移除所有 callback 的实例      |
| **set_result(result)**       | 将 future 标为执行完成，并且设置 result 的值             |
| **set_exception(exception)** | 将 future 标为执行完成，并设置 Exception                 |

```python
import asyncio

_# asyncio 里面有一个类 Future，实例化之后即可得到 future 对象_
_# 然后 asyncio 里面还有一个类 Task，实例化之后即可得到 task 对象（也就是任务）_
_# 这个 Task 是 Future 的子类，所以我们用的基本都是 task 对象，而不是 future 对象_
_# 但 Future 这个类和 asyncio 的实现有着密不可分的关系，所以我们必须单独拿出来说_

future = asyncio.Future()
print(future)  _# <Future pending>_
print(future.__class__)  _# <class '_asyncio.Future'>_
print(f"future 是否完成: {future.done()}")  _# future 是否完成: False_

_# 设置一个值，通过 set_result_
future.set_result("古明地觉")
print(f"future 是否完成: {future.done()}")  _# future 是否完成: True_
print(future)  _# <Future finished result='古明地觉'>_
print(f"future 的返回值: {future.result()}")  _# future 的返回值: 古明地觉_
```

可通过调用其类型对象 `Future` 来创建 `future`，此时 `future` 上将没有结果集，因此调用其 `done` 方法将返回 `False`。此后用 `set_result` 方法设置 `future` 的值，这将把 `future` 标记为已完成。或者，如果想在 `future` 中设置一个异常，可调用 `set_exception`。**（必须在调用****set_result****（设置结果）之后才能调用****result****（获取结果），并且****set_result****只能调用一次，但****result****可以调用多次）**

在下面的示例代码中，我们定义了一个函数 `make_request`，该函数里面创建了一个 `future ` 和一个任务，该任务将在 1 秒后异步设置 `future ` 的结果。然后在主函数中调用 `make_request`，当调用它时，将立即得到一个没有结果的 `future`。然后 `await future` 会让主协程陷入等待，并将执行权交出去。一旦当 `future ` 有值了，那么再恢复 `main() ` 协程，拿到返回值进行处理。

```python
import asyncio

async def set_future_value(future):
    await asyncio.sleep(1)
    future.set_result("Hello World")
def make_request():
    future = asyncio.Future()
    _# 创建一个任务来异步设置 future 的值_
    asyncio.create_task(set_future_value(future))
    return future
async def main():
    _# 注意这里的 make_request，它是一个普通的函数，如果在外部直接调用肯定是会报错的_
    _# 因为没有事件循环，在执行 set_future_value 时会报错_
    _# 但如果在协程里面调用是没问题的，因为协程运行时，事件循环已经启动了_
    _# 此时在 make_request 里面，会启动一个任务_
    future = make_request()
    print(f"future 是否完成: {future.done()}")
    _# 阻塞等待，直到 future 有值，什么时候有值呢？_
    _# 显然是当协程 set_future_value 里面执行完 future.set_result 的时候_
    value = await future  _# 暂停 main()，直到 future 的值被设置完成_
    print(f"future 是否完成: {future.done()}")
    print(value)
asyncio.run(main())
```

![image](https://img2024.cnblogs.com/blog/2591203/202508/2591203-20250816222303207-566171698.png)
