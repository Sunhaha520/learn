#include<iostream>
using namespace std;
#define MAX 50

struct SqList {
	int arr[MAX];
	int length;
};

//����˳���
void ListCreate(SqList & s)
{
	cout << "������˳���ĳ���:" << " ";
	cin >> s.length;
	for (int i = 0; i < s.length; i++)
	{
		cout << "�������" << i + 1 << "��Ԫ�ص�ֵ:" << " ";
		cin >> s.arr[i];
	}
}

//ɾ����СֵԪ��
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
	cout << "��С��Ԫ����" << min;
	s.arr[pos] = s.arr[s.length-1];
	s.length--;
}



//��ӡ��
void ListPrint(SqList & s)
{
	for (int i = 0; i < s.length; i++)
	{
		cout << s.arr[i] << " ";
	}
}

//������
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