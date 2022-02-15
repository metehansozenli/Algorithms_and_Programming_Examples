#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<ctype.h>

int random_numbers()
{
    srand(time(NULL));
    int x=1+rand()%3;
    return x;
}

void rockscissorspaper()
{
int player_score=0,pc_score=0,pc_choice,round_counter=0;
char choice, arr[round_counter+1],pc_arr[round_counter+1];

    for(round_counter=0;(player_score<5)&&(pc_score<5);round_counter ++)
    {
        printf("\nPress -R to select rock, -P to select paper, S to select scissors.\n");
        pc_choice=random_numbers();
            if (pc_choice==1)
                pc_choice=82;
            else if (pc_choice==2)
                pc_choice=80;
            else
                pc_choice=83;
        scanf(" %c",&choice);
            while(1)
            {
                if((choice=='r')||(choice=='R')||(choice=='p')||(choice=='P')||(choice=='s')||(choice=='S'))
                    break;
                else
                    printf("Choose the letters R,S or P.\n");
                    scanf(" %c",&choice);
            }
        printf("Player's choice-------->%c \nComputer's choice---->%c\n",toupper(choice),pc_choice);

        if (((choice=='R')||(choice=='r')) && pc_choice=='P')
            pc_score+=1;
        else if (((choice=='R')||(choice=='r')) && pc_choice=='S')
            player_score+=1;
        else if (((choice=='S')||(choice=='s')) && pc_choice=='R')
            pc_score+=1;
        else if (((choice=='S')||(choice=='s')) && pc_choice=='P')
            player_score+=1;
        else if (((choice=='P')||(choice=='p')) && pc_choice=='R')
            player_score+=1;
        else if (((choice=='P')||(choice=='p')) && pc_choice=='S')
            pc_score+=1;

        printf("Player:%d Computer:%d\n",player_score, pc_score);
        arr[round_counter]=choice;
        pc_arr[round_counter]=pc_choice;
    }

    if (player_score > pc_score)
        printf("\nPlayer Won!!\nScore: Player= %d, Computer= %d\n",player_score,pc_score);
    else
        printf("\nComputer Won!!\nScore: Player= %d, Computer= %d\n",player_score,pc_score);

    printf("Players's choices : ");
    for(int i=0; i<round_counter; i++)
        printf("%c ",toupper(arr[i]));

    printf("\nComputer's choices: ");
    for(int i=0; i<round_counter; i++)
        printf("%c ",pc_arr[i]);
}

int main()
{
printf("\n    Rock Scissors Paper Game\n**************RULES*************\nRock beats scissors\nPaper beats rock\nScissors beats paper\nWhoever gets 5 points wins!\n********************************\n");
rockscissorspaper();
return 0;
}
