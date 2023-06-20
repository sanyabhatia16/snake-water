#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int snakewatergun(char you, char comp);

int main()

{
    int number;
    char comp,you;
    srand(time(0));
    number=rand()%100+1;
    if(number<33){
        comp='s';
    }
    else if (number>33  && number<66)
    {
        comp='w';
    }
    else{
        comp='g';
    }
    
    printf("enter S for snake  W for water G for gun\n");
    scanf("%c",&you);
    int result = snakewatergun(you,comp);
    printf("You choose %c AND Comp %c \n",you,comp);
    if (result ==0){
        printf("Game Drawn\n");
    }
    else if (result ==1)
    {
        printf("Game Won by you!\n");
    }
    else{
        printf("You Lose!\n");
    }
        return 0;
}
int snakewatergun(char you, char comp)
{
    if (you==comp)
    {
        return 0;
    }
    if (you=='s'  && comp=='w')
    {
        return 1;
    }
    else if(you=='w'&&comp=='s'){
        return -1;
    }
    if (you == 'w' &&comp =='g')
    {
        return 1;
    }
    else if(you=='g'&&comp=='w'){
        return -1;
    }
    if (you == 'g' &&comp == 's')
    {
        return 1;
    }
    else if(you=='s'&&comp=='g'){
    
        return -1;
    }
}