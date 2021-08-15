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
        cout<<"Ó¢ÐÛÐÕÃû£º"<<arr[i].name <<" ÄêÁä£º"<<arr[i].age<<" ÐÔ±ð£º"<<arr[i].sex<<endl;
    }
}

int main()
{
    struct hero arr[5]=
    {
        {"Áõ±¸",23,"ÄÐ"},
		{"¹ØÓð",22,"ÄÐ"},
		{"ÕÅ·É",20,"ÄÐ"},
		{"ÕÔÔÆ",21,"ÄÐ"},
		{"õõ²õ",19,"Å®"}
    };
    int len=sizeof(arr)/sizeof(arr[0]);
    maopao(arr,len);
    printhero(arr,len);

    system("pause");
    return 0;
}