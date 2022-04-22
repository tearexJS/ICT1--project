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

int main()
{
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