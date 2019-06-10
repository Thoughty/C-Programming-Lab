#include<stdio.h>
#include<math.h>
main(int argc, char const *argv[])
{
    float l;
    char c;
    printf("Enter How long do you want to convert : ");
    scanf(" %f",&l);
    printf("Convert to ? (c/i) : ");
    scanf(" %c",&c);
    if(c == 'c')
        printf("%.2f cm = %.2f inch",l,l/2.54);
    if(c == 'i')
        printf("%.2f inch = %.2f cm",l,l*2.54);
    else
        return 0;


    return 0;
}
