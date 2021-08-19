#include<iostream>
using namespace std;
#define Max 50
struct SqList
{
	int a[Max] = { 1,2,3,3,4,5,6,7,7,8,9,10 };
	int length = 12;
};

bool Delest(SqList& L, int s, int t)
{
	if (L.length == 0 || s >= t)
	{
		return false;
	}
	int k = 0;
	int ss = 0;
	//bool flag = false;
	for (int i = ss; i < L.length; i++)
	{
		if (L.a[i] > s)
		{
			ss = i;
			//flag = true;
			break;
		}
	}
	for (int i = ss; i < L.length; i++)
	{
		if (L.a[i] > s && L.a[i] < t)
		{
			k++;
		}
	}
	for (int i =0; i< L.length; i++)
	{
		L.a[ss] = L.a[ss+k];
		ss++;
	}

	L.length = L.length-k;
	return true;
}
int main()
{
	SqList L;
	cout << "变换前的顺序表是：" << endl;
	for (int i = 0; i < L.length; i++)
	{
		cout << L.a[i] << "  ";
	}
	cout << endl;
	Delest(L, 3, 7);
	cout << "变换后的顺序表是：" << endl;
	for (int i = 0; i < L.length; i++)
	{
		cout << L.a[i] << "  ";
	}
	system("pause");
	return 0;
}