#include<stdio.h>
void check(int num,float num1,double num2)
{
    printf("The inteager is %d\n",num);
    printf("The floating-point number is : %f\n",num1);
    printf("The double precision is : %lf",num2);
}
int main(int argc, char const *argv[])
{
    int x;
    float y;
    double z;
    printf("Enter an inteager :");
    scanf("%d",&x);
    printf("Enter a floating-point number :");
    scanf("%f",&y);
    printf("Enter a double precision :");
    scanf("%lf",&z);
    printf("\n\n");

    check(x,y,z);
    return 0;
}