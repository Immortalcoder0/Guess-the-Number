#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main()
{
    int random_number;
    int no_of_guess=0,guessed;
    srand(time(0));
    random_number=(rand()%100)+1;

    do{
        printf("Guess the Number\n\t");
        scanf("%d", &guessed);    
        if(guessed>random_number)
        {
            printf("Lower number please!\n");
        }
        else if(guessed<random_number)
        {
            printf("Higher number please!\n");
        }
        else 
        {
            printf("**Congrats!!**\n");
        }
        no_of_guess++;

    }while (guessed!=random_number);

    printf("You guesssed the number right in %d guesses", no_of_guess);
    
    char a;
    a=getch();
    return 0;
    getch();

}
