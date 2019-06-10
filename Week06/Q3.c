#include<stdio.h>
main(int argc, char const *argv[])
{
    int x,y,z,w=1,k=0,l;
    printf("Input N : ");
    scanf("%d",&x);
    if(x<=0){
        printf("Error! Positive Number is required!!!");
        return 0;
    }
    if(x%2==0){
            printf("Error! Enter odd number");
            return 0;
            }
    else
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
