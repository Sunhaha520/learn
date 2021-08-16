#include<iostream>
using namespace std;
#include<string>

//�˵���װ����
void Menu()
{
	cout << "***************************************************" << endl;
	cout << "**************** 1.�����ϵ��  ********************" << endl;
	cout << "**************** 2.��ʾ��ϵ��  ********************" << endl;
	cout << "**************** 3.ɾ����ϵ��  ********************" << endl;
	cout << "**************** 4.������ϵ��  ********************" << endl;
	cout << "**************** 5.�޸���ϵ��  ********************" << endl;
	cout << "**************** 6.�����ϵ��  ********************" << endl;
	cout << "**************** 0.�˳�ͨѶ¼  ********************" << endl;
	cout << "***************************************************" << endl;
}

struct Person
{
	string name;
	int sex;
	int age;
	string number;
	string address;

};

//������ϵ�˽ṹ��
#define MAX 1000

//ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX]; //ͨѶ¼�б������ϵ������
	int m_Size; //ͨѶ¼����Ա����
};
void Addperson(Addressbooks* abs)
{
   
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//����
		string name;
		cout << "ǰ��������ϵ��������" << " ";
		cin >> name;
		abs->personArray[abs->m_Size].name = name;

		cout << "�������Ա�" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;

		//�Ա�
		int sex = 0;
		while (true)
		{
			cout << "��ѡ���Ա�" << "  ";
			cin >> sex;
			if (sex == 1||sex==2)
			{
				abs->personArray[abs->m_Size].sex = sex;
				break;
			}
			
			else
			{
				cout << "�����д������������롣" << " ";
			}
		}

		//����
		cout << "����������:" << "  ";
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].age = age;

		//��ϵ�绰
		cout << "������绰���룺" << "  ";
		string number ="";
		cin >> number;
		abs->personArray[abs->m_Size].number = number;

		//��ͥ��ַ
		cout << "�������ͥסַ��" << "  ";
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].address = address;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");


	}
}

//��ʾ��ϵ��
void showperson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "ͨѶ¼Ϊ��!" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "����:" << abs->personArray[i].name << "\t";
			cout << "�Ա�:" << abs->personArray[i].sex << "\t";
			cout << "����:" << abs->personArray[i].age << "\t";
			cout << "�绰:" << abs->personArray[i].number << "\t";
			cout << "סַ:" << abs->personArray[i].address << endl;
		}
		system("pause");
		system("cls");
	}
}

//�����ϵ���Ƿ����
int checkperson(Addressbooks* abs,string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].name == name)
		{
			return i;
		}
		return -1;
	}
}

void deleperson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ�ˣ�" << "  ";
	string name;
	cin >> name;

	int ret = checkperson(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ���" << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

//������ϵ��
void searchperson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << "  ";
	string name;
	cin >> name;

	int ret = checkperson(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			cout << "����:" << abs->personArray[i].name << "\t";
			cout << "�Ա�:" << abs->personArray[i].sex << "\t";
			cout << "����:" << abs->personArray[i].age << "\t";
			cout << "�绰:" << abs->personArray[i].number << "\t";
			cout << "סַ:" << abs->personArray[i].address << endl;
		}
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");

}

//�޸���ϵ��
void modperson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << "  ";
	string name;
	cin >> name;

	int ret = checkperson(abs, name);
	if (ret != -1)
	{
		//����
		string name;
		cout << "����������:" << "  ";
		cin >> name;
		abs->personArray[ret].name = name;

		cout << "��ѡ���Ա�:" << endl;
		cout << "1--��" << endl;
		cout << "2-Ů" << endl;
		//�Ա�
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].sex = sex;
				break;
			}
			else
			{
				cout << "������������������!";
			}
		}


		//����
		int age;
		cout << "����������:" << "  ";
		cin >> age;
		abs->personArray[ret].age = age;

		//�绰����
		string number;
		cout << "������绰����:" << "  ";
		cin >> number;
		abs->personArray[ret].number = number;

		//��ͥסַ
		string address;
		cout << "�������ͥ��ַ:" << "  ";
		cin >> address;
		abs->personArray[ret].address = address;

		cout << "�޸ĳɹ���" << endl;

	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");

}
//���ͨѶ¼
void cleanperson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼�������" << endl;
	system("pause");
	system("cls");
}







int main()
{
	//�˵�ѡ����
	int select = 0;
	//����ͨѶ¼
	Addressbooks abs;
	//��ʼ��ͨѶ¼������
	abs.m_Size = 0;
	while (true)
	{
		Menu();
		cout << "����������ѡ�" << "  ";
		cin >> select;
		switch (select)
		{
		case 1://�����ϵ��
			Addperson(&abs);
			break;
		case 2://��ʾ��ϵ��
			showperson(&abs);
			break;
		case 3://ɾ����ϵ��
			deleperson(&abs);
			break;
		case 4://������ϵ��
			searchperson(&abs);
			break;
		case 5://�޸���ϵ��
			modperson(&abs);
			break;
		case 6://�����ϵ��
			cleanperson(&abs);
			break;
		case 0://�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "����������ݲ��Ϸ�������������!" << endl;
			break;

		}

	}

	//���ͨѶ¼��ϵ��
	
	
	
	system("pause");
	return 0;
}