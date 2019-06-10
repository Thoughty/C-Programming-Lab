#include<stdio.h>
main(int argc, char const *argv[])
{
    int x,y;
    printf("Please select your Drinks");
    printf("\n===========================");
    printf("\n 1 : Coke");
    printf("\n 2 : Est COla");
    printf("\n 3 : Oishi green tea");
    printf("\n 4 : Sprite");
    printf("\n===========================");
    printf("\nEnter your Order No. here : ");
    scanf("%d",&x);
    

    printf("You have ordered : %s",(x==1)?"Coke":(x==2)?"Est Cola":(x==3)?"Oishi green tea":(x==4)?"Sprite":"Invalid Dirnks Number!");
    return 0;
}
