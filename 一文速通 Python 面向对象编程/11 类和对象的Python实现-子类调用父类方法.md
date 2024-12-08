# 全网最适合入门的面向对象编程教程：11 类和对象的 Python 实现-子类调用父类方法-模拟串口传感器和主机

# 摘要：

本节课，我们主要讲解了在 Python 类的继承中子类如何进行初始化、调用父类的属性和方法，同时讲解了模拟串口传感器和主机类的具体实现，并使用 xcom 串口助手与两个类进行串口通信使用。

# 原文链接：

[**FreakStudio 的博客**](https://www.cnblogs.com/FreakEmbedded)

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

# 更多精彩内容可看：
[**给你的 Python 加加速：一文速通 Python 并行计算**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483747&idx=1&sn=0e203586516fd6e925085b9c1244dbee&scene=21#wechat_redirect "**给你的 Python 加加速：一文速通 Python 并行计算**")

[**一文搞懂 CM3 单片机调试原理**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483719&idx=1&sn=7ece9da65d002fdc3df9539cc43f3a8d&scene=21#wechat_redirect "**一文搞懂 CM3 单片机调试原理**")

[**肝了半个月，嵌入式技术栈大汇总出炉**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483671&idx=1&sn=c267a0c6f4ab93d6b6d934bf803b5919&scene=21#wechat_redirect "**肝了半个月，嵌入式技术栈大汇总出炉**")

[**电子计算机类比赛的“武林秘籍”**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483774&idx=1&sn=46d57506febe92c1719c8567ebe95269&scene=21#wechat_redirect "**电子计算机类比赛的“武林秘籍”**")

[**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**](https://mp.weixin.qq.com/s?__biz=MzkwMTYzNTY3Ng==&mid=2247483854&idx=1&sn=fd666dc501a0de850abfbd8793abff00&chksm=c0b08afdf7c703eb494f8e402a5d60eba9a802bfdb02c07a5e1666a8a1b335e38240adc6c1b5&scene=21#wechat_redirect "**一个MicroPython的开源项目集锦：awesome-micropython，包含各个方面的Micropython工具库**")

# **文档和代码获取：**

可访问如下链接进行对文档下载：

[https://github.com/leezisheng/Doc](https://github.com/leezisheng/Doc)

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240709011450848-2009311855.png)


**本文档主要介绍如何使用 Python 进行面向对象编程，需要读者对 Python 语法和单片机开发具有基本了解。相比其他讲解 Python 面向对象编程的博客或书籍而言，本文档更加详细、侧重于嵌入式上位机应用，以上位机和下位机的常见串口数据收发、数据处理、动态图绘制等为应用实例，同时使用 Sourcetrail 代码软件对代码进行可视化阅读便于读者理解。**

**相关示例代码获取链接如下：**[https://github.com/leezisheng/Python-OOP-Demo](https://github.com/leezisheng/Python-OOP-Demo)

# 正文

## 模拟串口传感器和主机类的具体实现：

接下来看一下我们新建的两个类方法的具体实现，可以明确的是，SensorClass 和 MasterClass 都需要调用 SerialClass 类中有关串口收发的方法，也就是子类调用父类的方法，子类调用父类的方法有三种方式：

- **父类名.方法名(self)**：此时需要加上父类的类名前缀，且需要带上 self 参数变量。该方法单继承或多继承均适用。
- **super(子类名，self).父类方法名()/super().父类方法名**：使用 super()函数，但如果涉及多继承，该函数只能调用第一个直接父类的构造方法。

### **SensorClass 类的实现**

（1）首先，我们将 SensorClass 中工作状态的对应字符表示和命令对应字符表示设置为类属性，什么意思？我们来看如下代码：

```python
class SensorClass(SerialClass):
    _# 类变量：_
    _#   RESPOND_MODE-响应模式-0_
    _#   LOOP_MODE   -循环模式-1_
    RESPOND_MODE,LOOP_MODE = (0,1)
    _# 类变量：_
    _#   START_CMD       - 开启命令      -0_
    _#   STOP_CMD        - 关闭命令      -1_
    _#   SENDID_CMD      - 发送ID命令    -2_
    _#   SENDVALUE_CMD   - 发送数据命令   -3_
    START_CMD,STOP_CMD,SENDID_CMD,SENDVALUE_CMD = (0,1,2,3)
```

类属性归类所有，与前面讲的实例属性不同，**类属性就相当与全局变量，是实例对象共有的属性，类属性影响类的所有对象**；而实例对象的属性为实例对象自己私有，实例属性只影响当前对象。**类属性常用于存储常量、定义默认值或构造一个所有对象都能访问的缓存。**

这里，我们定义了两种类属性：

```python
RESPOND_MODE,LOOP_MODE = (0,1)
```

用于表示 SensorClass 不同工作模式。

```python
START_CMD,STOP_CMD,SENDID_CMD,SENDVALUE_CMD = (0,1,2,3)
```

用于表示不同命令。

（2）在初始化中，我们调用父类初始化方法进行，同时可以在初始化 SensorClass 类时指定 id、state、port 三个参数。

```python
def __init__(self,id:int = 0,state:int = RESPOND_MODE,port:str = "COM11"):
        # 调用父类的初始化方法，super() 函数将父类和子类连接
        super().__init__(port)
        self.sensorvalue = 0
        self.sensorid    = id
        self.sensorstate = state
```

这里，实际上 SensorClass 类初始化的参数应该包括其他有关串口配置相关的参数（波特率、校验位、数据位、停止位），由于串口通信双方这些参数配置相同，这里为了方便讲解故而简化。

（3）模拟传感器上电初始化，在实际传感器上电过程中会完成校准、自检等操作，这里我们简单输出传感器状态和 ID 号：

```python
_# 传感器上电初始化_
    def InitSensor(self):
        _# 传感器上电初始化工作_
        _# 同时输出ID号以及状态_
        print("Sensor %d Init complete : %d"%(self.sensorid,self.sensorstate))
```

（4）在传感器使能和关闭方法中，我们开启或关闭串口并打印相关信息：

```python
_# 开启传感器_
    def StartSensor(self):
        super().OpenSerial()
        print("Sensor %d start serial %s "%(self.sensorid,self.dev.port))
        
    _# 停止传感器_
    def StopSensor(self):
        super().CloseSerial()
        print("Sensor %d close serial %s " % (self.sensorid, self.dev.port))
```

（5）在传感器发送 ID 号的方法中，我们调用了父类的 WriteSerial 方法：

```python
_# 发送传感器ID号_
    def SendSensorID(self):
        super().WriteSerial(str(self.sensorid))
        print("Sensor %d send id "%self.sensorid)
```

（6）在传感器发送数据方法中，我们使用如下语句生成一个随机数：

```python
_# 生成[1, 10]内的随机整数_
        data = random.randint(1, 10)
```

注意，此方法需要使用 import random 语句导入 random 库。

同时调用父类的 WriteSerial 方法实现传感器数据的发送：

```python
_# 发送传感器数据_
    def SendSensorValue(self):
        _# 生成[1, 10]内的随机整数_
        data = random.randint(1, 10)
        super().WriteSerial(str(data))
        print("Sensor %d send data  %d" % (self.sensorid,data))
```

（7）在传感器接收命令方法中，我们调用了父类的 ReadSerial 接收命令：

```python
_# 接收主机指令_
    def RecvMasterCMD(self):
        cmd = super().ReadSerial()
        print("Sensor %d recv cmd %d " % (self.sensorid,cmd))
        return cmd
```

### **MasterClass 类的实现**

（1）首先定义关于工作模式和命令的类属性：

```python
class MasterClass(SerialClass):
    _# 类变量：_
    _#   BUSY_STATE  -忙碌状态-0_
    _#   IDLE_STATE  -空闲状态-1_
    BUSY_STATE, IDLE_STATE = (0, 1)
    _# 类变量：_
    _#   START_CMD       - 开启命令      -0_
    _#   STOP_CMD        - 关闭命令      -1_
    _#   SENDID_CMD      - 发送ID命令    -2_
    _#   SENDVALUE_CMD   - 发送数据命令   -3_
    START_CMD, STOP_CMD, SENDID_CMD, SENDVALUE_CMD = (0, 1, 2, 3)
```

（2）在初始化函数中调用父类的初始化方法，并定义 valuequeue 和__masterstatue 属性：

```python
_# 类的初始化_
    def __init__(self,state:int = IDLE_STATE,port:str = "COM17"):
        _# 调用父类的初始化方法，super() 函数将父类和子类连接_
        super().__init__(port)
        self.valuequeue   = queue.Queue(10)
        self.__masterstatue = state
```

（3）在 StartMaster 方法中我们打开串口并使用 logging.info（）方法输出调试信息：

```python
_# 开启主机_
    def StartMaster(self):
        super().OpenSerial()
        logging.info("START MASTER :"+self.dev.port)
```

这里，需要导入 logging 库并设置日志输出级别：

```python
import logging
_# 设置日志输出级别_
logging.basicConfig(level=logging.DEBUG)
```

（4）关闭主机方法中调用父类的 CloseSerial 方法：

```python
_# 停止主机_
    def StopMaster(self):
        super().CloseSerial()
        logging.info("CLOSE MASTER :" + self.dev.port)
```

（5）如下调用父类的 ReadSerial 方法接收 ID 号和数据：

```python
_# 接收传感器ID号_
    def RecvSensorID(self):
        sensorid = super().ReadSerial()
        logging.info("MASTER RECIEVE ID : " + str(sensorid))
        return sensorid

    _# 接收传感器数据_
    def RecvSensorValue(self):
        data = super().ReadSerial()
        logging.info("MASTER RECIEVE DATA : " + str(data))
        self.valuequeue.put(data)
        return data
```

（6）调用父类的 WriteSerial 方法发送指令：

```python
_# 主机发送命令_
    def SendSensorCMD(self,cmd):
        super().WriteSerial(str(cmd))
        logging.info("MASTER SEND CMD : " + str(cmd))
```

（7）如下 RetMasterStatue 方法获取主机状态：

```python
_# 主机返回工作状态-_
    def RetMasterStatue(self):
        return self.__masterstatue
```

## 完整代码

以下为两个类的完整代码：

```python
class SensorClass(SerialClass):
    _# 类变量：_
    _#   RESPOND_MODE -响应模式-0_
    _#   LOOP_MODE    -循环模式-1_
    RESPOND_MODE,LOOP_MODE = (0,1)
    _# 类变量：_
    _#   START_CMD       - 开启命令      -0_
    _#   STOP_CMD        - 关闭命令      -1_
    _#   SENDID_CMD      - 发送ID命令    -2_
    _#   SENDVALUE_CMD   - 发送数据命令   -3_
    START_CMD,STOP_CMD,SENDID_CMD,SENDVALUE_CMD = (0,1,2,3)

    _# 类的初始化_
    def __init__(self,port:str = "COM11",id:int = 0,state:int = RESPOND_MODE):
        _# 调用父类的初始化方法，super() 函数将父类和子类连接_
        super().__init__(port)
        self.sensorvalue = 0
        self.sensorid    = id
        self.sensorstate = state
    _# 传感器上电初始化_
    def InitSensor(self):
        _# 传感器上电初始化工作_
        _# 同时输出ID号以及状态_
        print("Sensor %d Init complete : %d"%(self.sensorid,self.sensorstate))
    _# 开启传感器_
    def StartSensor(self):
        super().OpenSerial()
        print("Sensor %d start serial %s "%(self.sensorid,self.dev.port))
    _# 停止传感器_
    def StopSensor(self):
        super().CloseSerial()
        print("Sensor %d close serial %s " % (self.sensorid, self.dev.port))
    _# 发送传感器ID号_
    def SendSensorID(self):
        super().WriteSerial(str(self.sensorid))
        print("Sensor %d send id "%self.sensorid)
    _# 发送传感器数据_
    def SendSensorValue(self):
        _# 生成[1, 10]内的随机整数_
        data = random.randint(1, 10)
        super().WriteSerial(str(data))
        print("Sensor %d send data  %d" % (self.sensorid,data))
    _# 接收主机指令_
    def RecvMasterCMD(self):
        cmd = super().ReadSerial()
        print("Sensor %d recv cmd %d " % (self.sensorid,cmd))
        return cmd

class MasterClass(SerialClass):
    _# 类变量：_
    _#   BUSY_STATE  -忙碌状态-0_
    _#   IDLE_STATE  -空闲状态-1_
    BUSY_STATE, IDLE_STATE = (0, 1)
    START_CMD, STOP_CMD, SENDID_CMD, SENDVALUE_CMD = (0, 1, 2, 3)

    _# 类的初始化_
    def __init__(self,state:int = IDLE_STATE,port:str = "COM17"):
        _# 调用父类的初始化方法，super() 函数将父类和子类连接_
        super().__init__(port)
        self.valuequeue   = queue.Queue(10)
        self.__masterstatue = state
    _# 开启主机_
    def StartMaster(self):
        super().OpenSerial()
        logging.info("START MASTER :"+self.dev.port)
    _# 停止主机_
    def StopMaster(self):
        super().CloseSerial()
        logging.info("CLOSE MASTER :" + self.dev.port)
    _# 接收传感器ID号_
    def RecvSensorID(self):
        sensorid = super().ReadSerial()
        logging.info("MASTER RECIEVE ID : " + str(sensorid))
        return sensorid
    _# 接收传感器数据_
    def RecvSensorValue(self):
        data = super().ReadSerial()
        logging.info("MASTER RECIEVE DATA : " + str(data))
        self.valuequeue.put(data)
        return data
    _# 主机发送命令_
    def SendSensorCMD(self,cmd):
        super().WriteSerial(str(cmd))
        logging.info("MASTER SEND CMD : " + str(cmd))
    _# 主机返回工作状态-_
    def RetMasterStatue(self):
        return self.__masterstatue
```

## 模拟实例

这里，我们使用 XCOM 软件和我们的 Python 程序进行交互。

### **传感器实验模拟**

这里，我们首先在主函数中创建传感器对象，完成初始化后使能传感器中串口模块，并设置循环，轮询读取指令并执行操作，示例代码如下：

```python
if __name__ == "__main__":
    _# 创建传感器对象_
    s = SensorClass(port="COM11", id=1, state=SensorClass.RESPOND_MODE)
    _# 初始化传感器_
    s.InitSensor()
    _# 传感器开启_
    s.StartSensor()

    while True:
        _# 根据不同指令执行不同操作_
        cmd = s.RecvMasterCMD()
        _# START_CMD, STOP_CMD, SENDID_CMD, SENDVALUE_CMD = (0, 1, 2, 3)_
        if cmd == SensorClass.SENDID_CMD:
            s.SendSensorID()
        elif cmd == SensorClass.SENDVALUE_CMD:
            s.SendSensorValue()
        elif cmd == SensorClass.STOP_CMD:
            s.StopSensor()
            break
    print(" Sensor Stop Work!")
```

我们来看一下实际验证效果：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240709011515215-1145028765.png)


### **主机实验模拟**

这里，我们首先在主函数中创建并开启主机对象，我们的 xcom 模拟传感器，主机在轮询中发送接收数据指令，并将接收的数据加入主机类的队列，最后发送停机命令，并关闭主机。

```python
if __name__ == "__main__":
    m = MasterClass(state=MasterClass.IDLE_STATE, port="COM17")
    m.StartMaster()

    _# START_CMD, STOP_CMD, SENDID_CMD, SENDVALUE_CMD = (0, 1, 2, 3)_
    _# 发送指令，获取传感器ID_
    m.SendSensorCMD(MasterClass.SENDID_CMD)
    m.RecvSensorID()

    for i in range(3):
        _# 发送指令，获取传感器数据_
        m.SendSensorCMD(MasterClass.SENDVALUE_CMD)
        m.RecvSensorValue()

    m.SendSensorCMD(MasterClass.STOP_CMD)
    m.StopMaster()

    print("Master Stop Work!")
```

这里我们将主机日志打印到文件中：

```python
_# 在配置下日志输出目标文件和日志格式_
LOG_FORMAT = "%(asctime)s - %(levelname)s - %(message)s"
logging.basicConfig(filename='my.log', level=logging.DEBUG, format=LOG_FORMAT)
```

我们来看一下实际验证效果：

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240709011533267-1225063650.png)


可以看到两个实验都可以完整运行，关于两个类的交互工作，我们将在后续多线程中讲到。

![image](https://img2024.cnblogs.com/blog/2591203/202407/2591203-20240709011540433-804249005.png)

