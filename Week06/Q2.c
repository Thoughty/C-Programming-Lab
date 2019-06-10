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
        
        if(x %2 !=0)
        {
            z=x; x/=2;
            while(w <= z)
        {   for(k=0;k<x;k++)
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
        }
        
        if(x%2==0){
            printf("Error! Enter odd number");
            return 0;
            }
        

    return 0;
}
