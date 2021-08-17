#include<iostream>
using namespace std;

class Student
{
public:
   string name;
   int id;
   void showstudent()
   {
       cout<<"姓名："<<name<<"  "<<"学号："<<id<<endl;
   }
};

int main()
{
    Student s1;
    cout<<"请输入学生姓名："<<" ";
    cin>>s1.name;
    cout<<"请输入学生学号："<<" ";
    cin>>s1.id;
    s1.showstudent();
    system("pause");
    return 0;

}