#include<iostream>
using namespace std;
#define MAX 50

struct SqList {
	int arr[10] = { 1,2,3,4,5,6,7,2,3,4 };
	int length = 10;
};

//重新排序函数
void ReserveList2(SqList& s, int left, int right)
{
	int temp = 0;
	int mid = (left + right) / 2;
	for (int i = left - 1,j=right-1; i < mid; i++,j--)
	{
		temp = s.arr[i];
		s.arr[i] = s.arr[j];
		s.arr[j] = temp;
	}
}



//顺序表打印
void PrintList(SqList& s)
{
	for (int i = 0; i < s.length; i++)
	{
		cout << s.arr[i] << " ";
	}
}

int main()
{
	SqList s;
	ReserveList2(s, 1, 10);
	PrintList(s);
	cout << endl;
	ReserveList2(s, 1, 3);
	PrintList(s);
	cout << endl;
	ReserveList2(s, 4, 10);
	PrintList(s);
	system("pause");
	return 0;

}





