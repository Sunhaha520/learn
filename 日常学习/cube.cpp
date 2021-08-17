#include<iostream>
using namespace std;

class Cube
{
    public:
    int L;
    int H;
    int W;
    int S;
    int V;
    int mianji()
    {
        S=2*(L*H+L*W+H*W);
        return S;
    } 
    int tiji()
    {
        V=L*H*W;
        return V;
    }
};

int main()
{
    //参数输入
    Cube c1;
    Cube c2;
    cout<<"请输入第一个立方体的参数"<<endl;
    cout<<"请输入第一个立方体的长:"<<"  ";
    cin>>c1.L;
    cout<<"请输入第一个立方体的宽:"<<"  ";
    cin>>c1.W;
    cout<<"请输入第一个立方体的高:"<<"  ";
    cin>>c1.H;
    cout<<"请输入第二个立方体的参数"<<endl;
    cout<<"请输入第二个立方体的长:"<<"  ";
    cin>>c2.L;
    cout<<"请输入第二个立方体的宽:"<<"  ";
    cin>>c2.W;
    cout<<"请输入第二个立方体的高:"<<"  ";
    cin>>c2.H;
    //体积面积计算
    c1.mianji();
    c2.mianji();
    c1.tiji();
    c2.tiji();
    //显示
    cout<<"第一个立方体的体积是:"<<c1.V<<"  "<<"面积是:"<<c1.S<<endl;
    cout<<"第二个立方体的体积是:"<<c2.V<<"  "<<"面积是:"<<c2.S<<endl;
    //大小判断
    if(c1.V==c2.V)
    {
        cout<<"这两个立方体的体积相等"<<endl;
    }
    else
    {
        cout<<"这两个立方体体积不相等"<<endl;
    }
    system("pause");
    return 0;
}