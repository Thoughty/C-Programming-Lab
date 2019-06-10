#include<stdio.h>
#include<stdlib.h>
int num[5];
int min=99999999;
int max=-99999999;
int range;
float findrange(int *a)
{
    int max;
    max = *a;
    for(int i=0;i<5;i++)
    {
        if(max < *(a+i))
        {
            max = *(a+i);
        }
    }
    range = max - min;
    return range;
}
float findmean(int *a)
{
    
    int mean;
    mean = *a;
    for(int i=0;i<5;i++)
    {
        mean=mean+*(a+i);
    }
    mean= mean/5;

    return mean;
}
float findmin (int *a)
{
    int point;
    point = *a;
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
    printf(" and Min : %d",min);
    findrange(num);
    printf(" and Range between Max and Min : %d",range);
    return 0;
}

