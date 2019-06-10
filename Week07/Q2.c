#include<stdio.h>
main(int argc, char const *argv[])
{
    int num[10];
    int s,i,g=0;
    float a=0;
    for (i=0; i<=10; i++)
    {
        scanf("%d",&num[i]);
        if(num[i]<0){
            s = i;
            break;
        }
        a=a+num[i];
    }
    printf("AVG = (");
    for( g=0;g<i;g++)
    {
        printf("%d",num[g]);
        if(g != s-1)
            printf("+");
    }
    printf(")/%d = %.1f",g,a/g);
    return 0;
}
