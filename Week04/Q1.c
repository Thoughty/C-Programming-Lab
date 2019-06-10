#include<stdio.h>
main()
{
    int drinks,x,y;
    printf("Please select your Drinks");
    
    printf("\n===========================");
    printf("\n 1 : Coke");
    printf("\n 2 : Est Cola");
    printf("\n 3 : Oishi green tea");
    printf("\n 4 : Sprite");
    printf("\n===========================");
    printf("\nEnter your Order No. here : ");
    scanf("%d",&drinks);
    if(drinks<1 || drinks>4){
        printf("Invalid Drink Number!");
    }
    else{
        switch (drinks)
        {
            case 1:
            printf("You have ordered : Coke");
            break;

            case 2:
            printf("You have ordered : Est cola");
            break;

            case 3:
            printf("You have ordered : Oishi green tea");
            break;

            case 4:
            printf("You have ordered : Sprite");
            break;
            
        
        }
    }
    
    
    
    
    return 0;
}
