#include <stdio.h>
int redrawboard(char grid_actual[3][3]) //this function draws the board
{
    printf("\e[1;1H\e[2J"); //ansi escape sequence to clear board
    printf("\tTic Tac Toe \nPlayer one(X) - PLayer two(O)");
    int i;
    printf("\n _________\n|");
    for (i=0;i<3;i++)
        {printf("%c ",grid_actual[0][i]);
         printf("|");}

    
    printf("\n|__|__|__|\n|");
    
    for (i=0;i<3;i++)
        {printf("%c ",grid_actual[1][i]);
         printf("|");}
   
    printf("\n|__|__|__|\n|");

    for (i=0;i<3;i++)
        {printf("%c ",grid_actual[2][i]);
         printf("|");}
    
    printf("\n|__|__|__|\n");

    return 0;
}
int markboard(void)
{
    int p1input,p2input;
    printf("Enter a Choice , Player 1 goes first : ");
    scanf("%d",& p1input);
    return 0;
}

int main()
{
    char grid_display[3][3]={{'1','2','3'},                     
                             {'4','5','6'},
                             {'7','8','9'}};
    
    char grid_actual[3][3]={{'1','2','3'},                     
                            {'4','5','6'},
                            {'7','8','9'}};

    redrawboard(grid_actual);
    
    return 0;

}