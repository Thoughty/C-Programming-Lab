#include<stdio.h> 
float US = 32.86;
float JP = 0.29;
float ThaiToUS(float money)
{
    float us;
    us = money/US;
    return us;
}
float ThaiToJp(float money)
{
    float jp;
    jp = money/JP;
    return jp;
}
int main(int argc, char const *argv[])
{
    float money;
    int choice;
    printf("Enter amount of money do you want to convert : ");
    scanf("%f",&money);
    printf("Convert to?\n");
    printf("=============================\n");
    printf("1.Japanese Yen (JPY)\n");
    printf("2.Dollars (USD)\n");
    printf("=============================\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Your %.0f THB = %.0f JPY ",money,ThaiToJp(money));
        break;

        case 2:
        printf("Your %.0f THB = %.0f USD ",money,ThaiToUS(money));
        break;

        default:
        printf("Invalid Choice");
        break;
    }
    return 0;
}

