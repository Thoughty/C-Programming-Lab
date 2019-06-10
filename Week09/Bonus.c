#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row,column,cRow,cColumn,sym=0;
    matrix:{
    printf("Enter the number of rows and column : ");
    scanf("%d %d",&row,&column);
    if(row>5 ||row<=-1 || column>5 || column<=-1)
    {
        printf("No negative number or Maximum number is 5");
        return 0;
    }
    if(row != column)
    {
        printf("The matrix must be square matrix");
        goto matrix;
    }
    int num[row][column];
    int trans[row][column];
    for(int i=0;i<row;i++)
    {
        for(int n=0;n<column;n++)
        {
            printf("Enter element [%d][%d] : ",i,n);
            scanf("%d",&num[i][n]);
            
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int n=0;n<column;n++)
        {
            trans[i][n] = num[i][n];
        }
    }
    for(cRow=0;cRow<row;cRow++)
    {
        for(cColumn=0;cColumn<column;cColumn++)
        {
            if(num[cRow][cColumn] != trans[cColumn][cRow])
            {
                sym++;
            }
        }
    }
    if(sym>0)
    {
        printf("The matrix is not symmetric");
    }
    else
    {
        printf("The matrix is symmetric");
    }
    }
    return 0;
}
