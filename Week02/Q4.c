#include<stdio.h>
int main(int argc, char const *argv[])
{
    char w;
    int i=1;
    printf("The first letter of the alphabet is %c",'a');
    printf("\nThe decimal code for this letter is %d",'a');
    printf("\nThe code  for an uppercase %c is %d \n",'A','A');

    while(i <= 3){
        printf("Enter 1 letter from your fisrt name : ");
        scanf(" %c",&w);
        printf("My letter #%d is %c\n",i,w);
        printf("The decimal code for this letter is %d\n",w);
        printf("The code for an uppercase is %d\n",w-32); 
        i++;
    }
    return 0;
}
