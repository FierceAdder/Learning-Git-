#include <stdio.h>
#include <stdbool.h>

int drawboard(char grid[9],char actgrid[9]) //this function draws the board
{
    int i;
    printf("\e[1;1H\e[2J"); //ansi escape sequence to clear board
    printf("\tTic Tac Toe \nPlayer one(X) - PLayer two(o)\n\t  ");
    for (i=0;i<=8;i++)
    {
        if (grid[i]=='3' || grid[i]=='6')
        {
            printf("%c \n",actgrid[i]);
            printf("\t  __|__|__\n\t  ");
        }
        else if(grid[i]=='9')
        {
            printf("%c \n",actgrid[i]);
        }
        else 
            printf("%c |",actgrid[i]);
        
    }
    return 0;

}

int checkforwin(char g[9]) //checks for win and returns bool
{
    
    int win=2;
    if (g[0]==g[1] && g[1]==g[2])
    {
        if (g[0]=='X')
            printf("Player 1 Won The Game Congrats");
        else
            printf("Player 2 Won The Game Congrats");
        win=3;
    }
    
    else if(g[3]==g[4] && g[4]==g[5])
    {
       if (g[3]=='X')
            printf("Player 1 Won The Game Congrats");
        else
            printf("Player 2 Won The Game Congrats");
        win=3;
    }
    
    else if(g[6]==g[7] && g[7]==g[8])
    {
        if (g[6]=='X')
            printf("Player 1 Won The Game Congrats");
        else
            printf("Player 2 Won The Game Congrats");
        win=3;
    }
    else if(g[0]==g[3] && g[3]==g[6])
    {
        if (g[0]=='X')
            printf("Player 1 Won The Game Congrats");
        else
            printf("Player 2 Won The Game Congrats");
        win=3;
    }
    else if(g[1]==g[4] && g[4]==g[7])
    {
        if (g[1]=='X')
            printf("Player 1 Won The Game Congrats");
        else
            printf("Player 2 Won The Game Congrats");
        win=3;
    }
    else if(g[2]==g[5] && g[5]==g[8])
    {
        if (g[2]=='X')
            printf("Player 1 Won The Game Congrats");
        else
            printf("Player 2 Won The Game Congrats");
        win=3;
    }
    else if(g[6]==g[7] && g[7]==g[8])
    {
        if (g[6]=='X')
            printf("Player 1 Won The Game Congrats");
        else
            printf("Player 2 Won The Game Congrats");
        win=3;
    }
    else if(g[0]==g[4] && g[4]==g[8])
    {
        if (g[0]=='X')
            printf("Player 1 Won The Game Congrats");
        else
            printf("Player 2 Won The Game Congrats");
        win=3;
    }
    else if(g[2]==g[4] && g[4]==g[6])
    {
        if (g[6]=='X')
            printf("Player 1 Won The Game Congrats");
        else
            printf("Player 2 Won The Game Congrats");
        win=3;
    }
    else
        win=2;
    return win;
}

int markboard(char g[9],char g1[9],int no_of_turns)
{
    int p1,p2;

    if (no_of_turns%2==0)
    {
        printf("\nPlayer 2 : ");
        scanf("%d", &  p2);
        g[(p2-1)]='o';
        drawboard(g,g1);
    }
    else
    {
        printf("\nPlayer 1 : ");
        scanf("%d", &  p1);
        g[(p1-1)]='X';
        drawboard(g,g1);
    }   
    return 0;
}

int main()
{
    int result=2,no_of_turns=1;
    char original_grid[9]={'1','2','3','4','5','6','7','8','9'};
    char fake_grid[9]={'1','2','3','4','5','6','7','8','9'};
    
    drawboard(fake_grid,original_grid);
    do 
    {       
            markboard(original_grid,fake_grid,no_of_turns);
            drawboard(fake_grid,original_grid);
            result=checkforwin(original_grid);
            no_of_turns++; 
    } while (no_of_turns<=9 && result!=3);
       
    if (no_of_turns==10 && result!=3 )
        printf("\nThe Game is a DRAW");

    return 0;
}
