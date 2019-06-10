#include<stdio.h>
#include<stdlib.h>
float find_abs(float num)
{
    float x;
    x = abs(num);
    return x;
}
int main(int argc, char const *argv[])
{
    float y;
    printf("Enter a number :");
    scanf("%f",&y);
    printf("The absolute value of %.0f is %.0f",y,find_abs(y));
    return 0;
}
