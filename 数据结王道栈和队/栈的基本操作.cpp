#include<iostream>
using namespace std;
//创建
struct ListStack {
	int data;
	ListStack* next;
};
//初始化
void Init(ListStack* s)
{
	s->next = NULL;
}
//压栈
void Push(ListStack* s, int e)
{
	ListStack* p;
	p = new ListStack;
	p->data = e;
	p->next = s->next;
	s->next = p;
}
//出栈
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

void Destroy(ListStack* s)//销毁栈
{
	ListStack* delete_q;
	while (s->next != NULL)
	{
		delete_q = s->next;
		s->next = s->next->next;
		delete delete_q;
	}
}
int IsEmpty(ListStack* s)//判空
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
