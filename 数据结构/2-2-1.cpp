#include<iostream>
using namespace std;

struct Link
{
	int data;
	struct Link* next;
};
Link* create()
{
	struct Link* p, * rear, * head;
	int count = 0;
	rear = (struct Link*)malloc(sizeof(struct Link));
	head = (struct Link*)malloc(sizeof(struct Link));
	int data;
	cout << "������������ڵ��ֵ��" << endl;
	cin >> data;
	while (data != 9999)
	{
		p = (struct Link*)malloc(sizeof(struct Link));
		p->data = data;
		p->next = NULL;
		if (count++ == 0)
		{
			rear = p;
			head = p;
		}
		else
		{
			rear->next = p;
			rear = p;
		}
		cin >> data;
	}
	rear->next = NULL;
	return head;
}
Link* create2()
{
	struct Link* p, * rear, * head;
	head = (struct Link*)malloc(sizeof(struct Link));
	rear = (struct Link*)malloc(sizeof(struct Link));
	head = rear = NULL;
	int data;
	cout << "������������ڵ��ֵ��" << endl;
	cin >> data;
	int count = 0;
	while (data != 9999)
	{
		p = (struct Link*)malloc(sizeof(struct Link));
		p->data = data;
		if (head == NULL)
		{
			head = p;
			rear = p;
		}
		else
		{
			p->next = head->next;
			head->next = p;
			rear = p;
			if (count++ == 0)
			{
				rear->next = NULL;
			}
		}
		cin >> data;
	}
	return head;
}
void deleX(Link*& p, int delNUM)
{
	struct Link* pre;
	if (p == NULL)
	{
		return;
	}
	if (p->data == delNUM)
	{
		pre = p;
		p = p->next;
		free(pre);
		deleX(p, delNUM);
	}
	else {
		deleX(p->next, delNUM);
	}
}

int main()
{
	int delNUM;
	struct Link* head, * q;
	head = create2();
	q = head;
	cout << "��ӡ������" << endl;
	while (q != NULL)
	{
		cout << q->data << "  ";
		q = q->next;
	}
	q = head;
	cout << "��������Ҫɾ������ֵ:" << "  ";
	cin >> delNUM;
	deleX(q, delNUM);
	cout << "ɾ��������" << endl;
	while (q != NULL)
	{
		cout << q->data << "  ";
		q = q->next;
	}
	system("pause");
	return 0;
}
