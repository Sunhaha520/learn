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
		struct Link* newN = (struct Link*)malloc(sizeof(struct Link));
		cout << "请输入第" << i + 1 << "个节点的值:" << " ";
		cin >> data;
		newN->data = data;
		newN->next = NULL;
		head->next = newN;
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

void divide(Link* lb, Link* la)
{
	int flag = 0;//做奇偶判定，因为奇数之后一定是偶数，偶数之后一定是奇数
	struct Link* l = la, * p = la->next, * rb = lb, * ra = l;
	l->next = NULL;
	while (p)
	{
		if (!flag)
		{
			ra->next = p;
			ra = p;
			flag = 1;
		}
		else
		{
			rb->next = p;
			rb = p;
			flag = 0;
		}
		p = p->next;
	}
	ra->next = NULL;
	rb->next = NULL;
}

int main()
{
	
	Link* Linkcreate(int);//创建单链表
	head = Linkcreate(0);
	cout << "初始时的单链表为:" <<" ";
	dispLink(head);
	cout << endl;
	q=head;
	struct Link* b = (struct Link*)malloc(sizeof(struct Link));
	divide(b, head);
	cout << "此单链表中的偶数节点有:" << " ";
	dispLink(b);
	cout << endl;
	cout << "此单链表中的奇数节点有:" << " ";
	dispLink(head);
	cout << endl;
	system("pause");
	return 0;
}