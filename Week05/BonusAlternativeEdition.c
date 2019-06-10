#include<stdio.h>
main(int argc, char const *argv[])
{
    int x,y=0,z=0,w=0,j=0,c=0;
    int l[500];
    
    printf("Enter the number : ");  
        while(scanf("%d",&x) !=EOF)
    {
        if(x>=1 && x<=30){
                z++;
                l[j] = x;
                j++;
        }
        else
            {
                printf("Number Range Should Be Between 1-30\n");
                
            }
    }
    for(y=1;y<=z;y++)
    {
        printf("%-4d |",l[c]);
        for(w=1;w<=l[c];w++)
        {
            printf("*");   
        }
        c++;
        printf("\n");
        
    }
    return 0;
    }

