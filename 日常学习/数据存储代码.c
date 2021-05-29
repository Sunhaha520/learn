#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*int main()
{
	int a = 10;
	float f = 10.0;
	return 0;
}*/

/*void test(void)//void表示无返回
{
	printf("hehe\n");
}
int main()
{
	test(100);//不写的时候都可以传任何数
	return 0;
}*/

/*int main()
{
	int a = 10;
	int b = -20;
	return 0;
}*/

/*int main()
{
	int a = 20;
	return 0;
}*/



/*int main()
{
	int a = 1;
	char* p =(char*) &a;
	if (*p == 1)
	{
		printf("这是小端存储\n");
	}
	else
	{
		printf("这是大端存储\n");
	}

	return 0;
}*/



int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		return 1;
	else
		return 0;//后面几步可直接写成return *(char*)&a;

}



int main()
{
	//写一段代码告诉我们当前机器字节序是什么
	//返回1，小端
	//返回0，大端
	int ret = check_sys();
	if (ret == 1)
	{
		printf("这是小端存储\n");
	}
	else
	{
		printf("这是大端存储\n");
	}
	return 0;
}
