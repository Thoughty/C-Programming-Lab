#include<stdio.h>
main(int argc, char const *argv[])
{
    int x,y,z,w=1,k=0;
    printf("Input N : ");
    scanf("%d",&x);
    if(x<=0){
            printf("Error! Positive Number is required!!!");
            return 0;
        }
    if(x %2 ==0)
    {
        printf("Error!! Enter Odd number");
        return 0;
    }
        z=x; x/=2;
        while(w <= z)
        {   for(int k=0;k<x;k++)
            {
                printf(" ");
            }
            for(int i=1;i<=w;i++)
            {
                printf("*");
            }
            printf("\n");
            w=w+2;
            x--;
            

        }
    x=z;
    w=1;
    x=x-2;
    k=1;
       while(x >= w)
        {   
            for(int y=0;y<k;y++)
            {
                printf(" ");
                
            }
            for(int i=1;i<=x;i++)
            {
                printf("*");
            }
            printf("\n");
            x=x-2;
            k++;
        }
        
    return 0;
}
