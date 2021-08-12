#include<iostream>
using namespace std;

int main()
{
    //1.创建数组
   int arr[5]={1,2,3,4,5};
   int start=0;
   int end=sizeof(arr)/sizeof(arr[0])-1;
   int temp;//创建一个中间变量
    //实现逆置
    cout<<"数组逆置前的结果为："<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
   while(start<end)
   {
       temp=arr[start];
       arr[start]=arr[end];
       arr[end]=temp;
       //下标更新
       start++;
       end--;
   }
   cout<<"逆置后的数组为："<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    system("pause");
    return 0;
}