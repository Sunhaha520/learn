#include<iostream>
using namespace std;

struct hero
{
    string name;
    int age;
    string sex;
};

void maopao(hero arr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(arr[j].age>arr[j+1].age)
            {
               hero temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;

            }
        }
    }
}

void printhero(hero arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<"Ӣ��������"<<arr[i].name <<" ���䣺"<<arr[i].age<<" �Ա�"<<arr[i].sex<<endl;
    }
}

int main()
{
    struct hero arr[5]=
    {
        {"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
    };
    int len=sizeof(arr)/sizeof(arr[0]);
    maopao(arr,len);
    printhero(arr,len);

    system("pause");
    return 0;
}