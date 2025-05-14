#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int guess;
    printf("Head = 1\n");
    printf("tails = 2\n");
    printf("Do you thing it will be head or tails? ");
    scanf("%d", &guess);

    int flip = (rand() % 2) + 1;

    if (flip == 1){
        printf("it's head\n");
    } else if (flip == 2){
        printf("it's tails\n");
    }

    if (flip == guess){
        printf("YOU GUESSED IT, YAY\n");
    } else if (flip != guess){
        printf("Better luck next time :)\n");
    }

    return 0;
}