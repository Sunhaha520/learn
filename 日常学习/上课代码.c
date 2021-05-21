#include<stdio.h>
//int main()
//{
//    short s=0;
//   int a=10;
//    printf("%d\n",sizeof(s=a+5));//类型由s决定
//    printf("%d\n",s); //结果为0和2，sizeof里面不运算，所以为0
 //   return 0;
//}

//int main()
//{
 //   int a=0;
 //   printf("%d\n",~a);//～按位取反，输出为-1，如0000，输出为1111
 //   return 0;
//}
//int main()
//{
//    int a=11;
    //00000000000000000000000000001011
    //00000000000000000000000000000100
    //00000000000000000000000000001111
 //   a=a | (1<<2);
 //   printf("%d\n",a);
 //   return 0;
//}

//void test1(int arr[])
//{
//    printf("%d\n",sizeof(arr));
//}
//void test2(char ch[])
//{
//    printf("%d\n",sizeof(ch));
//}
//int main()
//{
//    int arr[10]={0};
//    char ch[10]={0};
//    printf("%d\n",sizeof(arr));
//    printf("%d\n",sizeof(ch));//结果40，10，8，8
//    test1(arr);
//    test2(ch);
 //   return 0;
//}

//int main()
//{
//    int a=3;
//    int b=5;
//    int c=a && b;
//    printf("%d\n",c);//或，两个同时为假才是假，一个为真就是真
//    return 0;
//}

//int main()
//{
 //   int i=0,a=0,b=2,c=3,d=4;
//    i=a++ && ++b && d++;
 //   printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);//输出a=1,b=2,c=3,d=4,a=0都为0假，不算了，但是1自加
//    return 0;//如果i=1，2234
//}

//int main()
//{
 //   int a=0;
 //   int b=0;
 //   if(a>5)
 //   b=3;
 //   elseb=-3;
 //   b=(a>5?3:-3);
//}

//int main()
//{
//    int a[10]={0};
//    a[4]=10;
//    1+2;
//    return 0;
//}

//int get_max(int x,int y)
//{
 //   return x>y? x:y;
//}
//int main()
//{
//    int a=10;
//    int b=20;
//    int max=get_max(a,b);
//    printf("max=%d\n",max);
//    return 0;
//}

//学生
//int float
//创建一个结构体类型-struct Stu
//struct Stu
//{
//    char name[20];
 //   int age;
//    char id[20];
//};
//int main()
//{
//    int a=10;
 //   //使用struct Stu这个类型创建了一个学生对象是s1并初始化
//    struct Stu s1={"张三",20,"20190104"};
 //   printf("%s\n",s1.name);
 //   printf("%d\n",s1.age);
 //   printf("%s\n",s1.id);
 //   return 0;
//}

//struct Stu
//{
//    char name[20];
//    int age;
 //   char id[20];
//};
//int main()
//{
 //   int a=10;
    //使用struct Stu这个类型创建了一个学生对象是s1并初始化
 //   struct Stu s1={"张三",20,"20190104"};
 //   struct Stu* ps=&s1;
 //   printf("%s\n",(*ps).name);//精简可以是ps->name
 //   printf("%d\n",(*ps).age);
 //   printf("%s\n",(*ps).id);
 //   return 0;
//}

//int main()
//{
 //   char a=3;
 //   char b=127;
 //   char c=a+b;
 //   printf("%d\n",c);
 //   return 0;
//}

