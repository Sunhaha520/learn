#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*int main()
{
	int a = 10;
	float f = 10.0;
	return 0;
}*/

/*void test(void)//void��ʾ�޷���
{
	printf("hehe\n");
}
int main()
{
	test(100);//��д��ʱ�򶼿��Դ��κ���
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
		printf("����С�˴洢\n");
	}
	else
	{
		printf("���Ǵ�˴洢\n");
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
		return 0;//���漸����ֱ��д��return *(char*)&a;

}



int main()
{
	//дһ�δ���������ǵ�ǰ�����ֽ�����ʲô
	//����1��С��
	//����0�����
	int ret = check_sys();
	if (ret == 1)
	{
		printf("����С�˴洢\n");
	}
	else
	{
		printf("���Ǵ�˴洢\n");
	}
	return 0;
}
