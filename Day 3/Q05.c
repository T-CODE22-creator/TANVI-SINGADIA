/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.*/
#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("enter temperature in celsius:");
    scanf("%f", &celsius);
    fahrenheit= (9.0/5.0)*celsius+32;
    printf("fahrenheit=%.2f", fahrenheit);
    return 0;
}
