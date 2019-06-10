#include<stdio.h>
#include<math.h>
float euc_dist(float x1,float y1,float x2,float y2)
{
    float distance;
    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return distance;
}
int main(int argc, char const *argv[])
{
    float x1,x2,y1,y2;
    printf("Please enter a value for x1 :");
    scanf("%f",&x1);
    printf("\n");
    printf("Please enter a value for y1 :");
    scanf("%f",&y1);
    printf("\n");
    printf("Please enter a value for x2 :");
    scanf("%f",&x2);
    printf("\n");
    printf("Please enter a value for y2 :");
    scanf("%f",&y2);
    printf("\n");
    printf("The distance between the points is : %f",euc_dist(x1,y1,x2,y2));


    
    return 0;
}
