#include<iostream>
using namespace std;

struct Link
{
	int data;
	struct Link* next;
};

void paixu(Link* h)
{
	int flag = 0;//�����־���������䶯��Ϊ1
	int count = 0;//��¼������
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
	cout << "�����뵥����Ԫ�ظ���:" << " ";
	cin >> n; 
	struct Link* q;
	struct Link* head = (struct Link*)malloc(sizeof(struct Link));
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++)
	{
		struct Link* newP = (struct Link*)malloc(sizeof(struct Link));
		cout << "�������" << i + 1 << "��Ԫ�ص�ֵ" << " ";
		cin >> data;
		newP->data = data;
		head->next = newP;
		head = newP;
	}
	head->next = NULL;
	head = q;
	cout << "�仯ǰ������Ϊ:" <<endl;
	while (head->next)
	{
		cout << head->next->data << " ";
		head = head->next;
	}
	cout << endl;
	head = q;
	paixu(head);
	cout << "�����Ժ�ĵ�������:" << endl;
	while (head->next)
	{
		cout << head->next->data << " ";
		head = head->next;
	}
	system("pause");
	return 0;
}