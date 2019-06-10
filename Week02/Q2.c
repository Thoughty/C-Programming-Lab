#include<stdio.h>
main(int argc, char const *argv[])
{
    float me=59.5;
    float you=65.5;
    printf("My weight is %.1f\n",me);
    printf("You weight are %.1f\n",you);
    printf("\t We are around %.2f",(me+you)/2);
    return 0;
}
