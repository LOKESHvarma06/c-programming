#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter five number");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float total;
    total=a+b+c+d+e;
    printf("total=%f",total);
    float average;
    average=a+b+c+d+e/5;
    printf("average=%f",average);
     return 0;
}
