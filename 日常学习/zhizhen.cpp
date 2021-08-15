#include<iostream>
using namespace std;

int main()
{
    //1.定义一个指针
    int a=10;
    //指针定义的语法：数据类型*指针变量名
    int *p;
    //让指针记录变量a的地址
    p=&a;
    cout<<"a的地址为："<<&a<<endl;
    cout<<"p的地址为："<<p<<endl;
    //2.如何使用指针
    *p=1000;
    cout<<"a="<<a<<endl;
    cout<<"*p="<<*p<<endl;


    system("pause");
    return 0;
}