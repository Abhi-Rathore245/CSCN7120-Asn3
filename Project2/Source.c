#include <stdio.h>

 char Rock = 'r';
 char Scissors = 's';
 char Paper = 'p';

char get_input(int PLAYER_NUMB)
{
    while (1)
    {
        printf("Player %d, enter Rock ('r' for rock) Paper ('p' for paper) or Scissors ('s' for scissors):\n", PLAYER_NUMB);
        char decision = getchar();
        getchar(); 
        if ((decision == Rock) || (decision == Scissors) || (decision == Paper))
            return decision;
    }
}

int winNUM(char player1_decision, char player2_decision)
{
    if ((player1_decision == Rock && player2_decision == Scissors) || (player1_decision == Scissors && player2_decision == Paper) || (player1_decision == Paper && player2_decision == Rock))
    {
        return 1;
    }
  
    else if ((player1_decision == Rock && player2_decision == Paper) || (player1_decision == Paper && player2_decision == Scissors) || (player1_decision == Scissors && player2_decision == Rock))
    {
        return 2;
    }
    return 0;
}



int main()
{
    char ANSWER;
    
    {
        char player1_decision = get_input(1);
        char player2_decision = get_input(2);
        int winner =winNUM(player1_decision, player2_decision);
        if (winner == 0)
            printf("Draw\n");
        else
            printf("player %d\n", winner);

        printf("do you wish to continue(y/n)?\n");
        ANSWER = getchar();
        getchar(); 
    } while (ANSWER == 'y');
    return 0;
}