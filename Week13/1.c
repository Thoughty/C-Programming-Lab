#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct person{
        char Name[80]; 
        char Phone[11];
};


int main(int argc, char const *argv[])
{   
    int compare;
    char name[80];
    char phone[11];
    char sort_option[10];
    struct person regis[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter name #%d : ",i+1);
        gets(name);
        printf("Enter phone #%d : ",i+1);
        gets(phone);
        strcpy(regis[i].Name,name);
        strcpy(regis[i].Phone,phone);
    
    }
    printf("sort by: ");
    scanf("%s",&sort_option);
    if(strstr(sort_option,"name"))
    {
        compare = strcmp(regis[0].Name,regis[1].Name);
        if(compare < 0)
        {
            printf("%s %s \n",regis[0].Name,regis[0].Phone);
            printf("%s %s \n",regis[1].Name,regis[1].Phone);
        }
        else
        {
            printf("%s %s \n",regis[1].Name,regis[1].Phone);
            printf("%s %s \n",regis[0].Name,regis[0].Phone);
        }
    }
    else if(strstr(sort_option,"phone"))
    {
        compare = strcmp(regis[0].Phone,regis[1].Phone);
        if(compare < 0)
        {
            printf("%s %s \n",regis[0].Name,regis[0].Phone);
            printf("%s %s \n",regis[1].Name,regis[1].Phone);
        }
        else
        {
            printf("%s %s \n",regis[1].Name,regis[1].Phone);
            printf("%s %s \n",regis[0].Name,regis[0].Phone);
        }
    }
    
    
    return 0;
}
