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
	//����
	struct Link* head = (struct Link*)malloc(sizeof(struct Link));
	struct Link* q = (struct Link*)malloc(sizeof(struct Link));
	q = head;
	head->next = NULL;
	int n, data, x;
	cout << "������ڵ������" << "  ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "�������" << i + 1 << "��Ԫ�ص�ֵ:" << "  ";
		struct Link* p = (struct Link*)malloc(sizeof(struct Link));
		cin >> data;
		p->data = data;
		head->next = p;
		head = p;
	}
	head->next = NULL;
	head = q;//head�ص�ͷ�ڵ�	
	cout << "ɾ��ǰ������" << endl;
	while (head->next)
	{
		cout << head->next->data << "  ";
		head = head->next;
	}
	cout << endl;
	cout << "������Ҫɾ����Ԫ�أ�" << "  ";
	cin >> x;
	head = q;
	deleX(head, x);
	cout << "ɾ�����Ԫ�غ������Ϊ��" << endl;
	while (head->next)
	{
		cout << head->next->data << "  ";
		head = head->next;
	}
	system("pause");
	return 0;
}