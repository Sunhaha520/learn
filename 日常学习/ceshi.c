#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("******振宇计算器******\n");
    printf("请输入两个数字:\n");
    scanf("%d %d",&a,&b);
    printf("******结果如下*******\n");
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d/%d=%d\n",a,b,a/b);
    return 0;
}