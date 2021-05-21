#include<stdio.h>
int main()
{
    printf("*************找零计算器****************\n");
    int price;
    int bill;
    printf("请输入产品价格：");
    scanf("%d",&price);
    printf("请输入钞票面值：");
    scanf("%d",&bill);
    if(price>bill)
        printf("你的钱不够哦，要加钱\n");
    else
        
        printf("您需要找:%d元\n",bill-price);
        return 0; 
        
}