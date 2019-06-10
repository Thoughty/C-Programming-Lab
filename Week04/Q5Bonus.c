#include<stdio.h>
main(int argc, char const *argv[])
{
    char x;
    float y,z;
    printf("Select an operator either(+,-,*,/) : ");
    scanf("%c",&x);
    printf("========================================\n");
    printf("Enter Two Number : ");
    scanf("%f %f",&y,&z);

    switch(x)
    {
        case '+':
        printf("%.1f %c %.1f = %.1f",y,x,z,y+z);
        break;

        case '-':
        printf("%.1f %c %.1f = %.1f",y,x,z,y-z);
        break;

        case '*':
        printf("%.1f %c %.1f = %.1f",y,x,z,y*z);
        break;

        case '/':
        if(z == 0)
        {
            printf("Error!");
            return 0;
        }
        printf("%.1f %c %.1f = %.1f",y,x,z,y/z);
        break;
    }
    return 0;
}
