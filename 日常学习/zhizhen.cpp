#include<iostream>
using namespace std;

int main()
{
    //1.����һ��ָ��
    int a=10;
    //ָ�붨����﷨����������*ָ�������
    int *p;
    //��ָ���¼����a�ĵ�ַ
    p=&a;
    cout<<"a�ĵ�ַΪ��"<<&a<<endl;
    cout<<"p�ĵ�ַΪ��"<<p<<endl;
    //2.���ʹ��ָ��
    *p=1000;
    cout<<"a="<<a<<endl;
    cout<<"*p="<<*p<<endl;


    system("pause");
    return 0;
}