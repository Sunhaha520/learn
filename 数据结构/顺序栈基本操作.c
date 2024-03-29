#include "stdio.h"
#include "stdlib.h"
#include "io.h"
#include "math.h"
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20//�洢�ռ��ʼ������

typedef int Status;
typedef char SElemType;//

typedef struct
{
	SElemType data[MAXSIZE];
	int top;
}SqStack;

Status visit(SElemType c)
{
	printf("%d", c);
	return OK;
}

/*����һ����ջS*/
Status InitStack(SqStack* S)
{
	S->top = -1;
	return OK;
}

/*��S��Ϊ��ջ*/
Status ClearStack(SqStack* S)
{
	S->top = -1;
	return OK;
}

/*��ջΪ�գ��򷵻�TRUE�����򷵻�FALSE*/
Status StackEmpty(SqStack S)
{
	if (S.top == -1)
		return TRUE;
	else
		return FALSE;
}

/*����S��Ԫ�ظ�������ջ�ĳ���*/
int StackLength(SqStack S)
{
	return S.top + 1;
}
/*��ջ���գ�����e����S��ջ��Ԫ�أ�������OK���򷵻�ERROR*/
Status GetTop(SqStack S, SElemType *e)
{
	if (S.top == -1)
		return ERROR;
	else
		*e = S.data[S.top];
	return OK; 
}

/*����Ԫ��eΪ�µ�ջ��Ԫ��*/
Status Push(SqStack *S, SElemType e) 
{
	if(S->top == MAXSIZE - 1)
	{
		return ERROR;
	}
	S->top++;
	S->data[S->top] = e;
	return OK;
}
/*��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������OK�����򷵻�ERROR*/
Status Pop(SqStack* S, SElemType *e)
{
	if (S->top == -1)
		return ERROR;
	*e = S->data[S->top];
	S->top--;
	return OK;
}

/*��ջ�׵�ջ�����ζ�ջ��ÿ��Ԫ����ʾ*/
Status StackTraverse(SqStack S)
{
	int i;
	i = 0;
	while (i <= S.top)
	{
		visit(S.data[i++]);
	}
	printf("\n");
	return OK;
}

int main()
{
	int j;
	SqStack s;
	int e;
	/*1.��ʼ��ջ*/
	InitStack(&s);
	printf("��ʼ��ջ�ɹ�\n");

	/*2.�ж�ջs�Ƿ�Ϊ��*/
	printf("2.ջ�շ�%d(1:�� 0:��\n", StackEmpty(s));

	/*3.���ν�ջabcde*/
	Push(&s, 'a');
	Push(&s, 'b');
	Push(&s, 'c');
	Push(&s, 'd');
	Push(&s, 'e');
	printf("3.abcde���ν�ջ���\n");

	/*4.�ж�ջs�Ƿ�ǿ�*/
	printf("2.ջ�շ�%d(1:�� 0:��)\n", StackEmpty(s));

	/*5.�����ջ˳��*/
	printf("4.ջ��Ԫ������Ϊ��");
		StackTraverse(s);

	/*6.�ж�ջs�Ƿ�Ϊ��*/
	printf("5.ջ�շ�%d(1:�� 0:��)\n", StackEmpty(s));

	/*�ͷ�ջ*/
	ClearStack(&s);
	printf("6.ջ�ͷ���ϣ�");
	printf("�ͷ�ջ��ջ�շ�:%d(1.�� 0:��)\n", StackEmpty(s));
	system("pause");
	return 0;
}
