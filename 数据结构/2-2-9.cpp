#include<iostream>
using namespace std;

struct Link
{
	int data;
	struct Link* next;
};

struct Link* head = (struct Link*)malloc(sizeof(struct Link));
struct Link* q;

Link* Linkcreate(int num)
{
	//创建单链表
	int data, n;
	cout << "请输入单链表的节点个数:" << " ";
	cin >> n;
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++)
	{
		struct Link* newP = (struct Link*)malloc(sizeof(struct Link));
		cout << "请输入第" << i + 1 << "个节点的值:" << " ";
		cin >> data;
		newP->data = data;
		newP->next = NULL;
		head->next = newP;
		head = head->next;
	}
	head->next = NULL;
	head = q;
	return head;
}

void dispLink(Link* L)
{
	//打印单链表
	while (L->next)
	{
		cout << L->next->data << "  ";
		L = L->next;
	}
}

void Dele_min(Link* head)
{
	struct Link* pre, * p;
	pre = head;
	p = pre->next;
	

}
 

int main()
{
	Link* Linkcreate(int);
	head = Linkcreate(0);
	cout << "初始时的单链表为:" << " ";
	dispLink(head);
	cout << endl;
	system("pause");
	return 0;
}

