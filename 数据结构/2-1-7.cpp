#include<iostream>
using namespace std;
#define Max 50

struct SqList
{
	int data[Max];
	int length;
	
};

bool Hebing(SqList A, SqList B,SqList &C)
{
	
	if (A.length + B.length > C.length)
	{
		return false;
	}
	int i = 0, j = 0, k = 0;
	while (i < A.length && j < B.length)
	{
		if (A.data[i] < B.data[j])
		{
			C.data[k++] = A.data[i++];
		}
		else
		{
			C.data[k++] = B.data[j++];
		}

	}

	while (i < A.length)
	{
		C.data[k++] = A.data[i++];
	}
	while (j < B.length)
	{
		C.data[k++] = B.data[j++];
	}
	C.length = A.length+B.length;
	return true;
}
int main()
{
	SqList A = { {2,3,4,6,7},5 };
	SqList B = { {3,4,4},3 };
	SqList C;
	C.length = 8;
	cout << "��һ�����Ա��ǣ�" << endl;
	for (int i = 0; i < A.length; i++)
	{
		cout << A.data[i] << "  ";
	}
	cout << endl;
	cout << "�ڶ������Ա��ǣ�" << endl;
	for (int i = 0; i < B.length; i++)
	{
		cout << B.data[i] << "  ";
	}
	cout << endl;
	if (!Hebing(A, B, C))
	{
		cout << "�ϲ�����" << endl;
	}
	else
	{ 
         cout << "�ϲ��Ժ������Ϊ:" << endl;
	     for (int i = 0; i < C.length; i++)
	     cout << C.data[i] << "  ";

	}
	system("pause");
	return 0;

}