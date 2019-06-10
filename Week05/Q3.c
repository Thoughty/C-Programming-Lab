#include<stdio.h>
main(int argc, char const *argv[])
{
    float v=60,i=4.0,s;
    for(float t=0.0;t<=i;t=t+0.5)
    {
        s=v*t;
        printf("Distance for %.2f hours is %.2f\n",t,s);

    }
    return 0;
}
