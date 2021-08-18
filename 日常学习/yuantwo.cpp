#include<iostream>
using namespace std;

//点和圆的关系案例
class Point
{
    public:
    //设置x
    void setX(int x)
    {
        m_X=x;
    }
    //获取x
    int getX()
    {
        return m_X;
    }
    //设置y
    void setY(int y)
    {
        m_Y=y;
    }
    //获取y
    int getY()
    {
        return m_Y;
    }
    
    private:
    int m_X;
    int m_Y;

};
//圆类
class Circle
{
    public:
    void setR(int r)
    {
        m_R=r;
    }
    int getR()
    {
        return m_R;
    }
    void setCenter(Point center)
    {
        m_Center=center;
    }
    Point getCenter()
    {
        return m_Center;
    }
    private:
    int m_R;//半径
    Point m_Center;
};

void Pointd(Circle &c,Point &p)
    {
       int distance=(c.getCenter().getX()-p.getX())*(c.getCenter().getX()-p.getX())+(c.getCenter().getX()-p.getX())*(c.getCenter().getX()-p.getX());
       int rDistance=c.getR()*c.getR();
       if(distance==rDistance)
       {
           cout<<"点在圆上"<<endl;
       }
       else if(distance>rDistance){
           cout<<"点在圆外"<<endl;
       }
       else{
           cout<<"点在圆内"<<endl;
       }
    }

int main()
{
    Circle c1;
    int m_R;
    Point m_Center;
    m_Center.setX(0);
    m_Center.setY(0);
    c1.setR(10);
    Point p;
    p.setX(2);
    p.setY(2);
    Pointd(c1,p);
    system("pause");
    return 0;
}