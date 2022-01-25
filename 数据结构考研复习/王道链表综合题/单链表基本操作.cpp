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
				 佛祖保佑       永无BUG   小阿宇
		*/
#include<iostream>
using namespace std;

struct Link {
	int data;
	struct Link* next;
};

//头插法创单链表
Link* create1()
{
	int n;
	int data;
	cout << "请输入单链表的长度:" << " ";
	cin >> n;
	Link* head;
	head = (Link*)malloc(sizeof(Link));
	head->next = NULL;
	for (int i = 0; i < n; i++)
	{
		struct Link* newP = (Link*)malloc(sizeof(Link));
		cout << "请输入第" << i + 1 << "个元素的值" << " ";
		cin >> data;
		newP->data = data;
		newP->next = head->next;
		head->next = newP;
	}
	return head;
}

//尾插法创建单链表
Link* create2()
{
	int n = 0;
	int data;
	cout << "请输入单链表的位数:" << " "; 
	cin >> n;
	Link* head;
	head = (Link*)malloc(sizeof(Link));
	Link* rear = head , * newP = head;
	for (int i = 0; i < n; i++)
	{
		newP = (Link*)malloc(sizeof(Link));
		cout << "请输入第" << i + 1 << "个元素的值" << " ";
		cin >> data;
		newP->data = data;
		rear->next = newP;
		rear = newP;
	}
	rear->next = NULL;	
	return head;
} 

//按序号查找结点值
Link* GetElem(Link* head)
{
	int i ;
	int j = 0;
	Link* p = head;
	cout << "请输入你要找的位次数：" << " ";
	cin >> i;
	for (j = 0; j < i; j++)
	{
		p = p->next;
	}
	cout <<"第"<<i<<"位为："<< p->data << endl;
	return p;

}

//按值插序号
Link* LocateElem(Link* head)
{
	int data = 0;
	int j = 0;
	cout << "请输入您要寻找的值：" << " ";
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

//线性表插入
Link* ListInsert(Link* head)
{
	int i;
	int j = 0;
	int data;
	Link* p = head;
	cout << "请问您要插入到第几个：" << " ";
	cin >> i;
	while (j < i-1)
	{
		p = p->next;
		j++;
	}
	Link* s = (Link*)malloc(sizeof(Link));
	cout << "请输入您要插入的元素:" << " ";
	cin >> data;
	s->data = data;
	s->next = p->next;
	p->next = s;
	return s;
}

//单链表删除结点
Link* LinkDele(Link* head)
{
	int i=0;
	int j;
	cout << "您要删除第几个元素：" << " ";
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

//打印单链表
void PrintList(Link* L)
{
	while (L->next)
	{
		cout << L->next->data << " ";
		L = L->next;
	}
}

//选择菜单
void menu()
{
	cout << "****************************************" << endl;
	cout << "               单链表基本操作             " << endl;
	cout << "****************************************" << endl;
	cout << "             1.按照序号查找元素           " << endl;
	cout << "             2.按值查找元素               " << endl;
	cout << "             3.插入元素                  " << endl;
	cout << "             4.删除元素                  " << endl;
	cout << "             0.退出系统                  " << endl;
	cout << "****************************************" << endl;
}

int main()
{
	menu();
	Link* head = create2();
	int choose = 0;
	cout << "请输入您的选项：" << " ";
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
		cout << "插入前的链表：" << " ";
		PrintList(head);
		cout << endl;
		ListInsert(head);
		cout << "插入后的链表：" << " ";
		PrintList(head);
		cout << endl;
		break;
	}
	case 4: {
		cout << "删除前的链表：" << " ";
		PrintList(head);
		cout << endl;
		LinkDele(head);
		cout << "删除后的链表：" << " ";
		PrintList(head);
		cout << endl;
		break;
	}
	case 0: {
		cout << "欢迎下次使用" << endl;
		system("pause");
		exit(0);
		break;
	}
	default: {
		cout << "输入有错误！" << endl;
	}
		   system("pause");
		   return 0;

	}
}