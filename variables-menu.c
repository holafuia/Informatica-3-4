#include <stdio.h>

int main() {
    char snack1[] = "Rancheritos";
    float price1 = 19.99;
    int stock1 = 19;

    char snack2[] = "Coca-Cola";
    float price2 = 22.50;
    int stock2 = 25;

    char snack3[] = "skittles";
    float price3 = 15.20;
    int stock3 = 12;

    printf("Welcome to the Snack Shop\n");
    printf("---------------------------\n");
    printf("1. %s - $%.2f - %d Available\n", snack1, price1, stock1);
    printf("2. %s - $%.2f - %d Available\n", snack2, price2, stock2);
    printf("3. %s - $%.2F - %d Available\n", snack3, price3, stock3);

    return 0;
}