#include<iostream>
using namespace std;

int main()
{
    //��һ�ֱ�ʾ
   /* int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout << arr[0] << endl;*/
//�ڶ��ֱ�ʾ 
   /* int arr[5]={10,20,30,40,50};
   /* cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;*/

//����ѭ����������е�Ԫ��
   /* for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }*/

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"��������ռ���ڴ�ռ�Ϊ��"<<sizeof(arr)<<endl;
    cout<<"ÿ������ռ�õĴ洢�ռ�Ϊ��"<<sizeof(arr[0])<<endl;
    cout<<"����Ԫ�ظ���Ϊ:"<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"������׵�ַΪ��"<<(int)arr<<endl;
    cout<<"�����е�һ��Ԫ�صĵ�ַΪ��"<<(int)&arr[0]<<endl;
    cout<<"�����еڶ���Ԫ�صĵ�ַΪ��"<<(int)&arr[1]<<endl;
    system("pause");
    return 0;
}