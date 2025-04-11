#include <stdio.h>

int main(){
    //same numbers
    int num1;
    int num2;

    printf("1.\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num1 == num2){
        printf("%d is equal to %d \n", num1, num2);
    } else {
        printf("%d is not equal to %d \n", num1, num2);
    }

    // even or odd
    int num;

    printf("2.\n");
    printf("enter number: ");
    scanf("%d", &num);

    if (num%2 == 0){
        printf("%d is a even number\n", num);
    } else {
        printf("%d is a odd number\n", num);
    }

    //days of the week in numbers
    int numweek;

    printf("3.\n");
    printf("enter a number between 1 and 7: ");
    scanf("%d", &numweek);

    if(numweek == 1){
        printf("Sunday\n");
    } else if(numweek == 2){
        printf("Monday\n");
    } else if(numweek == 3){
        printf("Tuesday\n");
    } else if(numweek == 4){
        printf("wednesday\n");
    } else if(numweek == 5){
        printf("Thursday\n");
    } else if(numweek == 6){
        printf("Friday\n");
    } else if(numweek == 7){
        printf("Saturday\n");
    } else {
        printf("invalid number\n");
    }

    //calculator
    float calcu;

    printf("4.\n");
    printf("operations:\n");
    printf("1 = addition\n");
    printf("2 = substraction\n");
    printf("3 = multiplication\n");
    printf("4 = division\n");
    printf("give the first value: ");
    scanf("%f", &calcu);

    float calcula;
    float opera;

    printf("give the second value: ");
    scanf("%f", &calcula);
    printf("enter the desired operation: ");
    scanf("%f", &opera);

    if(opera == 1){
        float add = calcu+calcula;
        printf("%.2f plus %.2f is %.2f\n", calcu, calcula, add);
    } else if(opera == 2){
        float sub = calcu-calcula;
        printf("%.2f minus %.2f is %.2f\n", calcu, calcula, sub);
    } else if(opera == 3){
        float multi = calcu*calcula;
        printf("%.2f multiplied by %.2f is %.2f\n", calcu, calcula, multi);
    } else if(opera == 4){
        float divi = calcu/calcula;
        printf("%.2f divided by %.2f is %.2f\n", calcu, calcula, divi);
    } else {
        printf("invalid operation\n");
    }
}