#include<stdio.h>
#include<math.h>
main(int argc, char const *argv[])
{
    float x,y,z;
    int u;
    char name[100];
    printf("Input Customer ID : ");
    scanf(" %d",&u);
    printf("Input the name of the customer : ");
    scanf(" %s",&name);
    printf("Input the unit(mins) consumed by the customer : ");
    scanf(" %f",&x);
    printf("\n\nTelephone Bill\n");
    printf("Customer ID NO\t\t: %d\n",u);
    printf("Customer Name\t\t: %s\n",name);
    printf("Unit Consumed (Mins)\t: %.0f\n",x);
    if(x<=100)
        y = x*1;
    if(x >=100 && x<300)
        y = (100*1)+((x-100)*0.75);
    if(x >= 300 && x < 600)
        y = (100*1)+(200*0.75)+((x-300)*0.5);
    if(x >= 600)
        y = (100*1)+(200*0.75)+(300*0.5)+((x-600)*0.25);
    
    
    if(y > 300){
        z=y+((y*15)/100);
        printf("Surchage Amount\t\t: %.2f\n",(y*15)/100);
        printf("Net Amount Paid\t\t: %.2f\n",z);
    }
    else{
        printf("Surchage Amount\t\t: 0.00\n");
        printf("Net Amount Paid\t\t: %.2f\n",y);
    }
        
    return 0;
}
