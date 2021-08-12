#include<iostream>
using namespace std;

int main()
{
    int arr[9]={4,2,8,0,5,7,1,3,9};
    cout<<"排序前的数组为："<<endl;
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<endl;
    }
    //总共排序轮数为元素个数减1
    for(int i=0;i<9-1;i++)
    {
        //内循环对比
        for(int j=0;j<9-i-1;j++)
        {
            //如果第一个数字比第二个大，交换
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"排序后的数组为："<<endl;
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<endl;
    }
    system("pause");
    return 0;
}