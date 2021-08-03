#include<iostream>
using namespace std;

int main()
{
	//三只小猪比体重
	int a=0;
	int b=0;
	int c=0;
	cout << "请输入第一只小猪的重量（kg）：" << endl;
	cin >> a;
	cout << "请输入第二只小猪的重量(kg)：" << endl;
	cin >> b;
	cout << "请输入第三只小猪的重量(kg)：" << endl;
	cin >> c;
	if (a > b && a > c)
	{
		cout << "最重的猪是A" << endl;
	}
	else if (b > a && b > c)
	{
		cout << "最重的猪是B" << endl;
	}
	else if (c > a && c > b)
	{
		cout << "最重的猪是C" << endl;
	}
	else
	{
		cout << "他们一样重" << endl;
	}
	system("pause");
	return 0;

	
}