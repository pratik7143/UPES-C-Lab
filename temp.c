#include<stdio.h>
int main(){
    float c;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &c);
    float f;
    f = (9.0/5.0)*c + 32;
    printf("The temperature in Fahrenheit is %.2f", f);
    return 0;
}

