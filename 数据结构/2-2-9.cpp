#include<iostream>
using namespace std;

struct Link
{
	int data;
	struct Link* next;
};

struct Link* head = (struct Link*)malloc(sizeof(struct Link));

void Linkcreate(Link* L)
{
	//����������
	int data, n;
	cout << "�����뵥����Ľڵ����:" << " ";
	cin >> n;
	struct Link* q;
	
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++)
	{
		struct Link* newNode = (struct Link*)malloc(sizeof(struct Link));
		cout << "�������" << i + 1 << "���ڵ��ֵ:" << " ";
		cin >> data;
		newNode->data = data;
		newNode->next = NULL;
		head->next = newNode;
		head = head->next;
	}
	head->next = NULL;
	head = q;
}

void disLink(Link* L)
{
	//��ӡ������
	while (head->next)
	{
		cout << head->next->data << " ";
		head = head->next;
	}
}

void printAndDel(Link* h)
{
	//����ʵ��
	struct Link* pre, * p, * r;
	while (h->next)
	{
		pre = h;
		p = pre->next;
		while (p->next)
		{
			if (p->next->data < pre->next->data)
			{
				pre = p;
				p = p->next;
			}
		}
		cout << pre->next->data << "  ";
		r = pre->next;
		pre->next = r->next;
		free(r);
	}
	free(h);
}

int main()
{
    Linkcreate(head);//����������
	cout << "��ʼʱ�ĵ�����Ϊ:" << endl;
	disLink(head);
	cout << endl;
	printAndDel(head);
	disLink(head);
	system("pause");
	return 0;
}