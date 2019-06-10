#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int num[3][4];
    for(int row=0;row<3;row++)
    {
        for(int column=0;column<4;column++)
        {
            num[row][column] = rand() % 10;
            printf("%d ",num[row][column]);
        }
        printf("\n");
    }
    return 0;
}
