#include<stdio.h>
main(int argc, char const *argv[])
{
    int x[5];
    int temp,temp1;
    for(int i=0; i<=4;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]<0)
        {
            printf("Error!");
            return 0;
        }
    }
    temp=x[0];// 
    x[0]=x[4];// Swap position 1 and 5
    x[4]=temp;//

    temp1=x[1];//
    x[1]=x[2];//Swapp position 2 and 3
    x[2]=temp1;//

    for(int i=0; i<=4;i++)
    {
        printf("%d ",x[i]);
    }

    return 0;
}
