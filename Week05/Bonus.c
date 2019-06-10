#include<stdio.h>
main(int argc, char const *argv[])
{
    int x,y;
    printf("Enter Number : ");
    while(scanf("%d",&x) != EOF)
        {
            if(x>=0 && x<=30){
            printf("%-4d |",x);
            for(y=1;y<=x;y++)
            {
                printf("*");
            }
            printf("\n");
            }
            else
                printf("Number range should be between 1-30\n");
        }
    return 0;
}
