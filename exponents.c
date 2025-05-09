# include <stdio.h>
# include <math.h>

int main(){
    int num;
    int exp;
    int form;

    printf("Enter the base number: ");
    scanf("%d", &num);
    printf("Enter the exponent of the base number: ");
    scanf("%d", &exp);
    printf("while loop = 1\n");
    printf("for loop = 2\n");
    printf("enter the desired loop: ");
    scanf("%d", &form);

    double q = num;
    double w = exp;
    double e = pow(q, w);
    printf("%d ^ %d = %.0lf\n", num, exp, e);

    int ran = 1;
    int nums = num;
    int rans;
    int mun = num;
    
    //if (exp != 0){
        //if(form == 1){
        //while(ran < exp){
            //nums = nums * num;
            //++ran;
        //}printf("%d ^ %d = %d\n", num, exp, nums);
    //}else if(form == 2){
        //for(rans = 1; rans < exp; ++rans){
            //mun = mun * num;
        //}printf("%d ^ %d = %d\n", num, exp, mun);
    //}else if(form > 2){
        //printf("ONE OR TWO, HOW HARD IS THAT >:(\n");
    //}
//}else if(exp == 0){
    //printf("%d ^ %d = 1\n", num, exp);
//}

return 0;
}