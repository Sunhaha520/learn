#include<iostream>
using namespace std;
#define Max 50

struct SqList
{
	int a[Max] = { 1,2,1,3,4,1,5,6,1,6,7,8,1,1,9,1 };
	int length =16;
};

void Dele_x(SqList& s,int x)
{
	int k = 0;
	for (int i = 0; i < s.length; i++)
	{
		if (s.a[i]==x)
		{
			k++;
		}
		else
		{
			s.a[i - k] = s.a[i];
		}
	}
	s.length =s.length-k;
}

int main()
{
	SqList s;
	cout << "变化之前的顺序表是：" << endl;
	for (int i = 0; i < s.length; i++)
	{
		cout << s.a[i] << "  ";
	}
	cout << endl;
	Dele_x(s,1);
	cout << "变化之后的顺序表是：" << endl;
	for (int i = 0; i < s.length; i++)
	{
		cout << s.a[i] << "  ";
	}
	system("pause");
	return 0;
}