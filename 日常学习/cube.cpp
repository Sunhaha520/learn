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
    //��������
    Cube c1;
    Cube c2;
    cout<<"�������һ��������Ĳ���"<<endl;
    cout<<"�������һ��������ĳ�:"<<"  ";
    cin>>c1.L;
    cout<<"�������һ��������Ŀ�:"<<"  ";
    cin>>c1.W;
    cout<<"�������һ��������ĸ�:"<<"  ";
    cin>>c1.H;
    cout<<"������ڶ���������Ĳ���"<<endl;
    cout<<"������ڶ���������ĳ�:"<<"  ";
    cin>>c2.L;
    cout<<"������ڶ���������Ŀ�:"<<"  ";
    cin>>c2.W;
    cout<<"������ڶ���������ĸ�:"<<"  ";
    cin>>c2.H;
    //����������
    c1.mianji();
    c2.mianji();
    c1.tiji();
    c2.tiji();
    //��ʾ
    cout<<"��һ��������������:"<<c1.V<<"  "<<"�����:"<<c1.S<<endl;
    cout<<"�ڶ���������������:"<<c2.V<<"  "<<"�����:"<<c2.S<<endl;
    //��С�ж�
    if(c1.V==c2.V)
    {
        cout<<"�������������������"<<endl;
    }
    else
    {
        cout<<"��������������������"<<endl;
    }
    system("pause");
    return 0;
}