#include<stdio.h>
main(int argc, char const *argv[])
{
    int x,y=0,z,a=0;
    printf("Enter a number of row : ");
    scanf("%d",&x);
    if(x<=0)
        printf("Error! Positive Number is required!!!");
    else
    for(int i=x;i>=1;i--)
    {
        for(int i=x;i>0;i--)
        {
            printf("%d",i);
        }
        printf("\n");
        x--;
    }
   
    return 0;
}