#include<iostream>
using namespace std;
#define Max 50
struct SqList {
	int arr[Max] = { 2,3,5,4,6,1,7,8,9 };
	int length = 9;
};
bool listdele(SqList& s, int& ele)
{
	if (s.length == 0)
	{
		cout << "����:��˳���Ϊ��" << endl;
		system("pause");
		return false;
	}
	else
	{
		int min = s.arr[0];
		int flag = 0;
		for (int i = 0; i < s.length; i++)
		{
			if (min > s.arr[i])
			{
				min = s.arr[i];
				flag = i;
			}
		}
		ele = s.arr[flag];
		s.arr[flag] = s.arr[s.length - 1];
		return true;
		



	}
}

int main()
{
	SqList s;
	int k = 0;
	cout << "֮ǰ��˳����ǣ�" << endl;
	for (int i = 0; i < s.length; i++)
	{
		cout << s.arr[i] << "  ";
	}
	cout << endl;
	if (listdele(s,k))
	{
		cout << "��С��ֵ�ǣ�" <<k<<endl;
		cout << "�仯�Ժ������Ϊ��" << endl;
	for (int i = 0; i < s.length; i++)
	{
		cout << s.arr[i] << "  ";
	}

	}
	system("pause");
	return 0;
}
