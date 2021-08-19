#include<iostream>
using namespace std;
#define Max 50

struct SqList
{
	int a[Max] = { 1,2,2,3,3,4,4,5,5,6,7,7,8,9,9 };
	int length = 15;
};
void Delesame(SqList& L)
{
	int black = 0;
	for (int red = 0; red < L.length; red++)
	{
		if (L.a[red] != L.a[red - 1])
		{
			L.a[black] = L.a[red];
			black++;
		}
	}
	L.length = black;
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
	Delesame(L);
	cout << "变换后的顺序表是：" << endl;
	for (int i = 0; i < L.length; i++)
	{
		cout << L.a[i] << "  ";
	}
	system("pause");
	return 0;
}