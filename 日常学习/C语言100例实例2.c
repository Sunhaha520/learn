#include<stdio.h>
int main()
{
    float i;
    float b1,b2,b3,b4,b5,b6,b;
    printf("请输入你的净利润（单位：万元）\n");
    scanf("%f",&i);
    b1=10*0.1;
    b2=b1+10*0.075;
    b3=b2+20*0.05;
    b4=b3+20*0.03;
    b5=b4+40*0.015;
    if(i<=10){
        b=i*0.1;
    }else if(i<=20){
        b=b1+(i-10)*0.075;
    }else if(i<=40){
        b=b2+(i-20)*0.05;
    }else if(i<=60){
        b=b3+(i-40)*0.03;
    }else if(i<=100){
        b=b4+(i-60)*0.015;
    }else if(i>100){
        b=b5+(i-100)*0.01;
    }
    printf("你获得的奖金为(单位：万元）：%f",b);
}