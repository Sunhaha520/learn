#include<stdio.h>

/*int main()
{
      int i, j, k;
      printf("\n");
      for (i = 1; i < 5; i++) { // ����Ϊ����ѭ��
          for (j = 1; j < 5; j++) {
              for (k = 1; k < 5; k++) { // ȷ��i��j��k��λ������ͬ
                  if (i != k && i != j && j != k) {
                      printf("%d,%d,%d\n", i, j, k);
                  }
              }
          }
      }
  }*/


  
  
  //ָ������������
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



//����ָ�����
/*int main()
{
	int a = 10;
	int * pa = &a;
	int* * ppa = &pa;//ppa���Ƕ���ָ��
	**ppa = 20;
	printf("%d\n", **ppa);
	printf("%d\n", a);
   //int** * pppa = &ppa;//����ָ��
	return 0;
}*/




//ָ������--����--���ָ�������
//����ָ��--ָ��
/*int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	/*int* pa = &a;
	int* pb = &b;
	int* pc = &c;//̫�鷳��ֱ������
	//��������--�������
	//�ַ�����--����ַ�
	//ָ������--���ָ��*/
	//int arr[10];
/*	int* arr2[3] = { &a,&b,&c };//ָ������
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
	//Init(arr, sz);//�������ʼ��0
	Print(arr, sz);//��ӡ
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



//���齻��
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
	//����ǰ
	printf("����ǰ>>>\n");
	Print(arr1, sz);
	Print(arr2, sz);
	Rech(arr1, arr2, sz);
	//������
	printf("������Ϊ>>>\n");
	Print(arr1, sz);
	Print(arr2, sz);
	return 0;
}*/


//����һ��ѧ��
//struct �ṹ��ؼ��� Stu�ṹ���ǩ struct Stu--�ṹ������
/*typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;//typedef����������ΪStu
int main()
{
	struct Stu s1;
	Stu s2={"����",20,"15249287076","��"};//��ʼ��

	return 0;
}*/



//�ṹ�嶨��
//struct Point
//{
//	int x;
//  int y;
// }p1;
//struct Point p2;
//struct Point p3={x,y};


//Ƕ�׽ṹ��
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
	char arr[] = "hello,world\n";//�����滥������
	struct T t = { "hehe",{10,'g',"hello",3.14},arr };//Ƕ�׽ṹ��
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
	Stu s = { "����",40,"13655140865","Man" };
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





