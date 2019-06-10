#include<stdio.h>
//Monster Hunter//
int boneHP = 50;
int snotHP = 100;
int plagueHP = 70;
int *current_monsterHP;

int main(int argc, char const *argv[])
{
    
    while(1)
    {

    int ATK;
    int remain;
    char name;
    printf("Enter 1st character of Monster's name :");
    scanf(" %c",&name);
    printf("Enter the attack power from 1 to 100 :");
    scanf("%d",&ATK);
    switch(name)
    {
        case 'b':
        current_monsterHP = &boneHP;
        break;

        case 's':
        current_monsterHP = &snotHP;
        break;

        case 'p':
        current_monsterHP = &plagueHP;
    }


    printf("Current HP : %d\n",*current_monsterHP);
    printf("Attack power : %d\n",ATK);
    if(*current_monsterHP-ATK < 0)
    {
        printf("Remaining HP : 0\n");
    }
    else
    {
        printf("Remaining HP : %d\n",*current_monsterHP-ATK);
    }
    if(name == 'b')
    {
        boneHP = *current_monsterHP-ATK;
        if(boneHP < 0)
        {
            boneHP = 0;
        }
    }
    else if(name == 's')
    {
        snotHP = *current_monsterHP-ATK;
        if(snotHP < 0)
        {
            snotHP = 0;
        }
    }
    else if(name == 'p')
    {
        plagueHP = *current_monsterHP-ATK;
        if(plagueHP < 0)
        {
            plagueHP = 0;
        }
    }
    else
    {
        return 0;
    }
    
    }
    return 0;
}
