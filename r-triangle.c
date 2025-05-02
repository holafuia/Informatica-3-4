#include <stdio.h>

int main(){
    int height;

    printf("please enter triangle height: ");
    scanf(" %d", &height);

    int a;
    int s;

    for(a = 1; a <= height; a++){
        for(s = 1; s <= a; s++){
            printf("*");
        }
        printf("\n");
    }
}