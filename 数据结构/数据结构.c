#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



/*void del_x(int *arr, int i, char x, int len)
{
	if (!len) {
		printf("����Ϊ��");
	}
	for (i = 0; i <= len; i++)
	{
		if (*(arr + i) = x) 
		{
         
		}
	}

		
	
}
int main()
{
	int n;
	int i;
	printf("���������鳤�ȣ�");
	scanf("%d", &n);
	int *arr = (char *)malloc(sizeof(n));
	printf("������Ԫ�أ�");
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}
}*/


/*void reverseS(int *arr, int len)
{
	int tmp;
	for (int i = 0; i < len / 2; i++)
	{
		tmp = *(arr + i);
		*(arr + i) = *(arr + len - i - 1);
		*(arr + len - i - 1)=tmp;
	}
}
int main()
{
	int n;
	printf("���������鳤�ȣ�");
	scanf("%d", &n);
	int *arr = (int *)malloc(sizeof(n));
	printf("�����������Ԫ��ֵ��");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}
	printf("֮ǰ������Ϊ��");
	for (int i = 0; i < n; i++)
	{
		
		printf("%d", *(arr + i));
	}
	printf("\n");
	reverseS(arr, n);
	printf("ת��������Ϊ��");
	for (int i = 0; i < n; i++)
	{
		
		printf("%d", *(arr + i));
	}
	return 0;
}*/

int delX(int* arr, int len)
{
	int k = 0, i = 0;
	char x;//k������¼ɾ��Ԫ�ص�����
	while (i < len)
	{
		if (*(arr + i) == x)
		{
			k++;
		}
		else {
			*(arr + i - k) = *(arr + i);
		}
		i++;
	}
	for(int i=0;     )
}
int main()
{
	int arr[] = { 1,2,3,2,2,4 };
	int len = sizeof(arr) / sizeof(int);
	return 0;
}










