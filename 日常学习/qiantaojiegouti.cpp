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
    t1.name="狗老师";
    t1.age=40;
    t1.s1.name="张三";
    t1.s1.age=18;
    t1.s1.score=60;
    struct teacher *p=&t1;
    cout<<"教师姓名："<<p->id <<" 老师姓名:"<<p->name <<" 老师年龄："<<p->age <<endl;
    cout << "辅导学员 姓名： " << t1.s1.name << " 年龄：" << t1.s1.age << " 考试分数： " << t1.s1.score << endl;
    system("pause");
    return 0;
    
}