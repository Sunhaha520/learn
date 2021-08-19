#include<iostream>
using namespace std;
#define Max 50
//构造顺序表
struct SqList
{
	int a[Max] = { 1,2,3,3,5,6,7,7,9,10 };
	int length = 10;
};
//函数实现
bool Delest(SqList& L,int s,int t)
{
	if (L.length == 0 || s >= t)
	{
		cout << "输入数据不合法，无法进行操作！" << endl;
		return false;
	}
	int ss = 0;
	bool flag = false;
	
	for (int i = ss; i < L.length; i++)
	{
	if (L.a[i] >= s)
	{
		ss = i;
		flag = true;
		break;
			}
    }
	if (!flag) return false;
	int tt = 0;
	for (int i = ss; i<L.length ; i++)
	{
		if (L.a[i] > t)
		{
			tt = i;
			break;
		}
	}
	int s1 = ss, t1 = tt;
	for (int i = tt; i < L.length; i++)
	{
		L.a[ss] = L.a[i]; ss++;
	}
	L.length = L.length - t1 + s1;
	return true;
}

int main()
{
	int flag1;
	SqList L;
	cout << "删除前的顺序表是：" << endl;
	for (int i = 0; i < L.length; i++)
	{
		cout << L.a[i] << "  ";
	}
	cout << endl;
	Delest(L,2,7);
	cout << "删除后的顺序表：" << endl;
	for (int i = 0; i < L.length; i++)
	{
		cout << L.a[i] << "  ";
	}
	system("pause");
	return 0;
}