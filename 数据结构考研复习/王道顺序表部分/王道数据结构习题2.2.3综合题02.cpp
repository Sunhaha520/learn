#include<iostream>
using namespace std;
#define MAX 50

struct SqList {
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
	int length=10;
};

//ÄæÖÃ
void ListReverse(SqList& s)
{
	int temp;
	for (int i = 0; i < s.length / 2; i++)
	{
		temp = s.arr[i];
		s.arr[i] = s.arr[s.length - i - 1];
		s.arr[s.length - i - 1] = temp;
	}
}

//´òÓ¡
void ListPrint(SqList& s)
{
	for (int i = 0; i < s.length; i++)
	{
		cout << s.arr[i] << " ";
	}
}

//Ö÷º¯Êı
int main()
{
	SqList s;
	ListReverse(s);
	ListPrint(s);
	system("pause");
	return 0;

}