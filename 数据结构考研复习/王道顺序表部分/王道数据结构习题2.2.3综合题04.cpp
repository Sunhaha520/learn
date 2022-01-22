#include<iostream>
using namespace std;
#define MAX 50

struct SqList {
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
	int length = 10;
};

//删除s到t之间的值，找打大于s的第一项，找到大于t的第一项，然
void Dele_st(SqList& L, int s,int t)
{
	int i=0 ;
	int j=0 ;
	int pos1;
	int pos2;
	while (L.arr[i] <= s)
	{
		pos1 = i;
		i++;
	}
	while (L.arr[j] <= t)
	{
		pos2 = j;
		j++;
	}
	int m = pos2 - pos1;
	for (int k = pos1+1 ; k < L.length; k++)
	{
		L.arr[k] = L.arr[k + m-1];
	}
	L.length = L.length - m+1;
}

//打印
void ListPrint(SqList& L)
{
	for (int i = 0; i < L.length; i++)
	{
		cout << L.arr[i] << " ";
	}
}

int main()
{
	SqList L;
	cout << "本程序删除1到6之间，修改Dele_st函数中后两项修改删除范围"<< endl;
	cout << "删除前：" << "  ";
	ListPrint(L);
	cout << endl;
	Dele_st(L, 1, 6);
	cout << "删除后：" << "  ";
	ListPrint(L);
	cout << endl;
	system("pause");
	return 0;
}