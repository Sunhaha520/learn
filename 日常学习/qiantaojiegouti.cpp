#include<iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

struct teacher
{
    int id;
    string name;
    int age;
    struct student s1;
};

int main()
{
    struct teacher t1;
    t1.id=10000;
    t1.name="����ʦ";
    t1.age=40;
    t1.s1.name="����";
    t1.s1.age=18;
    t1.s1.score=60;
    struct teacher *p=&t1;
    cout<<"��ʦ������"<<p->id <<" ��ʦ����:"<<p->name <<" ��ʦ���䣺"<<p->age <<endl;
    cout << "����ѧԱ ������ " << t1.s1.name << " ���䣺" << t1.s1.age << " ���Է����� " << t1.s1.score << endl;
    system("pause");
    return 0;
    
}