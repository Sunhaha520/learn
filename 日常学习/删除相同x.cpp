#include<iostream>
using namespace std;
/*����һ��������*/
struct Link
{
	int data;
	struct Link* next;
};

/*ɾ����ͬ��x�ĺ���*/
void deleX(Link* L, int x)
{
	struct Link* pre = L, * p = L->next, * q;//��ʼ��ָ��
	while (p != NULL)//����
	{
		if (p->data == x)
		{
			q = p;//��p��ֵ��q
			p = p->next;//p����
			pre->next = p;//pre����pǰ
			free(q);//�ͷŵ�q
		}
		else
		{
			pre = p;
			p = p->next;
		}

	}
}
/*������*/
int main()
{
	//����
	struct Link* head = (struct Link*)malloc(sizeof(struct Link));
	struct Link* p = (struct Link*)malloc(sizeof(struct Link));
	p = head;
	head->next = NULL;
	int n, data, x;
	cout << "����������Ԫ�ظ�����" << " ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "�������" << i + 1 << "��Ԫ�ص�ֵ��" << "  ";
		struct Link* L = (struct Link*)malloc(sizeof(struct Link));
		cin >> data;
		L->data = data;
		head->next = L;
		head = L;
	}
	head->next = NULL;
	head = p;
	cout << "ɾ��ǰ������Ϊ��" << endl;
	while (head->next)
	{
		cout << head->next->data << "  ";
		head = head->next;
	}
	cout << endl;
	cout << "������Ҫɾ����Ԫ��x��" << "  ";
	cin >> x;
	head = p;
	deleX(head, x);
	cout << "ɾ���������Ϊ��" << endl;
	while (head->next)
	{
		cout << head->next->data << "  ";
		head = head->next;
	}
	system("pause");
	return 0;
}
