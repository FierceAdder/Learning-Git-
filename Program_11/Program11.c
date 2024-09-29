//Guess the no. game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int usernum,tries=5,win=0;
    
    time_t t;
    
    srand((unsigned) time(&t));
    
    int randomnum = rand()%21;
    
    printf("Welcome to the \"Guess The Number Game!!!\"\n");
    
    printf("The no. Has been chosen and is in between 1 & 20\n");
    
    printf("Guess the Number!,You only Have 5 Tries\n");
    
    while( (tries!=0) && (win==0))
        {
            scanf("%d",& usernum);
            if (usernum==randomnum)
                {
                    printf("Congrats you guessed it right\n");
                    win=1;
                }

            else if (usernum>20 || usernum<1)
                printf("The No. entered is not between 1 & 20\n");

            else if (usernum>randomnum)
                {
                    printf("Your guess is too high\n");
                    --tries;
                    if (tries>1)
                        printf("You have %d tries left\n",tries);
                    else 
                        printf("YOu have 1 try left");
                    if (tries!=0)
                        printf("Guess Again!!!\n");
                }
            
            else
                {
                    printf("Your guess is too low\n");
                    --tries;
                    if (tries>1)
                        printf("You have %d tries left\n",tries);
                    else 
                        printf("YOu have 1 try left");
                    if (tries!=0)
                        printf("Guess Agin!!!\n");
                    
                }

        }
    if (tries==0)
        printf("Sorry You failed to Guess the Number");

    return 0;
}