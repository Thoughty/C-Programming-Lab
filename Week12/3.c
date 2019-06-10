#include<stdio.h>
int num[5];
int min=99999999;
int point;
float findmean(int *a)
{
  //  point = *a;
    float mean=0;
    for(int i=0;i<5;i++)
    {
        mean=mean+*(a+i);
    }
    mean= mean/5;

    return mean;
    
}
float findmin(int *a)
{
   // point = *a;
    for(int i=0;i<5;i++)
    {
        if(min > *(a+i))
        {
            min = *(a+i);
        }

    }
}

int main(int argc, char const *argv[])
{
    printf("Enter 5 integers : ");
    for(int i=0;i<5;i++)
    {
        scanf(" %d",&num[i]);
    }
    printf("Mean : %.3f",findmean(num));
    findmin(num);
    printf("and Min : %d",min);
    return 0;
}

