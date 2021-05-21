#include<stdio.h>
int main()
{
    int a=40;
    int b;
    scanf("%d",&b);
    if(a<b)
    printf("您猜的数大了\n");
    if(a==b)
    printf("您猜对了\n");
    if(a>b)
    printf("你猜的小了\n");
    return 0;



}