#include<iostream>
using namespace std;
#define MAX 50

struct SqList {
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int length = 10;
};

//ɾ��s��t֮���ֵ���Ҵ����s�ĵ�һ��ҵ�����t�ĵ�һ�Ȼ������ǰ��
void Dele_st(SqList& L, int s, int t)
{
	int i = 0;
	int j = L.length;
	int pos1;
	int pos2;
	while (L.arr[i] <=s)
	{
		pos1 = i;
		i++;
	}
	while (L.arr[j] > t)
	{
		pos2 = j;
		j--;
	}
	int m = pos2 - pos1;
	for (int k = pos1,n=pos2 ; k < L.length; k++,n++)
	{
		L.arr[k] = L.arr[n];
	}
	L.length = L.length - m ;
}

//��ӡ
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
	cout << "������ɾ��2��6֮�䣨����2��6�����޸�Dele_st�����к������޸�ɾ����Χ" << endl;
	cout << "ɾ��ǰ��" << "  ";
	ListPrint(L);
	cout << endl;
	Dele_st(L, 2, 6);
	cout << "ɾ����" << "  ";
	ListPrint(L);
	cout << endl;
	system("pause");
	return 0;
}