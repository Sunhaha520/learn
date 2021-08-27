#include<iostream>
using namespace std;

struct Link
{
	int data;
	struct Link* next;
};

void reverse(Link* p)
{
	if (p == NULL)
	{
		return;
	}
	else
	{
		reverse(p->next);
		cout << p->data << " ";
	}
}


int main()
{
	int n, data;
	cout << "�����봴������ڵ�ĸ���:" << "  ";
	cin >> n;
	struct Link* q;
	struct Link* head = (struct Link*)malloc(sizeof(struct Link));
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++)
	{
		struct Link* newP = (struct Link*)malloc(sizeof(struct Link));
		cout << "�������"<<i+1<<"���ڵ��ֵ:" << " ";
		cin >> data;
		newP->data = data;
		newP->next = NULL;
		head->next = newP;
		head = head->next;
	}
	head->next = NULL;
	head = q;
	reverse(head->next);
	system("pause");
	return 0;
}