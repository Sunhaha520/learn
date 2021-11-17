#include<iostream>
using namespace std;
//构造顺序表
#define Max 50
struct SqList
{
	int a[Max] = { 1,2,3,4,5,6,7,8,9,10 };
	int length = 10;
};
//逆置函数
void Reverse(SqList& L)
{
	int temp = 0;
	for (int i = 0; i < L.length / 2; i++)
	{
		temp = L.a[i];
		L.a[i] = L.a[L.length - i - 1];
		L.a[L.length - i - 1] = temp;
	}
}
//主函数
int main()
{
	SqList L;
	cout << "变化前的顺序表是:" << endl;//打印顺序表
	for (int k = 0; k < L.length; k++)
	{
		cout << L.a[k] << "  ";
	}
	Reverse(L);
	cout << endl;
	cout << "逆置后的顺序表是:" << endl;
	for (int k = 0; k < L.length; k++)
	{
		cout << L.a[k] << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}
