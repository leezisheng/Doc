# 一文速通 Python 并行计算：13 Python 异步编程-基本概念与事件循环和回调机制

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

# 1.异步编程的基本概念

## **1.1 并发和并行的区别**

首先，我们先了解一下顺序和并发、串行和并行两个基本概念。

- **顺序和并发是指多个任务能否同时****开始****：**

  - ① 顺序：上一个开始执行的任务完成后，当前任务才能开始执行；
  - ② 并发：无论上一个开始执行的任务是否完成，当前任务都可以开始执行。
- **串行和并行是指多个任务能否同时****执行****：**

  - ① 串行：仅有一个任务执行单元，从物理上就只能单个任务地依次执行；
  - ② 并行：有多个任务执行单元，从物理上就可以多个任务一起执行。
- 并发和并行的区别在于：

  - **① 并发的关键是你有处理多个任务的能力**，不一定要同时执行多个任务，关注的是**任务的抽象调度；**
  - ② **并行的关键**是你有同时处理多个任务的能力，**关注的是任务的实际执行。**

## **1.2 并发和并行的联系**

- （1）并发和并行都可以是很多个线程，就看这些线程能不能同时被多个 cpu 执行，如果可以就说明是并行，而并发是多个线程被一个 cpu 轮流切换着执行。
- （2）并行必须多核 CPU 才能办到，并发单核就可以做到（并发宏观并行，微观串行）。
- （3）并行是并发的子集，并发不一定并行，并行一定属于并发。

## **1.3 异步模型的概念**

除了顺序执行和并行执行的模型之外，还有第三种模型，叫做异步模型。在异步模型中，允许同一时间发生（处理）多个事件。程序调用一个耗时较长的功能（方法）时，它并不会阻塞程序的执行流程，程序会继续往下执行。当功能执行完毕时，程序能够获得执行完毕的消息或能够访问到执行的结果（如果有返回值或需要返回值时）。**简单来说，异步编程（Asynchronous Programming）是一种允许程序在等待操作完成（如 I/O 操作）时继续执行其他任务的编程方式。**

下面通过一个示例来看一下同步和异步的区别。示例中程序通过网络获取两个文件，并对两个文件进行合并处理：

### **1.3.1 并发和并行的区别**

首先，我们先了解一下顺序和并发、串行和并行两个基本概念。

**（1）顺序和并发是指多个任务能否同时****开始****：**

① 顺序：上一个开始执行的任务完成后，当前任务才能开始执行；

② 并发：无论上一个开始执行的任务是否完成，当前任务都可以开始执行。

- **串行和并行是指多个任务能否同时****执行****：**

① 串行：仅有一个任务执行单元，从物理上就只能单个任务地依次执行；

② 并行：有多个任务执行单元，从物理上就可以多个任务一起执行。

- 并发和并行的区别在于：

**① 并发的关键是你有处理多个任务的能力**，不一定要同时执行多个任务，关注的是**任务的抽象调度；**

② **并行的关键**是你有同时处理多个任务的能力，**关注的是任务的实际执行。**

### **1.3.2 并发和并行的联系**

（1）并发和并行都可以是很多个线程，就看这些线程能不能同时被多个 cpu 执行，如果可以就说明是并行，而并发是多个线程被一个 cpu 轮流切换着执行。

（2）并行必须多核 CPU 才能办到，并发单核就可以做到（并发宏观并行，微观串行）。

（3）并行是并发的子集，并发不一定并行，并行一定属于并发。

### **1.3.3 异步模型的概念**

除了顺序执行和并行执行的模型之外，还有第三种模型，叫做异步模型。在异步模型中，允许同一时间发生（处理）多个事件。程序调用一个耗时较长的功能（方法）时，它并不会阻塞程序的执行流程，程序会继续往下执行。当功能执行完毕时，程序能够获得执行完毕的消息或能够访问到执行的结果（如果有返回值或需要返回值时）。**简单来说，异步编程（Asynchronous Programming）是一种允许程序在等待操作完成（如 I/O 操作）时继续执行其他任务的编程方式。**

下面通过一个示例来看一下同步和异步的区别。示例中程序通过网络获取两个文件，并对两个文件进行合并处理：

