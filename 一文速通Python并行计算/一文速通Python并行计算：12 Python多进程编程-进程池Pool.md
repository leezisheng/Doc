# 一文速通 Python 并行计算：12 Python 多进程编程-进程池 Pool

![image](https://img2024.cnblogs.com/blog/2591203/202504/2591203-20250416003327388-1352068275.png)


# **摘要：**
在Python多进程编程中，Pool类用于创建进程池，可并行执行多个任务。通过map、apply等方法，将函数和参数分发到子进程，提高CPU利用率，简化进程管理，便于资源复用。适用于CPU密集型场景。

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

# 1.进程池的基本概念

`Python` 进程池 `Pool` 和前面讲解的 python 线程池类似，虽然使用多进程能提高效率，但是进程的创建会消耗大量的计算机资源（进程 `Process` 的创建远远大于线程 `Thread` 创建占用的资源），线程是计算机最小的运行单位，连线程都需要使用线程池，进程有什么理由不使用进程池？

多进程库提供了 `Pool` 类来实现简单的多进程任务，`Pool` 类可以提供指定数量的进程供用户调用，当有新的请求提交到 `Pool` 中时，如果池还没有满，就会创建一个新的进程来执行请求。如果池满，请求就会告知先等待，直到池中有进程结束，才会创建新的进程来执行这些请求。

`Pool` 类定义如下：

```bash
Pool([processes[, initializer[, initargs[, maxtasksperchild[, context]]]]])
（1）processes 是要使用的工作进程数目。如果 processes 为 None，则使用 os.cpu_count() 返回的值；
（2）initializer 是每个工作进程启动时要执行的可调用对象，默认为None，
initargs是要传给initializer的参数组；
（3）context 可被用于指定启动的工作进程的上下文。通常一个进程池是使用函数 multiprocessing.Pool() 或者一个上下文对象的 Pool() 方法创建的。在这两种情况下， context 都是适当设置的。
```

**注意，进程池对象的方法只有创建它的进程能够调用。**

Pool 类主要方法包括：

- `apply()` — 该函数用于传递不定参数，主进程会被阻塞直到函数执行结束（不建议使用，并且 3.x 以后不再出现），函数原型如下：

![image](https://img2024.cnblogs.com/blog/2591203/202506/2591203-20250605001707903-914163797.png)


- `apply_async`— 与 apply 用法一致，但它是非阻塞的且支持结果返回后进行回调，函数原型如下：

![image](https://img2024.cnblogs.com/blog/2591203/202506/2591203-20250605001711020-1519765598.png)


- `map()` — Pool 类中的 map 方法，与内置的 map 函数用法基本一致，它会使进程阻塞直到结果返回，函数原型如下：

![image](https://img2024.cnblogs.com/blog/2591203/202506/2591203-20250605001714380-1687330252.png)


注意：虽然第二个参数是一个迭代器，但在实际使用中，必须在整个队列都就绪后，程序才会运行子进程。

- `map_async()`— 与 map 用法一致，但是它是非阻塞的。其有关事项见 apply_async，函数原型如下：

![image](https://img2024.cnblogs.com/blog/2591203/202506/2591203-20250605001717951-981425974.png)


- `close()` — 关闭进程池（pool），使其不再接受新的任务。
- `terminal()` — 结束工作进程，不再处理未处理的任务。
- `join()`— 主进程阻塞等待子进程的退出， join 方法要在 close 或 terminate 之后使用。

同时，方法 `apply_async()` 和 `map_async()` 的返回值是 `AsyncResul` 的实例 `obj`。实例具有以下方法：

- `obj.get()`：返回结果，如果有必要则等待结果到达。timeout 是可选的。如果在指定时间内还没有到达，将引发一场。如果远程操作中引发了异常，它将在调用此方法时再次被引发；
- `obj.ready()`：如果调用完成，返回 True；
- `obj.successful()`：如果调用完成且没有引发异常，返回 True，如果在结果就绪之前调用此方法，引发异常；
- `obj.wait([timeout])`：等待结果变为可用；
- `obj.terminate()`：立即终止所有工作进程，同时不执行任何清理或结束任何挂起工作。如果 p 被垃圾回收，将自动调用此函数。

![image](https://img2024.cnblogs.com/blog/2591203/202506/2591203-20250605001724401-816064651.png)


# 2.apply()方法同步调用

下面的代码中，我们在进程池中创建三个进程，并且使用 `apply()` 方法同步执行 `work()` 函数，直到本次任务执行完毕拿到 `res`，最后在主进程打印结果。**同步就是指一个进程在执行某个请求的时候，若该请求需要一段时间才能返回信息，那么这个进程将会一直等待下去，直到收到返回信息才继续执行下去。**

```python
import os,time
from multiprocessing import Pool

def work(n):
    print('%s run' %os.getpid())
    time.sleep(0.5)
    return n**2
if __name__ == '__main__':
    p=Pool(3)
    res_l=[]
    for i in range(10):
        res=p.apply(work,args=(i,))
        res_l.append(res)
    print(res_l)
```

![image](https://img2024.cnblogs.com/blog/2591203/202506/2591203-20250605001732067-930587182.png)


可以看到，虽然 `pool` 有三个空闲进程，但后面的十个 `work` 函数都是依次串行执行，并没有并行计算。

# 3.apply_async()方法异步调用

下面的代码中，我们在进程池中创建三个进程，并且使用 `apply_async()` 方法异步执行 `work()` 函数，返回结果之后，将结果放入列表，归还进程，之后再执行新的任务。需要注意的是，进程池中的三个进程不会同时开启或者同时结束，而是执行完一个就释放一个进程，这个进程就去接收新的任务。

```python
import os
import time
import random
from multiprocessing import Pool

def work(n):
    print('%s run' %os.getpid())
    time.sleep(random.random())
    return n**2

if __name__ == '__main__':
    p=Pool(3)
    res_l=[]

    for i in range(10):
        res=p.apply_async(work,args=(i,))
        res_l.append(res)
    p.close()
    p.join()
    for res in res_l:
        print(res.get())
```

如下为运行结果：

![image](https://img2024.cnblogs.com/blog/2591203/202506/2591203-20250605001736793-1258698903.png)


可以看到多个 `work()` 函数并行执行。10 个任务，3 个进程，由于在进程池构造的时候允许同时最多执行 3 个进程，所以同时执行任务 1/任务 2/任务 3，重代码的输出结果来看，任务 1/任务 2/任务 3 执行后，for 循环进入阻塞状态，直到任务 1/任务 2/任务 3 其中一个结束之后才会 for 才会继续执行任务 4/任务 5/任务 6，并保证同时执行的最多只有 3 个任务（进程池 `multiprocessing`.Pool 和线程池 `ThreadPoolExecutor` 原理相同）。

这里注意，使用 `apply_async` 异步提交的任务，主进程需要使用 `join()` 方法，等待进程池内任务都处理完，然后可以用 `get` 方法收集 `apply_aync` 的结果。**异步是指进程不需要一直等下去，而是继续执行下面的操作，不管其他进程的状态。当有消息返回时系统会通知进程进行处理，这样可以提高执行的效率。**

# 4.使用 map 方法调用

下面的例子展示了如果通过进程池来执行一个并行应用。我们创建了有 4 个进程的进程池，然后使用 `map()` 方法进行一个简单的计算，`map()` 在得到结果之前一直阻塞，此方法将可迭代的数据的每一个元素作为进程池的一个任务来执行。

```python
import multiprocessing

def function_square(data):
    result = data*data
    return result

if __name__ == '__main__':
    inputs = list(range(100))
    pool = multiprocessing.Pool(processes=4)
_    # pool.map()方法将一些独立的任务提交给进程池_
    pool_outputs = pool.map(function_square, inputs)
    pool.close()
    pool.join()
_    # 计算的结果存储在()pool_outputs()中。_
_    # 最后的结果打印出来：_
    print ('Pool    :', pool_outputs)
```

如下为运行结果：

![image](https://img2024.cnblogs.com/blog/2591203/202506/2591203-20250605001742986-213116483.png)


# 5.callback 回调函数

在如下场景中，我们需要使用回调函数：进程池中任何一个任务一旦处理完了，就立即告知主进程处理任务结果，主进程则调用回调函数去处理该结果。我们可以把耗时间（阻塞）的任务放到进程池中，然后指定回调函数（主进程负责执行），这样主进程在执行回调函数时就省去了 I/O 的过程，直接拿到的是任务的结果。

这里我们以多进程进度条示例进行说明，首先我们需要使用 `pip` 方法安装 `tqdm` 库，`tqdm` 是 `Python` 进度条库，可以在 `Python` 长循环中添加一个进度提示信息。用户只需要封装任意的迭代器，是一个快速、扩展性强的进度条工具库。

`tqdm` 对象基本参数包括：

```bash
desc（'str'）: 传入进度条的前缀
mininterval（float）：最小的更新时间 [default: 0.1] seconds
set_postfix : 设置信息
elapsed：消耗的时间
remaining：剩余时间
rate_fmt：速率
```

示例代码如下：

```python
from tqdm import tqdm
from multiprocessing import Pool
import time
import os
_# 创建进度条对象_
_# 并设置进度以10递进_
pbar = tqdm(total=10)
_# 设置进度条的描述文字，用于显示任务的概要信息_
pbar.set_description('Sleep')
_# 使用labmda操作符将进度条更新函数转换为回调对象_
update = lambda *args: pbar.update()

def work(n):
    print('%s run' %os.getpid())
    time.sleep(1)
    return n**2

if __name__ == '__main__':
    p=Pool(3)
    res_l=[]
    for i in range(10):
        _# 在回调函数更新进度条_
        res=p.apply_async(work,args=(i,), callback=update)
        res_l.append(res)
    p.close()
    p.join()
    for res in res_l:
        print(res.get())
```

如下为运行结果，可以看到进程池每处理完一个任务，就会调用一次 `tqdm` 的 `update()`，从而实现多进程的进度条显示。

![image](https://img2024.cnblogs.com/blog/2591203/202506/2591203-20250605001749328-587121396.png)

