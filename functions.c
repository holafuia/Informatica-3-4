#include <stdio.h>
float calculateAge(int age, float orbit);

int main(){
    const float MERCURY = 0.2408467;
    const float VENUS = 0.61519726;
    const float EARTH = 1.0;
    const float MARS = 1.8808158;
    const float JUPITER = 11.862615;
    const float SATURN = 29.447498;
    const float URANUS = 84.016846;
    const float NEPTUNE = 164.79132;

    int user_age;
    printf("enter your age: ");
    scanf("%d", &user_age);

    int user_selection;
    printf("1. MERCURY\n");
    printf("2. VENUS\n");
    printf("3. EARTH\n");
    printf("4. MARS\n");
    printf("5. JUPITER\n");
    printf("6. SATURN\n");
    printf("7. URANUS\n");
    printf("8. NEPTUNE\n");
    printf("select a planet: ");
    scanf("%d", &user_selection);

    if (user_selection == 1){
        calculateAge(user_age, MERCURY);
    } else if (user_selection == 2){
        calculateAge(user_age, VENUS);
    } else if (user_selection == 3){
        calculateAge(user_age, EARTH);
    } else if (user_selection == 4){
        calculateAge(user_age, MARS);
    } else if (user_selection == 5){
        calculateAge(user_age, JUPITER);
    } else if (user_selection == 6){
        calculateAge(user_age, SATURN);
    } else if (user_selection == 7){
        calculateAge(user_age, URANUS);
    } else if (user_selection == 8){
        calculateAge(user_age, NEPTUNE);
    } else if (user_selection >= 9){
        while (user_age == user_age){
            printf("xdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxdxd\n");
        }
    }
}
float calculateAge(int age, float orbit){
    float result;
    result = age / orbit;
    printf("%.2f\n", result);
}