#include<stdio.h>

/*int main()
{
      int i, j, k;
      printf("\n");
      for (i = 1; i < 5; i++) { // 以下为三重循环
          for (j = 1; j < 5; j++) {
              for (k = 1; k < 5; k++) { // 确保i、j、k三位互不相同
                  if (i != k && i != j && j != k) {
                      printf("%d,%d,%d\n", i, j, k);
                  }
              }
          }
      }
  }*/


  
  
  //指针访问数组举例
/*int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d", *(p + i));
	}
	/*for (i = 0; i < 10; i++)
	{
		printf("%p ===========  %p\n", p + i, &arr[i]);
	}*/
/*	return 0;
}*/



//二级指针概念
/*int main()
{
	int a = 10;
	int * pa = &a;
	int* * ppa = &pa;//ppa就是二级指针
	**ppa = 20;
	printf("%d\n", **ppa);
	printf("%d\n", a);
   //int** * pppa = &ppa;//三级指针
	return 0;
}*/




//指针数组--数组--存放指针的数组
//数组指针--指针
/*int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	/*int* pa = &a;
	int* pb = &b;
	int* pc = &c;//太麻烦，直接数组
	//整形数组--存放整形
	//字符数组--存放字符
	//指针数组--存放指针*/
	//int arr[10];
/*	int* arr2[3] = { &a,&b,&c };//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n",*(arr2[i]));
	}
	return 0;
}*/



/*void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[9]);
	}
}

void Reverse(int arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr, sz);//把数组初始化0
	Print(arr, sz);//打印
	Reverse(arr,sz);
	Print(arr, sz);
	return 0;
 }*/




/*void Print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		printf("%d\n", arr[i]);
		
	}
	printf("\n");
}
int main()
{
	int arr1[5] = { 1,3,5,7,9 };
	int arr2[5] = { 2,4,6,8,0 };
	int tmp=0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr2[i] = tmp;
		Print(arr1, sz);
		Print(arr2, sz);

	}
}*/



//数组交换
/*void Rech(int arr1[], int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	//交换前
	printf("交换前>>>\n");
	Print(arr1, sz);
	Print(arr2, sz);
	Rech(arr1, arr2, sz);
	//交换后
	printf("交换后为>>>\n");
	Print(arr1, sz);
	Print(arr2, sz);
	return 0;
}*/


//描述一个学生
//struct 结构体关键字 Stu结构体标签 struct Stu--结构体类型
/*typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;//typedef重新起名字为Stu
int main()
{
	struct Stu s1;
	Stu s2={"张三",20,"15249287076","男"};//初始化

	return 0;
}*/



//结构体定义
//struct Point
//{
//	int x;
//  int y;
// }p1;
//struct Point p2;
//struct Point p3={x,y};


//嵌套结构体
/*struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;
	char* pc;
};

int main()
{
	char arr[] = "hello,world\n";//与上面互不干扰
	struct T t = { "hehe",{10,'g',"hello",3.14},arr };//嵌套结构体
	printf("%s\n", t.s.arr);//hello
	printf("%s\n", t.ch);//hehe
	printf("%lf\n", t.s.d);//3.14
	printf("%s\n", t.pc);//hello,world
}*/

/*typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void Print(Stu s)
{
	printf("Name: %s\n", s.name);
	printf("Age: %d\n", s.age);
	printf("Telephone: %s\n", s.tele);
	printf("Sex: %s\n", s.sex);
}

void Print1(Stu* ps)
{
	printf("Name: %s\n", ps->name);
	printf("Age: %d\n", ps->age);
	printf("Telephone: %s\n",ps->tele);
	printf("Sex: %s\n", ps->sex);
}

int main()
{
	Stu s = { "张三",40,"13655140865","Man" };
	Print1(&s);
	return 0;
	
}*/


/*int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);
	printf("%d\n", ret);
	return 0;
}*/





