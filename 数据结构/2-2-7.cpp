#include<iostream>
using namespace std;

struct Link
{
	int data;
	struct Link* next;
};

void delest(Link* h,int min,int max)
{
	struct Link* pre = h, * p = h->next,* r;
	while (p)
	{
		if (p->data > min && p->data < max)
		{
			r = p->next;
			pre->next = p->next;
			free(p);
			p = r;
		}
		else
		{
			pre = p;
			p = p->next;
		}
	}
}

int main()
{
	int data, n;
	int min, max;
	cout << "请输入单链表元素个数:" << " ";
	cin >> n;
	struct Link* q;
	struct Link* head = (struct Link*)malloc(sizeof(struct Link));
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++)
	{
		struct Link* newN = (struct Link*)malloc(sizeof(struct Link));
		cout << "请输入第" << i + 1 << "个节点的值:" << " ";
		cin >> data;
		newN->data = data;
		head->next = newN;
		head = newN;
	}
	head->next = NULL;
	head = q;
	cout << "初始时的链表为:" << endl;
	while (head->next)
	{
		cout << head->next->data << " ";
		head = head->next;
	}
	cout << endl;
	head = q;
	cout << "请输入区间的小值:" << " ";
	cin >> min;
	cout << "请输入区间的大值:" << " ";
	cin >> max;
	delest(head, min, max);
	cout << "删除后的链表为:" << endl;
	while (head->next)
	{
		cout << head->next->data << " ";
		head = head->next;
	}
	cout << endl;
	system("pause");
	return 0;
}

