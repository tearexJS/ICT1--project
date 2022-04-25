#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>


void isNumberGuessed(int* number, int* guess, bool* isGuessed)
{
    if(*number == *guess)
    {
        *isGuessed = true;
        return;
    }
    *isGuessed = false;
}

void getName(char* name)
{
    char nameFromInput[100];
    puts("Enter your name\n");
    gets(nameFromInput);
    return;
}

int generateRandomNumber()
{
    int random = rand()%100;
    return 5;
}

void intro() 
{
    printf("\033[1;31m");
    
    printf("     __             ___    __      __                ___  \n  ");
    printf("  /      |    |  |      /  \\    /  \\      |\\  /|  |     \n  ");
    printf(" |       |    |  |      \\__     \\__       | \\/ |  |     \n  ");
    printf(" |  __   |    |  |__       \\       \\      |    |  |__   \n  ");
    printf(" |    |  |    |  |     |    |  |    |     |    |  |     \n  ");
    printf("  \\__/    \\__/   |___   \\__/    \\__/      |    |  |___  \n\n  ");
    
    printf("\033[0m");
}

int main()
{
    
    intro();
    bool isGuessed = false;
    int randomNumber;
    int guess;
    char name[100];

    getName(name);

    srand(time(0));
    randomNumber = generateRandomNumber();
    printf("Enter your guess: ");
    while(!isGuessed)
    {
        if( scanf("%d", &guess) == 0)
            break;
        isNumberGuessed(&randomNumber, &guess, &isGuessed);
        if(!isGuessed)
        {
            printf("Not yet. Try again \n");
        }
    }
    
    if(isGuessed)
        system("echo \"U won\"");

    return 0;
}
