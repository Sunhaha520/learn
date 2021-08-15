#include<iostream>
using namespace std;

int main()
{
    //第一种表示
   /* int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout << arr[0] << endl;*/
//第二种表示 
   /* int arr[5]={10,20,30,40,50};
   /* cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;*/

//利用循环输出数组中的元素
   /* for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }*/

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"整个数组占用内存空间为："<<sizeof(arr)<<endl;
    cout<<"每个数组占用的存储空间为："<<sizeof(arr[0])<<endl;
    cout<<"数组元素个数为:"<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"数组的首地址为："<<(int)arr<<endl;
    cout<<"数组中第一个元素的地址为："<<(int)&arr[0]<<endl;
    cout<<"数据中第二个元素的地址为："<<(int)&arr[1]<<endl;
    system("pause");
    return 0;
}