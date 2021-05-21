#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main()
{
    char arr1[]="我是你爸爸";
    char arr2[]="********";
    int left=0;
    int right=strlen(arr1)-1;

    while(left<=right)
    {
        arr2[left]=arr1[left];
        arr2[right]=arr1[right];
        printf("%s\n",arr2);
        sleep(1000);
        left++;
        right--;
    }
    return 0;
}