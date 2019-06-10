#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void hilo(int num,int y)
{
        if(num == y )
        {
            printf("Hooray,you have won\n");
        }
        else
        {
            if(num > y)
            {
                printf("Wrong number :( your guess was too high\n");
            }
            else
            {
                printf("Wrong number :( your guess was too low\n");
            }
        }
}

int main(int argc, char const *argv[])
{
    int num;
    int y;
    srand(time(NULL));
    y = rand() %100;
    for(int i=6;i>=0;i--)
    {
        printf("Enter your guess :");
        scanf("%d",&num);
        hilo(num,y);
        if(num == y)
        {
            break;
        }
        else if(i > 0)
        {
            printf("You have %d guesses left Try agian \n\n",i);
        }
        else
        {
            printf("Sorry,you lose");
            printf("The number is %d",y);
        }
    }
    return 0;
}
