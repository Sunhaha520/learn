#include <stdio.h>
int main()
{
    printf("**************************************\n");
    printf("*            1.你好                   *\n");
    printf("*            2.早上好                 *\n");
    printf("*            3.中午好                 *\n");
    printf("*            4.晚上好                 *\n");
    printf("*            5.再见                   *\n");
    printf("**************************************\n");
    printf("请输入您的选项：");
    int type;
    scanf("%d",&type);
    switch(type)
{
    case 1:
    printf("你好");
    break;
    case 2:
    printf("早上好");
    break;
    case 3:
    printf("中午好");
    break;
    case 4:
    printf("晚上好");
    break;
    case 5:
    printf("再见");
    break;
    default:
    printf("你输入有误");
    break;

}
   return 0;
}