#include<iostream>
using namespace std;

struct  Link
{
	int data;
	struct Link* next;
};

void deleX(Link* p, int x)
{
	struct Link* pre = p, * q = p->next, * r;
	while (q)
	{
		if (q->data == x)
		{
			r = q;
			q = q->next;
			pre->next = q;
			free(r);
		}
		else
		{
			pre = q;
			q = q->next;
		}
	}
}

int main()
{
	//创建
	struct Link* head = (struct Link*)malloc(sizeof(struct Link));
	struct Link* q = (struct Link*)malloc(sizeof(struct Link));
	q = head;
	head->next = NULL;
	int n, data, x;
	cout << "请输入节点个数：" << "  ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "请输入第" << i + 1 << "个元素的值:" << "  ";
		struct Link* p = (struct Link*)malloc(sizeof(struct Link));
		cin >> data;
		p->data = data;
		head->next = p;
		head = p;
	}
	head->next = NULL;
	head = q;//head回到头节点	
	cout << "删除前的链表：" << endl;
	while (head->next)
	{
		cout << head->next->data << "  ";
		head = head->next;
	}
	cout << endl;
	cout << "请输入要删除的元素：" << "  ";
	cin >> x;
	head = q;
	deleX(head, x);
	cout << "删除后的元素后的链表为：" << endl;
	while (head->next)
	{
		cout << head->next->data << "  ";
		head = head->next;
	}
	system("pause");
	return 0;
}