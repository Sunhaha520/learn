#include<iostream>
using namespace std;
int main()
{
	int d = 8;
	int a = 5;
	int b = 2;
	int c = 1;
	int n = 0;
	int m = 0;
	int x = 0;
	int y = 0;
	cout << "*******************************************" << endl;
	cout << "*            小阿宇伤心计算器             *" << endl;
	cout << "*******************************************" << endl;
	cout << "*                                         *" << endl;
	cout << "*    1.小刘同学说不理小阿宇8伤心值        *" << endl;
	cout << "*    2.小刘同学不想和小阿宇说话5伤心值    *" << endl;
	cout << "*    3.小刘同学说不想学习2伤心值          *" << endl;
	cout << "*    4.小刘同学提小学长1伤心值            *" << endl;
	cout << "*                                         *" << endl;
	cout << "*******************************************" << endl;
	cout << "请输入今天小刘同学说不理你几次：" << " ";
	cin >> n;
	cout << "请输入今天小刘同学说不想和你说话几次：" << " ";
	cin >> m;
	cout << "请输入今天小刘同学说不想学习几次：" << " ";
	cin >> x;
	cout << "请输入今天小刘同学提小学长几次：" << " ";
	cin >> y;
	int data = n * 8 + m * 5 + x * 2 + y * 1;
	if (data < 50)
	{
		cout << "你的伤心指数为:" << data << " " << "恭喜！你的伤心还可以缓解!";
	}
	else
	{
		cout << "你的伤心指数为:" << data << " " << "你太伤心了，我都心疼giegie";
	}
	
	return 0;

}
