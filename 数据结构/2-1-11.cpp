#include<iostream>
using namespace std;
typedef struct link {
	int data;
	struct link* next;
}link, * linklist;

void Create(linklist& L, int n)
{
	L = new link;
	L->next = NULL;
	linklist p, r;
	r = L;
	cout<<"����������˳���(����˳���ռ���У���Ԫ�ؼ��ÿո����:)" << endl;
	while (n--)
	{
		p = new link;
		cin >> p->data;
		p->next = r->next;
		r->next = p;
		r = p;
	}
}

void Findmed(linklist A, linklist B, int n)
{
	linklist pa, pb, pc;
	pa = A->next;
	pb = B->next;
	pc = A;
	while (n--)
	{
		if (pa->data < pb->data)
		{
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
		else
		{
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
	}
	cout << pc->data << endl;
}

int main()
{
	linklist A, B;
	int n;
	cout << "������˳���ĳ���:" << endl;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;
		Create(A, n);
		Create(B, n);
		Findmed(A, B, n);
	}
	system("pause");
	return 0;
}
