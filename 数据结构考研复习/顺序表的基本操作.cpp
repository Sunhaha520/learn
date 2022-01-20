/*小阿宇线性表之顺序表基本操作总结小程序*/
/*有错误之处还希望可以指出来*/
#include<iostream>
using namespace std;
#define MAX 50

//定义结构体
struct SqList {
	int arr[MAX];
	int length;
};

//创建顺序表
void ListCreate(SqList& s)
{
	cout << "请输入顺序表的长度：" << " ";
	cin >> s.length;
	if (s.length > MAX)
	{
		cout << "超出范围！" << endl;
	}
	for (int i = 0; i < s.length; i++)
	{
		cout << "请输入第" << i + 1 << "个元素：" << " ";
		cin >> s.arr[i];
	}
}

//顺序表中插入元素，第k元素及以后后移，将插入的元素放入k位置
void ListInsert(SqList& s)
{
	int e;
	int k;
	cout << "请输入要插入元素值：" << " ";
	cin >> e;
	cout << "请输入您要插入的数字在第几项(第一项为第0项）：" << " ";
	cin >> k;
	if (k > s.length)
	{
		cout << "超出顺序表范围" << endl;
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

//顺序表元素的删除，元素前移覆盖
void ListDelete(SqList& s)
{
	int n;
	int d;
	cout << "您要删除第几项：" << " ";
	cin >> n;
	if (n > s.length)
	{
		cout << "范围超出！" << endl;
	}
	else {
		for (int f = n ; f < s.length; f++)
		{
			s.arr[f-1] = s.arr[f];
		}
	}
	s.length--;
}

//查找顺序表元，从头到尾寻找元素，相同即输出位数
int LocateElem(SqList & s)
{
	int m;
	cout << "请输入你要查找的数字：" << " ";
	cin >> m;

	for (int i = 0; i < s.length; i++)
	{
		if (s.arr[i] == m) {
			return i + 1;
		}
	}
	
}

//打印顺序表
void ListPrint(SqList & s)
{
	for (int i = 0; i < s.length; i++)
	{
		cout << s.arr[i] << " ";
	}
}

//选择菜单界面
void menu()
{
	cout << "***************************************************" << endl;
	cout << "                 顺序表操作菜单选择                 " << endl;
	cout << "                  1.插入元素                        " << endl;
	cout << "                  2.删除元素                        " << endl;
	cout << "                  3.查找元素                         " << endl;
	cout << "                  0.退出程序                       " << endl;
	cout << "***************************************************" << endl;
}

//主函数
int main()
{
	int choose = 0;
	int ret = 0;
	menu();//菜单界面
	SqList s;//定义一个顺序表
	ListCreate(s);//创建顺序表
	
	//选择程序
	cout << "请输入您的选项：" << " ";
	cin >> choose;
	switch (choose) {
	case 1:
		cout << "变形前的顺序表为：" << " ";
		ListPrint(s);
		cout << endl;
		ListInsert(s);
		cout << "变形后的顺序表为：" << " ";
		ListPrint(s);
		cout << endl;
		break;
	case 2:
		cout << "变形前的顺序表为：" << " ";
		ListPrint(s);
		cout << endl;
		ListDelete(s);
		cout << "变形后的顺序表为：" << " ";
		ListPrint(s);
		cout << endl;
		break;
	case 3:
		ret = LocateElem(s);
		cout << "元素位于第" << ret << "位"<<endl;
		break;
	case 0:
		cout << "欢迎下次使用" << endl;
		system("pause");
		exit(0);
		break;
	default:
		cout << "输入有错误！" << endl;
	}

	system("pause");
	return 0;

}