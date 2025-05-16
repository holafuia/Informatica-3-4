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
    printf("enter your age");
    scanf("%d", &user_age);
}
float calculateAge(int age, float orbit){
    float result;
    result = age / orbit;
    return result;
}