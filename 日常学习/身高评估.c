#include<stdio.h>
int main()
{
    int hight;
    int a=170;
    printf("请输入您的身高（单位：cm）:");
    scanf("%d",&hight);
    if(hight>170)
    printf("你好高啊\n");
    else if(hight==170)
    printf("您是平均身高\n");
    else
    printf("您低于平均身高\n");
    return 0;
}

