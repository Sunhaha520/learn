#include<iostream>
using namespace std;
//����˳���
#define Max 50
struct SqList
{
	int a[Max] = { 1,2,3,4,5,6,7,8,9,10 };
	int length = 10;
};
//���ú���
void Reverse(SqList& L)
{
	int temp = 0;
	for (int i = 0; i < L.length / 2; i++)
	{
		temp = L.a[i];
		L.a[i] = L.a[L.length - i - 1];
		L.a[L.length - i - 1] = temp;
	}
}
//������
int main()
{
	SqList L;
	cout << "�仯ǰ��˳�����:" << endl;//��ӡ˳���
	for (int k = 0; k < L.length; k++)
	{
		cout << L.a[k] << "  ";
	}
	Reverse(L);
	cout << endl;
	cout << "���ú��˳�����:" << endl;
	for (int k = 0; k < L.length; k++)
	{
		cout << L.a[k] << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}
