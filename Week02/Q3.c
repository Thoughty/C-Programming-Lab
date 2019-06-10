#include<stdio.h>
main(int argc, char const *argv[])
{
    int num1=5,num2=8;
    float avg,sum;
    printf("num1=%d , num2=%d\n",num1,num2);
    avg = (num1+num2)/2;
    sum = num1+num2;
    printf("AVG = %.4f\n",avg);
    printf("SUM = %.4f",sum);
    return 0;
}
