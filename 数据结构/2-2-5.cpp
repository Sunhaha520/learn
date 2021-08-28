#include<iostream>
using namespace std;

struct Link
{
	int data;
	struct Link* next;
};

void paixu(Link* h)
{
	int flag = 0;//排序标志，产生过变动就为1
	int count = 0;//记录链表长度
	struct Link* pre = h, * p = h->next, * r;
	while (p)
	{
		count++;
		p = p->next;
	}
	p = h->next;
	for (int i = 0; i < count; i++)
	{
		flag = 0;
		while (p->next)
		{
			if (p->data > p->next->data)
			{
				r = p->next->next;
				pre->next = p->next;
				p->next->next = p;
				pre = p->next;
				p->next = r;
				flag = 1;
			}
			else
			{
				pre = p;
				p = p->next;
			}
		}
		if (!flag) break;
		pre = h;
		p = h->next;
	}
}

int main()
{
	int data, n;
	cout << "请输入单链表元素个数:" << " ";
	cin >> n; 
	struct Link* q;
	struct Link* head = (struct Link*)malloc(sizeof(struct Link));
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++)
	{
		struct Link* newP = (struct Link*)malloc(sizeof(struct Link));
		cout << "请输入第" << i + 1 << "个元素的值" << " ";
		cin >> data;
		newP->data = data;
		head->next = newP;
		head = newP;
	}
	head->next = NULL;
	head = q;
	cout << "变化前的链表为:" <<endl;
	while (head->next)
	{
		cout << head->next->data << " ";
		head = head->next;
	}
	cout << endl;
	head = q;
	paixu(head);
	cout << "排序以后的单链表是:" << endl;
	while (head->next)
	{
		cout << head->next->data << " ";
		head = head->next;
	}
	system("pause");
	return 0;
}