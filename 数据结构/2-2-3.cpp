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
	cout << "请输入创建链表节点的个数:" << "  ";
	cin >> n;
	struct Link* q;
	struct Link* head = (struct Link*)malloc(sizeof(struct Link));
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++)
	{
		struct Link* newP = (struct Link*)malloc(sizeof(struct Link));
		cout << "请输入第"<<i+1<<"个节点的值:" << " ";
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