---
title: 第四节:C++程序流程结构
date: 2021-08-11 08:46:31
tags: C++
categories: 学习笔记
---

## 4 程序流程结构

C/C++支持最基本的三种程序运行结构：==顺序结构、选择结构、循环结构==

* 顺序结构：程序按顺序执行，不发生跳转
* 选择结构：依据条件是否满足，有选择的执行相应功能
* 循环结构：依据条件是否满足，循环多次执行某段代码



### 4.1 选择结构

#### 4.1.1 if语句

**作用：**执行满足条件的语句

if语句的三种形式

* 单行格式if语句

* 多行格式if语句

* 多条件的if语句

  

1. 单行格式if语句：`if(条件){ 条件满足执行的语句 }`

   ![img](https://p.pstatp.com/origin/pgc-image/203377ffd5a240558228e73eb25e7547)

   示例：

   ```C++
   int main() {
   
   	//选择结构-单行if语句
   	//输入一个分数，如果分数大于600分，视为考上一本大学，并在屏幕上打印
   
   	int score = 0;
   	cout << "请输入一个分数：" << endl;
   	cin >> score;
   
   	cout << "您输入的分数为： " << score << endl;
   
   	//if语句
   	//注意事项，在if判断语句后面，不要加分号
   	if (score > 600)
   	{
   		cout << "我考上了一本大学！！！" << endl;
   	}
   
   	system("pause");
   
   	return 0;
   }
   ```

   


> 注意：if条件表达式后不要加分号



2. 多行格式if语句：`if(条件){ 条件满足执行的语句 }else{ 条件不满足执行的语句 };`

![img](https://p.pstatp.com/origin/pgc-image/71068849d86f495ea0cfc25d54649110)



示例：

```C++
int main() {

	int score = 0;

	cout << "请输入考试分数：" << endl;

	cin >> score;

	if (score > 600)
	{
		cout << "我考上了一本大学" << endl;
	}
	else
	{
		cout << "我未考上一本大学" << endl;
	}

	system("pause");

	return 0;
}
```



3. 多条件的if语句：`if(条件1){ 条件1满足执行的语句 }else if(条件2){条件2满足执行的语句}... else{ 都不满足执行的语句}`

![img](https://p.pstatp.com/origin/pgc-image/683061cfa7354094ab0fb7fbcfcd4d36)



示例：

```C++
	int main() {

	int score = 0;

	cout << "请输入考试分数：" << endl;

	cin >> score;

	if (score > 600)
	{
		cout << "我考上了一本大学" << endl;
	}
	else if (score > 500)
	{
		cout << "我考上了二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "我考上了三本大学" << endl;
	}
	else
	{
		cout << "我未考上本科" << endl;
	}

	system("pause");

	return 0;
}
```



**嵌套if语句**：在if语句中，可以嵌套使用if语句，达到更精确的条件判断

案例需求：

* 提示用户输入一个高考考试分数，根据分数做如下判断
* 分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
* 在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。



**示例：**

```c++
int main() {

	int score = 0;

	cout << "请输入考试分数：" << endl;

	cin >> score;

	if (score > 600)
	{
		cout << "我考上了一本大学" << endl;
		if (score > 700)
		{
			cout << "我考上了北大" << endl;
		}
		else if (score > 650)
		{
			cout << "我考上了清华" << endl;
		}
		else
		{
			cout << "我考上了人大" << endl;
		}
		
	}
	else if (score > 500)
	{
		cout << "我考上了二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "我考上了三本大学" << endl;
	}
	else
	{
		cout << "我未考上本科" << endl;
	}

	system("pause");

	return 0;
}
```



**练习案例：** 三只小猪称体重

有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重？![三只小猪](https://p.pstatp.com/origin/pgc-image/909659339699491ba87d7b942415bd5b)

**我的代码实现：**

```c++
#include<iostream>
using namespace std;

int main()
{
	//三只小猪比体重
	int a=0;
	int b=0;
	int c=0;
	cout << "请输入第一只小猪的重量（kg）：" << endl;
	cin >> a;
	cout << "请输入第二只小猪的重量(kg)：" << endl;
	cin >> b;
	cout << "请输入第三只小猪的重量(kg)：" << endl;
	cin >> c;
	if (a > b && a > c)
	{
		cout << "最重的猪是A" << endl;
	}
	else if (b > a && b > c)
	{
		cout << "最重的猪是B" << endl;
	}
	else if (c > a && c > b)
	{
		cout << "最重的猪是C" << endl;
	}
	else
	{
		cout << "他们一样重" << endl;
	}
	system("pause");
	return 0;

	
}
```





#### 4.1.2 三目运算符

**作用：** 通过三目运算符实现简单的判断

**语法：**`表达式1 ? 表达式2 ：表达式3`

**解释：**

如果表达式1的值为真，执行表达式2，并返回表达式2的结果；

如果表达式1的值为假，执行表达式3，并返回表达式3的结果。

**示例：**

```C++
int main() {

	int a = 10;
	int b = 20;
	int c = 0;

	c = a > b ? a : b;
	cout << "c = " << c << endl;

	//C++中三目运算符返回的是变量,可以继续赋值

	(a > b ? a : b) = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}
```

> 总结：和if语句比较，三目运算符优点是短小整洁，缺点是如果用嵌套，结构不清晰





#### 4.1.3 switch语句

**作用：**执行多条件分支语句

**语法：**

```C++
switch(表达式)

{

	case 结果1：执行语句;break;

	case 结果2：执行语句;break;

	...

	default:执行语句;break;

}

```



**示例：**

```C++
int main() {

	//请给电影评分 
	//10 ~ 9   经典   
	// 8 ~ 7   非常好
	// 6 ~ 5   一般
	// 5分以下 烂片

	int score = 0;
	cout << "请给电影打分" << endl;
	cin >> score;

	switch (score)
	{
	case 10:
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
		cout << "非常好" << endl;
		break;
	case 7:
	case 6:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}

	system("pause");

	return 0;
}
```



> 注意1：switch语句中表达式类型只能是整型或者字符型

> 注意2：case里如果没有break，那么程序会一直向下执行

> 总结：与if语句比，对于多条件判断时，switch的结构清晰，执行效率高，缺点是switch不可以判断区间

**我的代码实现：**

```c++
#include<iostream>
using namespace std;

int main()
{
    //switch语句
    //给一个电影打分
    //10~9分，经典
    //8~7非常好
    //6~5一般
    //5以下，烂片
    int a=0;
    cout<<"****************************************************"<<endl;
    cout<<"                   电影打分系统                         "<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"               1.10~9分———非常好                      "<<endl;
    cout<<"               2.8~7分————还不错                      "<<endl;
    cout<<"               3.6~5分————一般般                      "<<endl;
    cout<<"               4.5分以下————太烂                      "<<endl;
    cout<<"*****************************************************"<<endl;
    cout<<"请您做出评价："<<endl;
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"你输入的是选项1，你认为这个电影非常好！"<<endl;
        break;
    case 2:
        cout<<"你输入的是选项2，你认为这个电影还不错。"<<endl;
        break;
    case 3:
        cout<<"你输入的是选项3，你认为这个电影一般般。"<<endl;
        break;
    case 4:
        cout<<"你输入的是选项4，你认为这个电影太烂。"<<endl;
        break;
    default:
        cout<<"你输入的值不合法"<<endl;
        break;
    }
     system("pause");
    return 0;
}
```





### 4.2 循环结构

#### 4.2.1 while循环语句

**作用：**满足循环条件，执行循环语句

**语法：**` while(循环条件){ 循环语句 }`

**解释：**==只要循环条件的结果为真，就执行循环语句==

![img](https://p.pstatp.com/origin/pgc-image/93383b38148645039ead60cd1c04ab2b)



**示例：**

```C++
int main() {

	int num = 0;
	while (num < 10)
	{
		cout << "num = " << num << endl;
		num++;
	}
	
	system("pause");

	return 0;
}
```



> 注意：在执行循环语句时候，程序必须提供跳出循环的出口，否则出现死循环









**while循环练习案例：**==猜数字==

**案例描述：**系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。

**我的代码实现：**

```c++
#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    int a=0;
    srand(time(0));
    int num=rand()%100+1;//产生小于100随机数
    /*cout<<num<<endl;*/
    while(1)
    {
    cout<<"请输入您猜到的数字(1~100):"<<endl;
    cin>>a;
    if(a<num)
    {
        cout<<"您猜小了"<<endl;
    }
    else if(a>num)
    {
        cout<<"您猜大了"<<endl;//????哈哈啊
    }
    else
    {
        cout<<"您猜对了"<<endl;
        break;

    }
    }
    
    system("pause");
    return 0;
}
```





#### 4.2.2 do...while循环语句

**作用：** 满足循环条件，执行循环语句

**语法：** `do{ 循环语句 } while(循环条件);`

**注意：**与while的区别在于==do...while会先执行一次循环语句==，再判断循环条件

![img](https://p.pstatp.com/origin/pgc-image/e5ba576b37fe40beb0f230d1240f8fa4)



**示例：**

```C++
int main() {

	int num = 0;

	do
	{
		cout << num << endl;
		num++;

	} while (num < 10);
	
	
	system("pause");

	return 0;
}
```



> 总结：与while循环区别在于，do...while先执行一次循环语句，再判断循环条件



**练习案例：水仙花数**

**案例描述：**水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身

例如：1^3 + 5^3+ 3^3 = 153

请利用do...while语句，求出所有3位数中的水仙花数

**思路:**

1. 将所有的三位数进行输出(100~999)
2. 在所有三位数中找到水仙数

​        水仙花数          153

​         获取个位：      153%10=3     对数字取模余10可获取到个位

​         获取十位：      153/10=15   15%10=5  先整除10，得到两位数，再取模余10得到十位

​         获得百位：       153/100=1    直接整除于100，获得百位。

​      判断：   个位^3+十位^3+百位^3=本身，最后输出。

**代码实现：**

```c++
#include<iostream>
using namespace std;

int main()
{
    int num=100;
    do
    {
         int a=0;
         int b=0;
         int c=0;

         a=num%10;
         b=num/10%10;
         c=num/100;

        if(a*a*a+b*b*b+c*c*c==num){
        cout<<num<<endl;
        }
        num++;
    }while(num<1000);
    
    system("pause");
    return 0;
}
```

**结果输出：**

```txt
153
370
371
407
请按任意键继续. . .

```





#### 4.2.3 for循环语句

**作用：** 满足循环条件，执行循环语句

**语法：**` for(起始表达式;条件表达式;末尾循环体) { 循环语句; }`



**示例：**

```C++
int main() {

	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
	
	system("pause");

	return 0;
}
```



**详解：**

![1541673704101](https://p.pstatp.com/origin/pgc-image/4950fc99019e47f1b94ed0fa7a2b192d)



> 注意：for循环中的表达式，要用分号进行分隔

> 总结：while , do...while, for都是开发中常用的循环语句，for循环结构比较清晰，比较常用



**练习案例：敲桌子**

案例描述：从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。

![timg](https://p.pstatp.com/origin/pgc-image/7137a7e86a9b4480ad91f02c392710f8)

**思路：**

想法和上一题类似，只不过用for来实现，然后用if和三个“或”判断。

**代码实现：**

```c++
#include<iostream>
using namespace std;

int main()
{
    int num=1;
   for(num=1;num<=100;num++)
   {
       int a;
       int b;
       a=num/10;
       b=num%10;
       if(a==7||b==7||num%7==0){
           cout<<"敲桌子"<<endl;
       }
       else{
           cout<<num<<endl;
       }
   }
   
    system("pause");
    return 0;
}
```





#### 4.2.4 嵌套循环

**作用：** 在循环体中再嵌套一层循环，解决一些实际问题

例如我们想在屏幕中打印如下图片，就需要利用嵌套循环

![1541676003486](https://p.pstatp.com/origin/pgc-image/f772bee5ce974e37be2dc78be6ae1ea0)



**示例：**

```C++
int main() {

	//外层循环执行1次，内层循环执行1轮
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}
```





**练习案例：**乘法口诀表

案例描述：利用嵌套循环，实现九九乘法表

![0006018857256120_b](https://p.pstatp.com/origin/pgc-image/9c4acad6bb2f4f3c9e486988c3118b3e)

**思想：**

乘法口诀表很显然是行和列的相乘，只需要创建两个变量i和j进行相乘输出即可。

**代码实现：**

```c++
#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<"*"<<i<<"="<<j*i<<"  ";
        }   
        cout<<endl;
    }
    system("pause");
    return 0;
}
```



### 4.3 跳转语句

#### 4.3.1 break语句

**作用:** 用于跳出==选择结构==或者==循环结构==

break使用的时机：

* 出现在switch条件语句中，作用是终止case并跳出switch
* 出现在循环语句中，作用是跳出当前的循环语句
* 出现在嵌套循环中，跳出最近的内层循环语句



**示例1：**

```C++
int main() {
	//1、在switch 语句中使用break
	cout << "请选择您挑战副本的难度：" << endl;
	cout << "1、普通" << endl;
	cout << "2、中等" << endl;
	cout << "3、困难" << endl;

	int num = 0;

	cin >> num;

	switch (num)
	{
	case 1:
		cout << "您选择的是普通难度" << endl;
		break;
	case 2:
		cout << "您选择的是中等难度" << endl;
		break;
	case 3:
		cout << "您选择的是困难难度" << endl;
		break;
	}

	system("pause");

	return 0;
}
```



**示例2：**

```C++
int main() {
	//2、在循环语句中用break
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break; //跳出循环语句
		}
		cout << i << endl;
	}

	system("pause");

	return 0;
}
```



**示例3：**

```C++
int main() {
	//在嵌套循环语句中使用break，退出内层循环
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << "*" << " ";
		}
		cout << endl;
	}
	
	system("pause");

	return 0;
}
```







#### 4.3.2 continue语句

**作用：**在==循环语句==中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环

**示例：**

```C++
int main() {

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}
	
	system("pause");

	return 0;
}
```



> 注意：continue并没有使整个循环终止，而break会跳出循环







#### 4.3.3 goto语句

**作用：**可以无条件跳转语句



**语法：** `goto 标记;`

**解释：**如果标记的名称存在，执行到goto语句时，会跳转到标记的位置



**示例：**

```C++
int main() {

	cout << "1" << endl;

	goto FLAG;

	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;

	FLAG:

	cout << "5" << endl;
	
	system("pause");

	return 0;
}
```



> 注意：在程序中不建议使用goto语句，以免造成程序流程混乱
