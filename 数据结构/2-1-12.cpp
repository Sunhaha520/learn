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
			cout << "���˳������Ԫ��Ϊ:" << c << endl;
		}
		else
		{
			cout << "û����Ԫ�أ�" << endl;
		}
	}
    
}
int main()
{
	Mainele(a);
	
}
