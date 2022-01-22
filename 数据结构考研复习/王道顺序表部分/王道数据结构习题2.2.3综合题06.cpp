#include<iostream>
using namespace std;
#define MAX 50

struct SqList {
	int arr[11] = { 1,2,2,2,2,3,3,3,4,4,5 };
	int length = 11;
};

//删除相同值，如果arr[j]等于arr[i]，继续往后走，知道遇到不等于的，把不等于的值赋值给arr[i]后面的项
void Dele_same(SqList& s)
{
	if (s.length == 0)
	{
		cout << "错误！" << endl;
	}
	int i, j;
	for (i = 0, j = 1; j < s.length; j++)
	{
		if (s.arr[i] != s.arr[j])
		{
			s.arr[++i] = s.arr[j];
		}
	}
	s.length = i + 1;
}

//打印
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
	cout << "删除前的表：" << "  ";
	ListPrint(s);
	cout << endl;
	Dele_same(s);
	cout << "删除后的表：" << "  ";
	ListPrint(s);
	cout << endl;
	system("pause");
	return 0;

}