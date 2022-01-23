#include<iostream>
using namespace std;
#define MAX 50 

struct SqList1 {
	int arr[5] = { 1,3,5,7,9 };
	int length = 5;
};
struct SqList2 {
	int arr[6] = { 2,4,6,8,10,12 };
	int length = 6;
};

struct SqList3 {
	int arr[MAX];
	int length ;
};


void ListPaixu(SqList1& s,SqList2 & L,SqList3 & m)
{
	int i=0, j=0, k=0;
	while (i<s.length&&j<L.length)
	{
		if (s.arr[i] <= L.arr[j])
		{
			m.arr[k++] = s.arr[i++]; 
		}
		else {
			m.arr[k++] = L.arr[j++];
		}
	}
	while (i < s.length)
	{
		m.arr[k++] = s.arr[i++];
	}
	while (j < L.length)
	{
		m.arr[k++] = L.arr[j++];
	}
	m.length = k;
}

//´òÓ¡
void ListPrint(SqList3& m)
{
	for (int i = 0; i < m.length; i++)
	{
		cout << m.arr[i] << " ";
	}
}



int main()
{
	SqList1 s;
	SqList2 L;
	SqList3 m;
	ListPaixu(s,L,m);
	ListPrint(m);
	cout << endl;
	system("pause");
	return 0;
}
