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
    strcpy(name, nameFromInput);
    return;
}

int generateRandomNumber()
{
    int random = rand()%100;
    return random;
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
        scanf("%d", &guess);
        isNumberGuessed(&randomNumber, &guess, &isGuessed);
        if(!isGuessed)
        {
            printf("Not yet. Try again \n");
        }
    }

    if(isGuessed)
        printf("%s guessed the number\nNumber: %d", name, randomNumber);

    return 0;
}