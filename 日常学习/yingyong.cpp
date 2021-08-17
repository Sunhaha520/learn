#include<iostream>
using namespace std;


int& test01()
{
    int a=10;
    return a;
}

int main()
{
    int &ref=test01();
    cout<<"ref="<<ref<<endl;
    system("pause");
    return 0;
}