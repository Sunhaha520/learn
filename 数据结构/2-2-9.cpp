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
		struct Link* newP = (struct Link*)malloc(sizeof(struct Link));
		cout << "�������" << i + 1 << "���ڵ��ֵ:" << " ";
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
	//��ӡ������
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
	cout << "��ʼʱ�ĵ�����Ϊ:" << " ";
	dispLink(head);
	cout << endl;
	system("pause");
	return 0;
}

