#include<iostream>
using namespace std;

//1.����ѧ����������
struct Student
{
    string name;
    int age;
    int score;
};

//2.ͨ��ѧ�����ʹ�������ѧ��

int main()
{
    struct Student s1;
    s1.name="����";
    s1.age=18;
    s1.score=100;
    cout<<"����:"<<s1.name<<"���䣺"<<s1.age<< "�ɼ���"<<s1.score<<endl;
    struct Student s2={"����",19,60};
    cout<<"������"<<s2.name<<"���䣺"<<s2.age<<"�ɼ���"<<s2.score<<endl;


    system("pause");
    return 0;
}