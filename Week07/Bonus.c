#include<stdio.h>
main(int argc, char const *argv[])
{
    int x=0;
    int A[5]={5,4,3,2,1};
    int B[5];
    
    for(int i=4;i>=0;i--)
    {
        B[x]=A[i];
        x++;
    }

    for(int i=0;i<=4;i++)
    {
        printf("%d ",B[i]);
    }
    return 0;
}
