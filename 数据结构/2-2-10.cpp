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
	//����������
	int data, n;
	cout << "�����뵥����Ľڵ����:" << " ";
	cin >> n;
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++)
	{
		struct Link* newN = (struct Link*)malloc(sizeof(struct Link));
		cout << "�������" << i + 1 << "���ڵ��ֵ:" << " ";
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
	//��ӡ������
	while (L->next)
	{
		cout << L->next->data << "  ";
		L = L->next;
	}
}

void divide(Link* lb, Link* la)
{
	int flag = 0;//����ż�ж�����Ϊ����֮��һ����ż����ż��֮��һ��������
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
	
	Link* Linkcreate(int);//����������
	head = Linkcreate(0);
	cout << "��ʼʱ�ĵ�����Ϊ:" <<" ";
	dispLink(head);
	cout << endl;
	q=head;
	struct Link* b = (struct Link*)malloc(sizeof(struct Link));
	divide(b, head);
	cout << "�˵������е�ż���ڵ���:" << " ";
	dispLink(b);
	cout << endl;
	cout << "�˵������е������ڵ���:" << " ";
	dispLink(head);
	cout << endl;
	system("pause");
	return 0;
}