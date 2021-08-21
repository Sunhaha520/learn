#include<iostream>
using namespace std;
#define Max 50

struct SqList
{
	int A[Max] = { 1,2,3,4,5,6,7,8,9,10,0,1,2,3,4,5,6,7,8,9 };
	int length = 20;
};

void Reverse(SqList &L, int left, int right)
{
	while(right>left)
	{
		int temp = L.A[left];
		L.A[left] = L.A[right];
		L.A[right] = temp;
		left++;
		right--;
	}
} 

int main()
{
	SqList L;
	cout << "初始顺序表为：" << endl;
	for (int i = 0; i < L.length; i++)
	{
		cout << L.A[i] << "  ";
	}
	cout << endl;
	cout << "全局逆置以后的顺序表为：" << endl;
	Reverse(L,0,19);
	for (int i = 0; i < L.length; i++)
	{
		cout << L.A[i] << "  ";
	}
	cout << endl;
	cout << "局部修改逆置以后：" << endl;
	Reverse(L, 0, 9);
	for (int i = 0; i <10; i++)
	{
		cout << L.A[i] << "  ";
	}
	Reverse(L,10,19);
	for (int i = 10; i < 20; i++)
	{
		cout << L.A[i] << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}