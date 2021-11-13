#include<iostream>
using namespace std;
/*创建一个单链表*/
struct Link
{
	int data;
	struct Link* next;
};

/*删除相同数x的函数*/
void deleX(Link* L, int x)
{
	struct Link* pre = L, * p = L->next, * q;//初始化指针
	while (p != NULL)//遍历
	{
		if (p->data == x)
		{
			q = p;//将p赋值给q
			p = p->next;//p后移
			pre->next = p;//pre移至p前
			free(q);//释放掉q
		}
		else
		{
			pre = p;
			p = p->next;
		}

	}
}
/*主函数*/
int main()
{
	//创建
	struct Link* head = (struct Link*)malloc(sizeof(struct Link));
	struct Link* p = (struct Link*)malloc(sizeof(struct Link));
	p = head;
	head->next = NULL;
	int n, data, x;
	cout << "请输入链表元素个数：" << " ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "请输入第" << i + 1 << "个元素的值：" << "  ";
		struct Link* L = (struct Link*)malloc(sizeof(struct Link));
		cin >> data;
		L->data = data;
		head->next = L;
		head = L;
	}
	head->next = NULL;
	head = p;
	cout << "删除前的链表为：" << endl;
	while (head->next)
	{
		cout << head->next->data << "  ";
		head = head->next;
	}
	cout << endl;
	cout << "请输入要删除的元素x：" << "  ";
	cin >> x;
	head = p;
	deleX(head, x);
	cout << "删除后的链表为：" << endl;
	while (head->next)
	{
		cout << head->next->data << "  ";
		head = head->next;
	}
	system("pause");
	return 0;
}
