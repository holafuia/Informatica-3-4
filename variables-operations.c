#include <stdio.h>

int main () {
    //rectangle
    int width;
    int length;

    printf("1.\n");
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

    printf("2.\n");
    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &Fahrenheit);

    int C= (Fahrenheit-32)/1.8;

    printf("%d°F = ", Fahrenheit);
    printf("%d°C\n", C);

    //minutes and hours
    int min;

    printf("3.");
    printf("enter minutes: ");
    scanf("%d", &min);

    int hours = min/60;
    int mins = min%60;

    printf("%d hours and %d minutes\n", hours, mins);

    //circle
    int radius;

    printf("4.");
    printf("Enter the radius: ");
    scanf("%d", &radius);

    int diame = radius*2;
    int peri= diame*3.14;
    printf("The perimeter of the circle is %d\n", peri);
    
    return 0;
}