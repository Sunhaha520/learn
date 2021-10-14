---
title: OpenCV的简单应用之物体识别
date: 2021-10-10 21:18:43
tags: 计算机视觉
categories: 学习笔记
cover: https://s.pc.qq.com/tousu/img/20211010/3057515_1633872364.jpg
---

## 关于OpenCV

本章代码实现使用 *OpenCV*，*OpenCV* 是一个开源的计算机视觉库，它轻量，功能强大，实现了图像处理和计算机视觉方面的诸多算法，可以运行在 Linux、Windows、Android 和 Mac OS 操作系统上。同时提供了 Python、Ruby、MATLAB 等语言的接口。</br>**OpenCV**的全称是Open Source Computer Vision Library，是一个跨平台的计算机视觉库。OpenCV是由英特尔公司发起并参与开发，以BSD许可证授权发行，可以在商业和研究领域中免费使用。OpenCV可用于开发实时的图像处理、计算机视觉以及模式识别程序。该程序库也可以使用英特尔公司的IPP进行加速处理。下面是OpenCV项目的地址：

{% link OpenCV, https://opencv.org/,https://cdn.jsdelivr.net/gh/xaoxuu/cdn-assets@master/logo/256/safari.png %}

## 应用场景



| 😀 **人脸识别** |   🤚手势识别    |   💻人机交互   |
| :------------: | :------------: | :-----------: |
| 👨‍🔧**增强现实** | 🙆‍♂️**动作识别** | 🏆**运动跟踪** |
|  🤖**机器人**   | 📷**图像分割**  | 🚗**物体识别** |

## 简单开发

### 开发环境

| python 7.0 | OpenCV 4.5.4 | cvzone 1.4.1 |
| :--------: | :----------: | :----------: |

### 简单代码实现

#### 实现流程

1.读取原始图片 --> 2.程序进行处理 --> 3.输出识别结果


   

#### 代码实现



{% note info flat %}info 如果代码报错请注意缩进和环境版本{% endnote %}

```python
#小阿宇2021-10-10
import cv2
img = cv2.imread('leijun.jpg')#导入了雷军的图片

classNames = ['person', 'hat','cat','dog','pen','man','woman']#创建一个合集，用于识别后显示物体名称
configPath = 'ssd_mobilenet_v3_large_coco_2020_01_14.pbtxt'#引入必要文件，我会放在下方
weightsPath = 'frozen_inference_graph.pb'
#输入图像预处理
net = cv2.dnn_DetectionModel(weightsPath, configPath)
net.setInputSize(320, 320)#预处理，输入图像缩放
net.setInputScale(1.0 / 127.5)#输入数据归一化
net.setInputMean((127.5, 127.5, 127.5))
net.setInputSwapRB(True)#RB通道数据交换

classIds, confs, bbox = net.detect(img, confThreshold=0.5)
print(classIds, bbox)
#输出样式调整
for classId, confidence, box in zip(classIds.flatten(), confs.flatten(), bbox):
    cv2.rectangle(img, box, color=(0, 255, 0),thickness=4)
    cv2.putText(img, classNames[classId - 1], (box[0] + 10, box[1] + 30),
                cv2.FONT_HERSHEY_COMPLEX, 1, (0, 255, 0), 1)

cv2.imshow("Output", img)
cv2.waitKey(0)
```

由于本人只是个刚入门不久的菜鸟，很多东西都是仿照大佬的实现的，如果有不足的地方还望指正，国内有关OpenCV的资料有点少，甚至报错的情况解决都查不到相关解决方法。

#### 识别效果

{% image https://s.pc.qq.com/tousu/img/20211010/6633299_1633880550.jpg, alt=雷军大佬为啥不是神？ %}

### 一些总结

目前有点沉迷计算机视觉的学习当中，我建了一个仓库用来存放学习过程中写下的代码，仓库地址（[传送门](https://github.com/Sunhaha520/Machine-Vision-Project)）

本程序所需要的文件如下：

{% btns rounded grid5 %}
{% cell 下载源码, https://wwe.lanzoui.com/itbcpg3hncb, fas fa-download %}
{% endbtns %}




