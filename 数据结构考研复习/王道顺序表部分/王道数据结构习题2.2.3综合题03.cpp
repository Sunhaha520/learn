#include<iostream>
using namespace std;
#define MAX 50

struct SqList {
	int arr[10] = { 0,1,1,1,1,1,6,7,1,9 };
	int length = 10;
};

//É¾³ý
void Dele_x(SqList& s,int x)
{
	int count = 0;
	for (int i = 0; i < s.length; i++)
	{
		if (s.arr[i] != x)
		{
			s.arr[count] = s.arr[i];
			count++;
		}
	}
	s.length = count;
}

//´òÓ¡
void ListPrint(SqList& s)
{
	for (int i = 0; i < s.length; i++)
	{
		cout << s.arr[i] << " ";
	}
}

int main()
{
	SqList s;
	ListPrint(s);
	cout << endl;
	Dele_x(s, 1);
	ListPrint(s);
	system("pause");
	return 0;
}
