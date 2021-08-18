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
        cout<<"这个点在圆外。"<<endl;
    }
    else if(R>r)
    {
        cout<<"这个点在圆内。"<<endl;
    }
    else{
        cout<<"这个点在圆上。"<<endl;
    }
}

int main()
{
    Circle c1;
    cout<<"请输入圆c1的半径："<<"  ";
    cin>>c1.R;
    Point p1;
    cout<<"请输入点p1与c1圆心的距离："<<"  ";
    cin>>p1.r;
    Panduan(c1.R,p1.r);
    system("pause");
    return 0;

}
  