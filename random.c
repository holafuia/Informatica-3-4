#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(NULL));

    int rolls;

    printf("enter the desired rolls: ");
    scanf("%d", &rolls);

    int num = 1;
    int xd = 1;

    while(rolls >= num){
        int diceroll = (rand() % 6) + 1;
        printf("roll %d: %d\n", xd, diceroll);
        ++num;
        ++xd;
    }
    return 0;
}