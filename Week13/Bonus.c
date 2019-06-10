#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Welcome to Monster hunter Beta 2.0//
int PlayerHP = 100;
struct monster     
{   
    char name[80];         
    int attack;         
    int hp;    
}; 
struct monster monsters[3]={
                {"bone",20,50},
                {"snot",30,100},
                {"plague",50,70}
                };
int main(int argc, char const *argv[])
{
    
    
    struct monster *currentmonster;
    char monstername[10];
    int ATK;
    int remain;
    while(PlayerHP != 0 )
    {
        Monster:{
        printf("Enter the monster's name : ");
        scanf(" %s",monstername);
            if(strcmp(monsters[0].name,monstername) == 0)
            {
                currentmonster = &monsters[0];
            }
            else if(strcmp(monsters[1].name,monstername) == 0)
            {
                currentmonster = &monsters[1];
            }
            else if(strcmp(monsters[2].name,monstername) == 0)
            {
                currentmonster = &monsters[2];
            }
            else
            {
                printf("Invalid Monster Name!\n");
                goto Monster;
            }
        }
        printf("Enter attack power from 1 to 100 : ");
        scanf(" %d",&ATK);
        printf("Monster : %s \n",currentmonster->name);
        remain = currentmonster->hp -ATK;
        if(remain < 0)
        {
            printf("HP : 0\n");
        }
        else
        {
            
            printf("HP : %d\n",remain);
        }
        if(currentmonster->hp < ATK || currentmonster->hp == ATK )
        {
            printf("Your HP : %d \n",PlayerHP);
        }
        else
        {
            PlayerHP = PlayerHP -currentmonster->attack;
            printf("Your HP : %d \n",PlayerHP);
        }
        
        if(currentmonster->hp < 0)
        {
            currentmonster->hp = 0;
        }
        else
        {
            currentmonster->hp = remain;
        }
        
        //Check 3 Monster are defeated//
        if(monsters[0].hp == 0 && monsters[1].hp == 0 && monsters[2].hp == 0 )
        {
            printf("You Won!");
            break;
        }
        else if(PlayerHP == 0)
        {
            printf("You lose");
            break;
        }
        
    }

    return 0;
}
