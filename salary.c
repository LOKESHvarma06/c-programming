
#include <stdio.h>

int main()
{
    float basicpay;
    printf("-----enter your basic salary-----\n");
    scanf("%f",&basicpay);
    float bonus,travelallowance,netsalary;
    bonus=basicpay*0.1;
    travelallowance=basicpay*7.5/100;
    netsalary=basicpay+bonus+travelallowance;
    
    printf("bonus=%f\n",bonus);
    printf("travelallowance=%f\n",travelallowance);
    printf("netsalary=%f",netsalary);

    return 0;
}
