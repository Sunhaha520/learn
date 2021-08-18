#include<iostream>
using namespace std;

//���Բ�Ĺ�ϵ����
class Point
{
    public:
    //����x
    void setX(int x)
    {
        m_X=x;
    }
    //��ȡx
    int getX()
    {
        return m_X;
    }
    //����y
    void setY(int y)
    {
        m_Y=y;
    }
    //��ȡy
    int getY()
    {
        return m_Y;
    }
    
    private:
    int m_X;
    int m_Y;

};
//Բ��
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
    int m_R;//�뾶
    Point m_Center;
};

void Pointd(Circle &c,Point &p)
    {
       int distance=(c.getCenter().getX()-p.getX())*(c.getCenter().getX()-p.getX())+(c.getCenter().getX()-p.getX())*(c.getCenter().getX()-p.getX());
       int rDistance=c.getR()*c.getR();
       if(distance==rDistance)
       {
           cout<<"����Բ��"<<endl;
       }
       else if(distance>rDistance){
           cout<<"����Բ��"<<endl;
       }
       else{
           cout<<"����Բ��"<<endl;
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