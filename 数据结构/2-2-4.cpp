#include<iostream>
using namespace std;
struct Link
{
	int data;
	struct Link* next;
};

void Delemin(Link *p)
{
	struct Link* preMinp = p, * minp = p->next, * preQ = p->next, * q = p->next->next, * f;
	while (q)
	{
		if (q->data < minp->data)
		{
			minp = q;
			preMinp = preQ;
		}
		preQ = q;
		q = q->next;
	}
	f = minp;
	preMinp->next = minp->next;
	free(f);
}

int main()
{
	int data, n;
	cout << "请输入单链表的元素个数:" << " ";
	cin >> n;
	struct Link* q;
	struct Link* head = (struct Link*)malloc(sizeof(struct Link));
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++)
	{
		struct Link* newP = (struct Link*)malloc(sizeof(struct Link));
		cout << "请输入第" << i + 1 << "个节点的值:" << " ";
		cin >> data;
		newP->data = data;
		head->next = newP;
		head = newP; 
	}
	head->next = NULL;
	head = q;
	cout << "变化之前的链表为:" << endl;
	while (head->next)
	{
		cout << head->next->data << " ";
		head = head->next;
	}
	cout << endl;
	head = q;
	Delemin(q);
	cout << "变化之后的链表为:" << endl;
	while (head->next)
	{
		cout << head->next->data << " ";
		head = head->next;
	}

	return 0;
}