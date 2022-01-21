#include<iostream>
using namespace std;
#define MAX 50

struct SqList {
	int arr[MAX];
	int length;
};

//创建顺序表
void ListCreate(SqList & s)
{
	cout << "请输入顺序表的长度:" << " ";
	cin >> s.length;
	for (int i = 0; i < s.length; i++)
	{
		cout << "请输入第" << i + 1 << "个元素的值:" << " ";
		cin >> s.arr[i];
	}
}

//删除最小值元素
void Dele_min(SqList& s)
{
	int temp=0;
	int pos = 0;
	int min = s.arr[0];
	int i;
	for (i = 0; i < s.length; i++)
	{
		if (min > s.arr[i])
		{
			min = s.arr[i];
			pos = i;
		}
	}
	cout << "最小的元素是" << min;
	s.arr[pos] = s.arr[s.length-1];
	s.length--;
}



//打印表
void ListPrint(SqList & s)
{
	for (int i = 0; i < s.length; i++)
	{
		cout << s.arr[i] << " ";
	}
}

//主函数
int main()
{
	SqList s;
	ListCreate(s);
	Dele_min(s);
	cout << endl;
	ListPrint(s);
	system("pause");
	return 0;
}