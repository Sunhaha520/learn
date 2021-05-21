#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("请输入第一个数的大小：");
    scanf("%d",&a);
    printf("请输入第二个数的大小：");
    scanf("%d",&b);
    if(a>b)
    printf("最大的数字是%d\n",a);
    if(a==b)
    printf("这两个数字相等\n");
    
    if(a<b)
        printf("最大的那个数是%d\n",b);
        return 0;
    
    



}