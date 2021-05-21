#include <stdio.h>
//int main()
//{
    //printf("%d\n",sizeof(char*));
    //printf("%d\n",sizeof(short*));
    //printf("%d\n",sizeof(int*));
    //printf("%d\n",sizeof(double*));
    //int a=0x11223344;//指针类型决定了指针进行借引操作的时候，能访问空间的大小
    //int* pa=&a;
    //char* pc=&a;
    //printf("%p\n",pa);
    //printf("%p\n",pc);
    //  return 0;
//} 
//int* p;*p能访问4个字节
//char* p;*p能访问1个字节
//double* p;*p能访问8个字节

//int main()
//{
 //   int a=0x11223344;
 //   int* pa=&a;
//    char* pa=&a;
//    printf("%p\n",pa);
//    printf("%p\n",pa+1);
    
 //   printf("%p\n",pc);
 //   printf("%p\n",pc+1);
 //   return 0;
//}
//指针类型决定了：指针走一步走多远（指针的步长）
//int main()
//{
//    int arr[10]={0};
//    int* p=arr;//数组名-首元素的地址
//    int i=0;
//    for(i=0;i<10;i++)
//    {
 //       *(p+i)=1;
//    }
//    return 0;

    
//}

//int* test()
//{
//    int a=10;
 //   return &a;
//}
//int main()
//{
//    int* p=test();
//    printf("%d\n",*p);
 //   return 0;
//}

//int main()
//{
//    int a=10;
//    int* pa=&a;//初始化
 //   int* p=NULL;//NULL用来初始化指针的，给指针赋值
//}

//如何避免野指针：1.指针初始化2.小心指针越界3.指针指向空间释放即事置NULL4.指针使用之前检查有效性
//int main()
//{
  //  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  //  int i=0;
  //  int sz=sizeof(arr)/sizeof(arr[0]);
  //  int* p=arr;
 //   for(i=0;i<sz;i++)
  //  {
  //      printf("%d",*p);
  //      p+=1;
  //  }
  //  return 0;
//}

//指针-指针:得到的是中间的元素个数
//int main()
//{
 //   int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    printf("%d\n",&arr[9]-&arr[0]);//
//    return 0;
//}

 int main()
 {
     //strlen-求字符串长度
     //递归-模拟实现了strlen-计数器的方式1，递归的方式2
     char arr[]="bit";

    int len= my_strlen(arr);
    printf("%d\n",len);
    
 }