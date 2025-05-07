#include <stdio.h>

int main(){
    int number;

    printf("enter a positive number: ");
    scanf("%d", &number);

    int num = 1;
    int f = number/num;
    int answer = 1;

    if(number > 0){
        while(f > 1){
            num = num*10;
            ++answer;
        } printf("%d\n", answer);
    } else {
        printf("Not a positive number >:(\n");
    }
}