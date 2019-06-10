#include<stdio.h>
main(int argc, char const *argv[])
{
    int max,x,y,z;
    printf("Enter 3 number : ");  
    scanf("%d %d %d",&x,&y,&z);   
    if(x>y && x>z)
        max = 1;
    if(y>x && y>z)
        max = 2;
    if(z>y && z>x)
        max = 3;
printf("\n=======================");
    switch(max)
    {
        case 1:
        printf("\nMax number is %d ",x);
        break;

        case 2:
        printf("\nMax number is %d ",y);
        break;

        case 3:
        printf("\nMax number is %d ",z);
        break;

    }
    printf("\n=======================");
    return 0;
}
