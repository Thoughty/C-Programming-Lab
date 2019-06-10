#include<stdio.h>
main(int argc, char const *argv[])
{
    int y;
    int x[4];
    printf("Enter Number : ");
    for(int i=0; i<=4;i++)
    {
        scanf("%d",&y);
        if(y<0){
            printf("Error!");
            return 0;
        }
        x[i]=y;
    }
printf("SUM = %d",x[0]+x[2]+x[4]);
    return 0;
}
