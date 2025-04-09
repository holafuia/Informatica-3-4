#include <stdio.h>

int main () {
    //rectangle
    int width;
    int length;

    printf("enter rectangle width: ");
    scanf("%d", &width);
    printf("enter rectangle lengh: ");
    scanf("%d", &length);

    int X = width*length;
    int Y = width+width+length+length;

    printf("Area: %d\n", X);
    printf("Perimeter : %d\n", Y);

    //temperature
    int Fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &Fahrenheit);

    int C= (Fahrenheit-32)/1.8;

    printf("%d°F = ", Fahrenheit);
    printf("%d°C\n", C);

    //minutes and hours
    int min = 349;
    int hours = min/60;
    int minutes = 60*5;
    int result = min-minutes;

    printf("3. \n");
    printf("%d minutes is equal to %d hours and %d minutes \n", min, hours, result);
}