![image](https://img2024.cnblogs.com/blog/2591203/202507/2591203-20250710003527387-192899246.png)


上述示例，在异步系统当中的**解决方案是开启一个额外的线程进行处理。第一个线程获取第一个文件，第二个线程获取第二个文件，第二个线程并不需要等待第一个线程执行完毕再执行。**当两个线程都获得到对应的结果之后，再重新**同步处理**合并结果的操作。

再来看另外一个场景。单线程方法读取 OS（操作系统）当中的文件并需要进行数学运算。而在异步系统中，**程序发起读取 OS 中文件的请求，由于读取操作比较耗时，在等待读取文件时，程序会将控制器返回给 CPU 进行数学运算。**

在异步编程中，通常会针对比较耗时的功能提供一个函数，函数的参数中包含一个额外的参数，用于回调。而这个函数往往称作回调函数。当比较耗时的功能执行完毕时，通过回调函数将结果返回。

### **1.3.4 异步编程模型和进程、线程的关系**

这里以多线程举例，多线程是指同时并发或并行执行多个指令（线程）：

- 在单核处理器上，多线程往往会给人程序是在并行执行的错觉。实际上，处理器是通过调度算法在多线程之间进行切换和调度。或者根据外部输入（中断）和线程的优先级的组合来进行线程的切换；
- 在多核处理器上，线程才是真正的并行运行。多个处理器同时执行多个线程，以达到更加高效的处理。

一个简单的示例就是：开启两个浏览器窗口同时下载两个文件。每个窗口都使用一个新的线程去下载文件，它们之间并不需要谁等待谁完成，而是并行进行下载。

下图展示了并发执行多线程应用程序的流程：

![image](https://img2024.cnblogs.com/blog/2591203/202507/2591203-20250710003551934-521461905.png)


通过上面的介绍，我们可以看出多线程都是关于功能的并发执行。而异步编程是关于函数之间的非阻塞执行（让调用方法的主线程不需要同步等待另一线程的完成，从而可以让主线程干其它的事情），**我们可以将异步应用于单线程或多线程当中。因此，多线程只是异步编程的一种实现形式。**

异步编程与多线程编程模型很大的一点不同是， **多线程由操作系统决定在时间线上什么时候挂起某个活动或恢复某个活动，而在异步并发模型中，程序员必须假设线程可能在任何时间被挂起和替换。**

程序员可以将任务编写成许多可以间隔执行的小步骤， 这样的话如果一个任务需要另一个任务的输出，那么被依赖的任务必须接收它的输入。

我们可以利用线程池或进程池解决异步任务。

# 2.异步编程的重要实现方式-事件循环和回调机制

## 2.1 **事件循环机制**

**事件循环（Event Loop）是异步编程中的一个核心概念，它允许程序在处理 I/O 或其他耗时操作时保持响应。**在心理学中，这可以类比为人类的“自动驾驶模式”，在这种模式下，我们可以在不同任务间切换而不丧失关注的重点。

在计算系统中，可以产生事件的实体叫做**事件源**，能处理事件的实体叫做**事件处理者**。此外，还有一些第三方实体叫做**事件循环，它的作用是管理所有的事件，在整个程序运行过程中不断循环执行，追踪事件发生的顺序将它们放到队列中，当主线程空闲的时候，调用相应的事件处理者处理事件**。事件处理的部分是系统唯一活跃的部分，当一个事件处理完成，流程继续处理下一个事件。举例来说，在图形用户界面（GUI）应用中一边循环检测用户点击和输入事件，一边使程序在后台执行数据处理任务。

事件循环的工作过程可分为几个步骤：

**（1）注册事件和回调：**程序会向事件循环注册感兴趣的事件以及对应的回调函数。

**（2）等待事件发生：**事件循环运行并等待事件发生。在此过程中，程序会继续执行其他任务。

**（3）事件触发与回调执行：**一旦注册的事件发生，事件循环会调用相应的回调函数来处理这些事件。

这个过程类似于人类大脑如何处理感官输入：我们的大脑在等待重要信息的同时，能够处理其他信息流，一旦重要信息到来，会立即对其做出反应。

## 2.2 **回调机制**

回调机制（Callback Mechanism）是一种在异步编程中常见的设计模式，**允许在某个任务完成时自动执行预定的函数。**这在心理学上类似于条件反射：当特定的条件（事件）满足时，自动执行与之关联的行为（回调）。

在技术层面，**回调是一个函数指针或引用，当特定事件发生时由事件处理程序调用。它允许开发者将代码的某部分（就是回调函数）延迟执行，直到特定事件发生。**回调提供了一种灵活的方式来处理异步事件，同时将事件的发生和处理逻辑解耦，使得代码更加模块化。

## 2.3 具体实现

Python 的 `Asyncio` 模块提供了管理事件、协程、任务和线程的方法，以及编写并发代码的原语。此模块的主要组件和概念包括：

- ① 事件循环: 在 `Asyncio` 模块中，每一个进程都有一个事件循环。
- ② 协程: 这是子程序的泛化概念。协程可以在执行期间暂停，这样就可以等待外部的处理（例如 IO）完成之后，从之前暂停的地方恢复执行。
- ③`Futures`: 定义了 `Future ` 对象，和 `concurrent.futures` 模块一样，表示尚未完成的计算。
- ④`Tasks`: 这是 `Asyncio` 的子类，用于封装和管理并行模式下的协程。

![image](https://img2024.cnblogs.com/blog/2591203/202507/2591203-20250710003601039-1455594108.png)


`Asyncio` 提供了以下方法来管理事件循环：

| **方法**                                                | **作用**                                                                                         |
| ------------------------------------------------------- | ------------------------------------------------------------------------------------------------ |
| **loop = get_event_loop()**                             | **得到当前上下文的事件循环**                                                                     |
| **loop.call_later****(time_delay, callback, argument)** | **延后 time_delay 秒再执行 callback 方法**                                                       |
| **loop.call_soon****(callback, argument)**              | **尽可能快调用 callback, call_soon() 函数结束，****主线程回到事件循环之后就会马上调用 callback** |
| **loop.time()**                                         | **以 float 类型返回当前时间循环的内部时间**                                                      |
| **asyncio.set_event_loop()**                            | **为当前上下文设置事件循环**                                                                     |
| **asyncio.new_event_loop()**                            | **根据此策略创建一个新的时间循环并返回**                                                         |
| **loop.run_forever()**                                  | **在调用 stop() 之前将一直运行**                                                                 |

这里，我们定义了三个异步的任务，相继执行，如下图所示的顺序。

![image](https://img2024.cnblogs.com/blog/2591203/202507/2591203-20250710003628426-2096417549.png)


代码如下：

```python
import asyncio
import random
import time

_# end_time: 定义了function_1()可以运行的最长时间，_
_#           并通过call_later方法传入到function_2()中作为参数_
_# loop:     之前通过get_event_loop()方法得到的事件循环_

def function_1(end_time, loop):
    _# 打印出函数名字_
    print ("function_1 called")
    _# 延时0到1s_
    time.sleep(random.randint(0, 1))
    if (loop.time() + 1.0) < end_time:
        loop.call_later(1, function_2, end_time, loop)
    else:
        loop.stop()

def function_2(end_time, loop):
    print ("function_2 called ")
    _# 延时0到1s_
    time.sleep(random.randint(0, 1))
    if (loop.time() + 1.0) < end_time:
        loop.call_later(1, function_3, end_time, loop)
    else:
        loop.stop()
        
def function_3(end_time, loop):
    print ("function_3 called")
    _# 延时0到1s_
    time.sleep(random.randint(0, 1))
    if (loop.time() + 1.0) < end_time:
        loop.call_later(1, function_1, end_time, loop)
    else:
        loop.stop()

_# 得到这个事件循环_
loop = asyncio.new_event_loop()
asyncio.set_event_loop(loop)
_# 定义终止时间_
end_loop = loop.time() + 9
_# 通过 call_soon 方法调用了 function_1() 函数_
loop.call_soon(function_1, end_loop, loop)
_# 设置长周期，在此期间持续响应_
loop.run_forever()
_# 如果运行的时间超过了设定，时间循环终止_
loop.close()
```

运行结果如下：

![image](https://img2024.cnblogs.com/blog/2591203/202507/2591203-20250710003635587-2071284999.png)
