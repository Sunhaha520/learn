#include<iostream>
using namespace std;

//1.创建学生数据类型
struct Student
{
    string name;
    int age;
    int score;
};

//2.通过学生类型创建具体学生

int main()
{
    struct Student s1;
    s1.name="张三";
    s1.age=18;
    s1.score=100;
    cout<<"姓名:"<<s1.name<<"年龄："<<s1.age<< "成绩："<<s1.score<<endl;
    struct Student s2={"李四",19,60};
    cout<<"姓名："<<s2.name<<"年龄："<<s2.age<<"成绩："<<s2.score<<endl;


    system("pause");
    return 0;
}