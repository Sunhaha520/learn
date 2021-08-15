#include<iostream>
using namespace std;

void maopao(int * arr,int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
             if(arr[j]>arr[j+1])
             {
                 int temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
             }
        }
    }
    
}
//打印函数
void printarr(int arr[],int len)
{
    
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
int main()
{
    int arr[10]={4,3,6,9,1,2,10,8,7,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"排序前的顺序是："<<endl;
    printarr(arr,len);
    cout<<endl;
    cout<<"排序后的顺序是："<<endl;
    maopao(arr,len);
    printarr(arr,len);
    system("pause");
    return 0;
}