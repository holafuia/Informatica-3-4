#include <stdio.h>

int main () {
    int width = 5;
    int length = 9;

    int X = width*length;
    int Y = width+width+length+length;

    printf("1. \n");
    printf("Area = %d \n", X);
    printf("Perimeter = %d \n", Y);

    int F = 95;
    int C = (F-32)/1.8;

    printf("2. \n");
    printf("%d°F = %d°C\n", F, C);

    int min = 349;
    int hours = min/60;
    int minutes = 60*5;
    int result = min-minutes;

    printf("3. \n");
    printf("%d minutes is equal to %d hours and %d minutes \n", min, hours, result);
}