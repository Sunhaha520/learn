#include<iostream>
using namespace std;

int main()
{
    //switch语句
    //给一个电影打分
    //10~9分，经典
    //8~7非常好
    //6~5一般
    //5以下，烂片
    int a=0;
    cout<<"****************************************************"<<endl;
    cout<<"                   电影打分系统                         "<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"               1.10~9分———非常好                      "<<endl;
    cout<<"               2.8~7分————还不错                      "<<endl;
    cout<<"               3.6~5分————一般般                      "<<endl;
    cout<<"               4.5分以下————太烂                      "<<endl;
    cout<<"*****************************************************"<<endl;
    cout<<"请您做出评价："<<endl;
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"你输入的是选项1，你认为这个电影非常好！"<<endl;
        break;
    case 2:
        cout<<"你输入的是选项2，你认为这个电影还不错。"<<endl;
        break;
    case 3:
        cout<<"你输入的是选项3，你认为这个电影一般般。"<<endl;
        break;
    case 4:
        cout<<"你输入的是选项4，你认为这个电影太烂。"<<endl;
        break;
    default:
        cout<<"你输入的值不合法"<<endl;
        break;
    }
     system("pause");
    return 0;
}