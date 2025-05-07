#include <stdio.h>

int main(){
    int number;

    printf("enter a positive number: ");
    scanf("%d", &number);

    int num = 1;
    int answer = 0;

    if(number > 0){
        while(number/num >= 1){
            num = num*10;
            ++answer;
        } 
        printf("%d\n", answer);
    } else {
        printf("NOT A POSITIVE NUMBER >:(\n");
    }

    //experiment
    int a;

    printf("enter a positive number: ");
    scanf("%d", &a);

    float s = 1;
    float d = 0;
    int f = a%1;
    float g = 1;
    float h = 0;

    if(a > 0){
        while(a/s >= 1){
            s = s*10;
            ++d;
        } 
        while(f/g <= 1){
            g = g/10;
            ++h;
        }
        int j = h+d;
        printf("%d\n", f);
        printf("%.0f\n", d);
        printf("%.0f\n", h);
        printf("%d\n", j);
    } else {
        printf("NOT A POSITIVE NUMBER >:(\n");
    }

    return 0;
}