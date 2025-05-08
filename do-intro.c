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
    return 0;
}