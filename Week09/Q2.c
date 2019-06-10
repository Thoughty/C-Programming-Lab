#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    
    int num[3][4];
    int sumrow,sumcolumn;
    for(int row=0;row<3;row++)
    {
        for(int column=0;column<4;column++)
        {
            num[row][column] = rand() % 10;
            printf("%d ",num[row][column]);
        }
        printf("\n");
    }

    printf("Sum of row : ");
    for(int row=0;row<3;row++)
    {
        sumrow = 0;
        for(int column=0;column<4;column++)
        {
            sumrow = sumrow + num[row][column];
           
        }
         printf("%d ",sumrow);
         
    }
    printf("\n");
    printf("Sum of column : ");
    for(int column=0;column<4;column++)
    {
        sumcolumn=0;
        for(int row=0;row<3;row++)
        {
            sumcolumn = sumcolumn + num[row][column];
        }
        printf("%d ",sumcolumn);
    }

    return 0;
}
