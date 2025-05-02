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
    int mun;
    printf("Enter the first desired number chart: ");
    scanf("%d", &num);
    printf("Enter the second desired number chart: ");
    scanf("%d", &mun);
    printf("\n");

    int r;
    int c;
    int t = 1;

    for(r = 1; r < mun + 1; ++r){
        for(c = 1; c < num + 1; ++c){
            t = r * c;
            printf("%d\t", t);
        }
        printf("\n");
    }
}