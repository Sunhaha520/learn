#include<iostream>
using namespace std;
#define Max 50 
struct SqList
{
	int a[Max] = { 1,2,3,4,5,6,7,8,9,10 };
	int length = 10;
};
void Reverse(SqList& s)
{
	int temp = 0;
	int i = 0;
	int j = s.length - 1;
	while (i < j)
	{
		temp = s.a[i];
		s.a[i] = s.a[j];
		s.a[j] = temp;
		i++;
		j--;
	}
}

int main()
{
	SqList s;
	cout << "变化前的顺序表是：" << endl;
	for (int k = 0; k < s.length; k++)
	{
		cout << s.a[k] << "  ";
	}
	Reverse(s);
	cout << "变化后的顺序表是：" << endl;
	for (int k = 0; k < s.length; k++)
	{
		cout << s.a[k] << "  ";
	}
	system("pause");
	return 0;
}