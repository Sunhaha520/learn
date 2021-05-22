#include <stdio.h>
/*#include <stdlib.h>
int main()
{
    int i=0;
    for(i=0;i<100;i++)
    {
        printf("%d",i);

    }
    system("pause");
    return 0;
 }*/

 
 //F5-启动调试-和F9配合使用

 
 /*int main()
 {
     int i=0;
     int ar[10]={1,2,3,4,5,6,7,8,9,10};
     for(i=0;i<=12;i++)
     {
         printf("hehe\n");
         ar[i]=0;
     }
     system("pause");//优化以后不再死循环
     return 0;
 }*/


 
 //断点-如图红点F9用来切换断点
 #include <stdlib.h>
int main()
{
    int i=0;
    for(i=0;i<100;i++)
    {
        printf("%d",i);

    }
    for(i=0;i<100;i++)
    {
        printf("%d",10-i);

    }
    system("pause");
    return 0;
 }



