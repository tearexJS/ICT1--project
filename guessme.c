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
void guessTheNumber(int number, bool* isGuessed, char* name)
{
    int guess;
    char nameCopy[100];
    strcpy(nameCopy, name);
    while(!(*isGuessed))
    {
        scanf("%d", &guess);
        isNumberGuessed(&number, &guess, isGuessed);
        if(!*isGuessed)
        {
            printf("Not yet. Try again \n");
        }
    }

}

int generateRandomNumber()
{
    int random = rand()%100;
    return random;
}

int main(int argc, char **argv)
{
    bool isGuessed = false;
    int randomNumber;
    srand(time(0));
    randomNumber = generateRandomNumber();

    guessTheNumber(randomNumber, &isGuessed, argv[1]);

    if(isGuessed)
        printf("%s uhadol si cislo\nCislo bolo %d", argv[1], randomNumber);

    (void)argc;
    return 0;
}