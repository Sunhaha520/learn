#include<iostream>
using namespace std;

class Student
{
public:
   string name;
   int id;
   void showstudent()
   {
       cout<<"������"<<name<<"  "<<"ѧ�ţ�"<<id<<endl;
   }
};

int main()
{
    Student s1;
    cout<<"������ѧ��������"<<" ";
    cin>>s1.name;
    cout<<"������ѧ��ѧ�ţ�"<<" ";
    cin>>s1.id;
    s1.showstudent();
    system("pause");
    return 0;

}