#include <stdio.h>

int main(){
    for(int row = 1; row < 6; row++) {
        for(int col = 1; col < 6; col++) {
            int mul = row * col;
            printf("%d\t", mul);
        }
        printf("\n");
    }
    printf("\n");

    int num;
    printf("Enter the desired nunber chart: ");
    scanf("%d", &num);

    int r;
    int c;
    int t = 1;

    //for(r = 1; r < 9; ++r){
        //for(c = 1; c < 9; ++c)
    }
