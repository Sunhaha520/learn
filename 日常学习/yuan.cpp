#include<iostream>
using namespace std;

class Circle
{
    public:
    int R;

};
class Point
{
    public:
    int r;
};
void Panduan(int R,int r)
{
    if(R<r)
    {
        cout<<"�������Բ�⡣"<<endl;
    }
    else if(R>r)
    {
        cout<<"�������Բ�ڡ�"<<endl;
    }
    else{
        cout<<"�������Բ�ϡ�"<<endl;
    }
}

int main()
{
    Circle c1;
    cout<<"������Բc1�İ뾶��"<<"  ";
    cin>>c1.R;
    Point p1;
    cout<<"�������p1��c1Բ�ĵľ��룺"<<"  ";
    cin>>p1.r;
    Panduan(c1.R,p1.r);
    system("pause");
    return 0;

}
  