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
	cout << "�����뵥����Ԫ�ظ���:" << " ";
	cin >> n;
	struct Link* q;
	struct Link* head = (struct Link*)malloc(sizeof(struct Link));
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++)
	{
		struct Link* newN = (struct Link*)malloc(sizeof(struct Link));
		cout << "�������" << i + 1 << "���ڵ��ֵ:" << " ";
		cin >> data;
		newN->data = data;
		head->next = newN;
		head = newN;
	}
	head->next = NULL;
	head = q;
	cout << "��ʼʱ������Ϊ:" << endl;
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