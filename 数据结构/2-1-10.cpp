#include<iostream>
using namespace std;
#define Max 50
string A[Max] = { "a","b","c","d","e","f","g","h" };
int length = 9;
//���ò���
void Reverse(string A[], int low,int high)
{
	while (low < high)
	{
		string temp = A[low];
		A[low] = A[high];
		A[high] = temp;
		low++;
		high--;
	}
}

int main()
{
	cout << "a����b���䣺" << endl;
	Reverse(A, 0, 2);//�õ�cbadefgh
	for (int i = 0; i < length; i++)
	{
		cout << A[i] << "  ";
	}
	cout << endl;
	cout << "�ٽ�b���ã�" << endl;
	Reverse(A, 3, 8);
	for (int i = 0; i < length; i++)
	{
		cout << A[i] << "  ";
	}
	cout << endl;
	cout << "ȫ�����ã�" << endl;
	Reverse(A, 0, 8);
	for (int i = 0; i < length; i++)
	{
		cout << A[i] << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}