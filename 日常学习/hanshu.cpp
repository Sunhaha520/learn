#include<iostream>
using namespace std;

/*int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}*/
int max(int a,int b)
{
    return a>b? a:b;
}

void change(int a,int b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}

int main()
{
    /*int a=10;
    int b=20;
    int sum=add(a,b);
    cout<<sum<<endl;
    int a=100;
    int b=100;
    add(a,b);
    cout<<sum<<endl;*/

    int a=10;
    int b=20;
    change(a,b);
    system("pause");
    return 0;
}