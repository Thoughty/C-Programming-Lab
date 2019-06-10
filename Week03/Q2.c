#include<stdio.h>
main(int argc, char const *argv[])
{
    int x,y,z;
    int final;
    printf("Enter Your Quizz score : ");
    scanf(" %d",&x);
    printf("Enter your midterm score : ");
    scanf(" %d",&y);
    printf("Enter Your final score : ");
    scanf(" %d",&z);
    if (x >= 0 && x <= 30 && y >=0 && y<=35 && z >= 0 && z <= 35 ){
        final= x+y+z;
            if(final >= 90)
                printf("You have got : A");
            if(final >= 80 && final < 90)
                printf("You have got : B");
            if(final >=70 && final < 80)
                printf("You have got : C");
            if(final >= 60 && final <70)
                printf("You have got : D");
            if(final <60)
                printf("You have got : F");
            
                
    }
    else
        printf("The score is invalid");


    return 0;
}
