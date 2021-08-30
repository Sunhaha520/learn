/*#include<iostream>
using namespace std;

struct Link
{
	int data;
	struct Link* next;
};


int main()
{
	int data, n;
	cout << "请输入单链表元素个数:" << " ";
	cin >> n;
	struct Link* q;
	struct Link* head = (struct Link*)malloc(sizeof(struct Link));
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++)
	{
		struct Link* newN = (struct Link*)malloc(sizeof(struct Link));
		cout << "请输入第" << i + 1 << "个节点的值:" << " ";
		cin >> data;
		newN->data = data;
		head->next = newN;
		head = newN;
	}
	head->next = NULL;
	head = q;
	cout << "初始时的链表为:" << endl;
	while (head->next)
	{
		cout << head->next->data << " ";
		head = head->next;
	}
	cout << endl;
	system("pause");
	return 0;
}*/

#include<stdio.h>
int main() {
	int i = 1, sum = 0;
	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}