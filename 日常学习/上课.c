#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*int main()
{
	int i = 0;
	int sum = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; n++)
	{
		int j = 0;
		for (j = 1; j <= i;j++)
		{
			ret *= j;

		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;

}*/

/*int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
} */

/*int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p\n", arr);
	printf("%p\n", &i);
	system("pause");
	return 0;
}*/



/*my_strcpy(char* dest, char* src)
{
	while(*src!='\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	}*/




/*int main()
{
	//strcpy
	//×Ö·û´®¿½±´
	char arr1[] = "################";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr2);
	return 0;
}*/


/*void my_strcpy(char* dest, char* src)
{
	if (dest != NULL && src != NULL)
	{
		while (*dest++ = *src++)
		{
			;
		}
	}
}*/





#include<assert.h>
void my_strcpy(char* dest, char* src)
{
	assert(dest != NULL);//¶ÏÑÔ
	assert(src != NULL);//¶ÏÑÔ

	while (*dest++ = *src++)
	{
		;
	}

}

int main()
{
	//strcpy
	//×Ö·û´®¿½±´
	char arr1[] = "################";
	char arr2[] = "bit";
	my_strcpy(arr1, NULL);
	printf("%s\n", arr1);
	return 0;
}





