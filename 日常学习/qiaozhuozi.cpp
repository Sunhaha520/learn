#include<iostream>
using namespace std;

int main()
{
    int num=1;
   for(num=1;num<=100;num++)
   {
       int a;
       int b;
       a=num/10;
       b=num%10;
       if(a==7||b==7||num%7==0){
           cout<<"ÇÃ×À×Ó"<<endl;
       }
       else{
           cout<<num<<endl;
       }
   }
   
    system("pause");
    return 0;
}