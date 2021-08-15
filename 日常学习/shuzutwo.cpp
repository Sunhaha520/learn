#include<iostream>
using namespace  std;

int main()
{
    int arr[2][3]=
    {
        {1,2,3},
        {4,5,6}
    };
    cout<<"二维数组占用的内存空间为："<<sizeof(arr)<<endl;
    cout<<"二维数组的首地址为:"<<(int) &arr[0][0]<<endl;
    cout<<"二维数组的第二位地址为："<<(int) &arr[0][1]<<endl;
    cout<<"二维数组第一行占用的内存为："<<sizeof(arr[0])<<endl;
    cout<<"二维数组的列数为："<<sizeof(arr[0])/sizeof(arr[0][0])<<endl;
    cout<<"二维数组的行数："<<sizeof(arr)/sizeof(arr[0])<<endl;
    system("pause");
    return 0;
}