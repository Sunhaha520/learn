#include <stdio.h>
void print(int n)
{
    if(n>9)
    {
        printf(n/10);
    }
    printf("%d",n%10);
}
int main()
{
    int num=1234;
    printf(num);
    return 0;
}