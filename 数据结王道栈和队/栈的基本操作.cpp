#include<iostream>
using namespace std;
//����
struct ListStack {
	int data;
	ListStack* next;
};
//��ʼ��
void Init(ListStack* s)
{
	s->next = NULL;
}
//ѹջ
void Push(ListStack* s, int e)
{
	ListStack* p;
	p = new ListStack;
	p->data = e;
	p->next = s->next;
	s->next = p;
}
//��ջ
int Pop(ListStack* s, int& e)
{
	ListStack* delete_r;
	if (s->next == NULL)
	{
		return 0;
	}
	else {
		delete_r = s->next;
		e = s->next->data;
		s->next = delete_r->next;
		delete delete_r;
	}
}

void Destroy(ListStack* s)//����ջ
{
	ListStack* delete_q;
	while (s->next != NULL)
	{
		delete_q = s->next;
		s->next = s->next->next;
		delete delete_q;
	}
}
int IsEmpty(ListStack* s)//�п�
{
	if (s->next == NULL)
		return 1;
	else
		return 0;
}
int main()
{
	ListStack* slist;
	slist = new ListStack;
	Init(slist);
	int e;
	while (cin >> e)
		Push(slist, e);
	while (!IsEmpty(slist))
	{
		Pop(slist, e);
		cout << e << " ";
	}
	Destroy(slist);
	return 0;
}
