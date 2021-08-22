#include<iostream>
using namespace std;

int a[10] = { 0,3,3,3,3,7,3,5 };
int length = 8;

void Mainele(int a[])
{
	int count = 1;
	int c = a[0];
	for (int i = 1; i < length; i++)
	{
		if (a[i] == c)
		{
			count++;
		}
		else
		{
			if (count > 0)
			{
				count--;
			}
			else
			{
				c = a[i];
				count = 1;
			}
		}
	}
	if (count > 0)
	{
		for (int i = count = 0; i < length; i++)
		{
			if (a[i] == c)
				count++;
		}
		if (count > length / 2)
		{
			cout << "这个顺序表的主元素为:" << c << endl;
		}
		else
		{
			cout << "没有主元素！" << endl;
		}
	}
    
}
int main()
{
	Mainele(a);
	
}
