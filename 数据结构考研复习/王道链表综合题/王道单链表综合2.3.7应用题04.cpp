#include<iostream>
using namespace std;

struct Link {
	int data;
	struct Link* next;
};

//创建单链表
Link* create()
{
	int data;
	int n;
	cout << "请输入单链表的长度：" << " ";
	cin >> n;
	Link* head, * q, * rear;
	head = (Link*)malloc(sizeof(Link));
	rear = head;
	q = head;
	for (int i = 0; i < n; i++)
	{
		Link* q = (Link*)malloc(sizeof(Link));
		cout << "请输入第" << i + 1 << "个元素的值：" << " ";
		cin >> data;
		q->data = data;
		rear->next = q;
		rear = q;
	}
	rear->next = NULL;
	return head;
}

//删除最小值
Link* Dele_min(Link* L)
{
	Link* pre = L, * p = pre->next;
	Link* minpre = pre, * minp = p;
	while (p != NULL) {
		if (p->data < minp->data)
		{
			minp = p;
			minpre = pre;
		}
		pre = p;
		p = p->next;
	}
	minpre->next = minp->next;
	free(minp);
	return L;
}

//打印函数
Link* Printlist(Link* L)
{
	while (L->next)
	{
		cout << L->next->data << ' ';
		L = L->next;
	}
	return L;
}
//主函数
int main()
{
	Link* head = create();
	Dele_min(head);
	Printlist(head);
	system("pause");
	return 0;

}