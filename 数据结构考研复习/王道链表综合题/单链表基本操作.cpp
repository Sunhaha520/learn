/*
						   _ooOoo_
						  o8888888o
						  88" . "88
						  (| -_- |)
						  O\  =  /O
					   ____/`---'\____
					 .'  \\|     |//  `.
					/  \\|||  :  |||//  \
				   /  _||||| -:- |||||-  \
				   |   | \\\  -  /// |   |
				   | \_|  ''\---/''  |   |
				   \  .-\__  `-`  ___/-. /
				 ___`. .'  /--.--\  `. . __
			  ."" '<  `.___\_<|>_/___.'  >'"".
			 | | :  `- \`.;`\ _ /`;.`/ - ` : | |
			 \  \ `-.   \_ __\ /__ _/   .-` /  /
		======`-.____`-.___\_____/___.-`____.-'======
						   `=---='
		^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
				 ���汣��       ����BUG   С����
		*/
#include<iostream>
using namespace std;

struct Link {
	int data;
	struct Link* next;
};

//ͷ�巨��������
Link* create1()
{
	int n;
	int data;
	cout << "�����뵥����ĳ���:" << " ";
	cin >> n;
	Link* head;
	head = (Link*)malloc(sizeof(Link));
	head->next = NULL;
	for (int i = 0; i < n; i++)
	{
		struct Link* newP = (Link*)malloc(sizeof(Link));
		cout << "�������" << i + 1 << "��Ԫ�ص�ֵ" << " ";
		cin >> data;
		newP->data = data;
		newP->next = head->next;
		head->next = newP;
	}
	return head;
}

//β�巨����������
Link* create2()
{
	int n = 0;
	int data;
	cout << "�����뵥�����λ��:" << " "; 
	cin >> n;
	Link* head;
	head = (Link*)malloc(sizeof(Link));
	Link* rear = head , * newP = head;
	for (int i = 0; i < n; i++)
	{
		newP = (Link*)malloc(sizeof(Link));
		cout << "�������" << i + 1 << "��Ԫ�ص�ֵ" << " ";
		cin >> data;
		newP->data = data;
		rear->next = newP;
		rear = newP;
	}
	rear->next = NULL;	
	return head;
} 

//����Ų��ҽ��ֵ
Link* GetElem(Link* head)
{
	int i ;
	int j = 0;
	Link* p = head;
	cout << "��������Ҫ�ҵ�λ������" << " ";
	cin >> i;
	for (j = 0; j < i; j++)
	{
		p = p->next;
	}
	cout <<"��"<<i<<"λΪ��"<< p->data << endl;
	return p;

}

//��ֵ�����
Link* LocateElem(Link* head)
{
	int data = 0;
	int j = 0;
	cout << "��������ҪѰ�ҵ�ֵ��" << " ";
	cin >> data;
	Link* p = head->next;
	while (p->data != data)
	{
		p = p->next;
		j++;
	}
	cout << j + 1 << endl;
	return p;
}

//���Ա����
Link* ListInsert(Link* head)
{
	int i;
	int j = 0;
	int data;
	Link* p = head;
	cout << "������Ҫ���뵽�ڼ�����" << " ";
	cin >> i;
	while (j < i-1)
	{
		p = p->next;
		j++;
	}
	Link* s = (Link*)malloc(sizeof(Link));
	cout << "��������Ҫ�����Ԫ��:" << " ";
	cin >> data;
	s->data = data;
	s->next = p->next;
	p->next = s;
	return s;
}

//������ɾ�����
Link* LinkDele(Link* head)
{
	int i=0;
	int j;
	cout << "��Ҫɾ���ڼ���Ԫ�أ�" << " ";
	cin >> j;
	Link* p = head;
	Link* q;
	while (i < j-1)
	{
		p = p->next;
		i++;
	}
	q = p->next;
	p->next = q->next;
	free(q);
	return head;
}

//��ӡ������
void PrintList(Link* L)
{
	while (L->next)
	{
		cout << L->next->data << " ";
		L = L->next;
	}
}

//ѡ��˵�
void menu()
{
	cout << "****************************************" << endl;
	cout << "               �������������             " << endl;
	cout << "****************************************" << endl;
	cout << "             1.������Ų���Ԫ��           " << endl;
	cout << "             2.��ֵ����Ԫ��               " << endl;
	cout << "             3.����Ԫ��                  " << endl;
	cout << "             4.ɾ��Ԫ��                  " << endl;
	cout << "             0.�˳�ϵͳ                  " << endl;
	cout << "****************************************" << endl;
}

int main()
{
	menu();
	Link* head = create2();
	int choose = 0;
	cout << "����������ѡ�" << " ";
	cin >> choose;
	switch (choose) {
	case 1: {
		GetElem(head);
		break;
	}
	case 2: {
		Link* head = create2();
		LocateElem(head);
		break;
	}
	case 3: {
		cout << "����ǰ������" << " ";
		PrintList(head);
		cout << endl;
		ListInsert(head);
		cout << "����������" << " ";
		PrintList(head);
		cout << endl;
		break;
	}
	case 4: {
		cout << "ɾ��ǰ������" << " ";
		PrintList(head);
		cout << endl;
		LinkDele(head);
		cout << "ɾ���������" << " ";
		PrintList(head);
		cout << endl;
		break;
	}
	case 0: {
		cout << "��ӭ�´�ʹ��" << endl;
		system("pause");
		exit(0);
		break;
	}
	default: {
		cout << "�����д���" << endl;
	}
		   system("pause");
		   return 0;

	}
}