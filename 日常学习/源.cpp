#include<iostream>
using namespace std;

int main()
{
	//��ֻС�������
	int a=0;
	int b=0;
	int c=0;
	cout << "�������һֻС���������kg����" << endl;
	cin >> a;
	cout << "������ڶ�ֻС�������(kg)��" << endl;
	cin >> b;
	cout << "���������ֻС�������(kg)��" << endl;
	cin >> c;
	if (a > b && a > c)
	{
		cout << "���ص�����A" << endl;
	}
	else if (b > a && b > c)
	{
		cout << "���ص�����B" << endl;
	}
	else if (c > a && c > b)
	{
		cout << "���ص�����C" << endl;
	}
	else
	{
		cout << "����һ����" << endl;
	}
	system("pause");
	return 0;

	
}