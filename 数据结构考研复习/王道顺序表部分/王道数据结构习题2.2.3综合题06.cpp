#include<iostream>
using namespace std;
#define MAX 50

struct SqList {
	int arr[11] = { 1,2,2,2,2,3,3,3,4,4,5 };
	int length = 11;
};

//ɾ����ֵͬ�����arr[j]����arr[i]�����������ߣ�֪�����������ڵģ��Ѳ����ڵ�ֵ��ֵ��arr[i]�������
void Dele_same(SqList& s)
{
	if (s.length == 0)
	{
		cout << "����" << endl;
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

//��ӡ
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
	cout << "ɾ��ǰ�ı�" << "  ";
	ListPrint(s);
	cout << endl;
	Dele_same(s);
	cout << "ɾ����ı�" << "  ";
	ListPrint(s);
	cout << endl;
	system("pause");
	return 0;

}