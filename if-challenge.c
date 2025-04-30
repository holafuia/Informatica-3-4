#include <stdio.h>

int main(){
    int year;

    printf("enter year here: ");
    scanf("%d", &year);

    int ifyear = year%4;
    int years = year%100;
    int anios = year%400;

    if (ifyear == 0){
        if (years == 0){
            if (anios == 0){
                printf("%d is a leap year\n", year);
            } else {
                printf("%d is not a leap year\n", year);
            }
        } else {
            printf("%d is a leap year\n", year);
        }
    } else {
        printf("%d is not a leap year\n", year);
    }
}