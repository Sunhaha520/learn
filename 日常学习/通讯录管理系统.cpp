#include<iostream>
using namespace std;
#include<string>

//菜单封装函数
void Menu()
{
	cout << "***************************************************" << endl;
	cout << "**************** 1.添加联系人  ********************" << endl;
	cout << "**************** 2.显示联系人  ********************" << endl;
	cout << "**************** 3.删除联系人  ********************" << endl;
	cout << "**************** 4.查找联系人  ********************" << endl;
	cout << "**************** 5.修改联系人  ********************" << endl;
	cout << "**************** 6.清空联系人  ********************" << endl;
	cout << "**************** 0.退出通讯录  ********************" << endl;
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

//创建联系人结构体
#define MAX 1000

//通讯录结构体
struct Addressbooks
{
	struct Person personArray[MAX]; //通讯录中保存的联系人数组
	int m_Size; //通讯录中人员个数
};
void Addperson(Addressbooks* abs)
{
   
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//姓名
		string name;
		cout << "前请输入联系人姓名：" << " ";
		cin >> name;
		abs->personArray[abs->m_Size].name = name;

		cout << "请输入性别：" << endl;
		cout << "1--男" << endl;
		cout << "2--女" << endl;

		//性别
		int sex = 0;
		while (true)
		{
			cout << "请选择性别：" << "  ";
			cin >> sex;
			if (sex == 1||sex==2)
			{
				abs->personArray[abs->m_Size].sex = sex;
				break;
			}
			
			else
			{
				cout << "输入有错误，请重新输入。" << " ";
			}
		}

		//年龄
		cout << "请输入年龄:" << "  ";
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].age = age;

		//联系电话
		cout << "请输入电话号码：" << "  ";
		string number ="";
		cin >> number;
		abs->personArray[abs->m_Size].number = number;

		//家庭地址
		cout << "请输入家庭住址：" << "  ";
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].address = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");


	}
}

//显示联系人
void showperson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "通讯录为空!" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名:" << abs->personArray[i].name << "\t";
			cout << "性别:" << abs->personArray[i].sex << "\t";
			cout << "年龄:" << abs->personArray[i].age << "\t";
			cout << "电话:" << abs->personArray[i].number << "\t";
			cout << "住址:" << abs->personArray[i].address << endl;
		}
		system("pause");
		system("cls");
	}
}

//检查联系人是否存在
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
	cout << "请输入您要删除的联系人：" << "  ";
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
		cout << "删除成功！" << endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");
}

//查找联系人
void searchperson(Addressbooks* abs)
{
	cout << "请输入您要查找的联系人：" << "  ";
	string name;
	cin >> name;

	int ret = checkperson(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			cout << "姓名:" << abs->personArray[i].name << "\t";
			cout << "性别:" << abs->personArray[i].sex << "\t";
			cout << "年龄:" << abs->personArray[i].age << "\t";
			cout << "电话:" << abs->personArray[i].number << "\t";
			cout << "住址:" << abs->personArray[i].address << endl;
		}
	}
	else
	{
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");

}

//修改联系人
void modperson(Addressbooks* abs)
{
	cout << "请输入您要修改的联系人：" << "  ";
	string name;
	cin >> name;

	int ret = checkperson(abs, name);
	if (ret != -1)
	{
		//姓名
		string name;
		cout << "请输入姓名:" << "  ";
		cin >> name;
		abs->personArray[ret].name = name;

		cout << "请选择性别:" << endl;
		cout << "1--男" << endl;
		cout << "2-女" << endl;
		//性别
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
				cout << "输入有误，请重新输入!";
			}
		}


		//年龄
		int age;
		cout << "请输入年龄:" << "  ";
		cin >> age;
		abs->personArray[ret].age = age;

		//电话号码
		string number;
		cout << "请输入电话号码:" << "  ";
		cin >> number;
		abs->personArray[ret].number = number;

		//家庭住址
		string address;
		cout << "请输入家庭地址:" << "  ";
		cin >> address;
		abs->personArray[ret].address = address;

		cout << "修改成功！" << endl;

	}
	else
	{
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");

}
//清空通讯录
void cleanperson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清除！" << endl;
	system("pause");
	system("cls");
}







int main()
{
	//菜单选择功能
	int select = 0;
	//创建通讯录
	Addressbooks abs;
	//初始化通讯录中人数
	abs.m_Size = 0;
	while (true)
	{
		Menu();
		cout << "请输入您的选项：" << "  ";
		cin >> select;
		switch (select)
		{
		case 1://添加联系人
			Addperson(&abs);
			break;
		case 2://显示联系人
			showperson(&abs);
			break;
		case 3://删除联系人
			deleperson(&abs);
			break;
		case 4://查找联系人
			searchperson(&abs);
			break;
		case 5://修改联系人
			modperson(&abs);
			break;
		case 6://清空联系人
			cleanperson(&abs);
			break;
		case 0://退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "您输入的数据不合法，请重新输入!" << endl;
			break;

		}

	}

	//添加通讯录联系人
	
	
	
	system("pause");
	return 0;
}