/*С�������Ա�֮˳�����������ܽ�С����*/
/*�д���֮����ϣ������ָ����*/
#include<iostream>
using namespace std;
#define MAX 50

//����ṹ��
struct SqList {
	int arr[MAX];
	int length;
};

//����˳���
void ListCreate(SqList& s)
{
	cout << "������˳���ĳ��ȣ�" << " ";
	cin >> s.length;
	if (s.length > MAX)
	{
		cout << "������Χ��" << endl;
	}
	for (int i = 0; i < s.length; i++)
	{
		cout << "�������" << i + 1 << "��Ԫ�أ�" << " ";
		cin >> s.arr[i];
	}
}

//˳����в���Ԫ�أ���kԪ�ؼ��Ժ���ƣ��������Ԫ�ط���kλ��
void ListInsert(SqList& s)
{
	int e;
	int k;
	cout << "������Ҫ����Ԫ��ֵ��" << " ";
	cin >> e;
	cout << "��������Ҫ����������ڵڼ���(��һ��Ϊ��0���" << " ";
	cin >> k;
	if (k > s.length)
	{
		cout << "����˳���Χ" << endl;
	}
	else {
		for (int j = s.length; j >= k-1; j--)
		{
			s.arr[j] = s.arr[j - 1];
		}
	}
	s.arr[k-1] = e;
	s.length++;
}

//˳���Ԫ�ص�ɾ����Ԫ��ǰ�Ƹ���
void ListDelete(SqList& s)
{
	int n;
	int d;
	cout << "��Ҫɾ���ڼ��" << " ";
	cin >> n;
	if (n > s.length)
	{
		cout << "��Χ������" << endl;
	}
	else {
		for (int f = n ; f < s.length; f++)
		{
			s.arr[f-1] = s.arr[f];
		}
	}
	s.length--;
}

//����˳���Ԫ����ͷ��βѰ��Ԫ�أ���ͬ�����λ��
int LocateElem(SqList & s)
{
	int m;
	cout << "��������Ҫ���ҵ����֣�" << " ";
	cin >> m;

	for (int i = 0; i < s.length; i++)
	{
		if (s.arr[i] == m) {
			return i + 1;
		}
	}
	
}

//��ӡ˳���
void ListPrint(SqList & s)
{
	for (int i = 0; i < s.length; i++)
	{
		cout << s.arr[i] << " ";
	}
}

//ѡ��˵�����
void menu()
{
	cout << "***************************************************" << endl;
	cout << "                 ˳�������˵�ѡ��                 " << endl;
	cout << "                  1.����Ԫ��                        " << endl;
	cout << "                  2.ɾ��Ԫ��                        " << endl;
	cout << "                  3.����Ԫ��                         " << endl;
	cout << "                  0.�˳�����                       " << endl;
	cout << "***************************************************" << endl;
}

//������
int main()
{
	int choose = 0;
	int ret = 0;
	menu();//�˵�����
	SqList s;//����һ��˳���
	ListCreate(s);//����˳���
	
	//ѡ�����
	cout << "����������ѡ�" << " ";
	cin >> choose;
	switch (choose) {
	case 1:
		cout << "����ǰ��˳���Ϊ��" << " ";
		ListPrint(s);
		cout << endl;
		ListInsert(s);
		cout << "���κ��˳���Ϊ��" << " ";
		ListPrint(s);
		cout << endl;
		break;
	case 2:
		cout << "����ǰ��˳���Ϊ��" << " ";
		ListPrint(s);
		cout << endl;
		ListDelete(s);
		cout << "���κ��˳���Ϊ��" << " ";
		ListPrint(s);
		cout << endl;
		break;
	case 3:
		ret = LocateElem(s);
		cout << "Ԫ��λ�ڵ�" << ret << "λ"<<endl;
		break;
	case 0:
		cout << "��ӭ�´�ʹ��" << endl;
		system("pause");
		exit(0);
		break;
	default:
		cout << "�����д���" << endl;
	}

	system("pause");
	return 0;

}