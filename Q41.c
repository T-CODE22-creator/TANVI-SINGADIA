/*Q41: Write a program to swap the first and last digit of a number.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a, first_digit, last_digit, num, digits;
    printf("Enter a number:");
    scanf("%d", &a);
    num = a;
    last_digit = a % 10; // get last digit
    digits = 0;
    while (num != 0) // count number of digits
    {
        num = num / 10;
        digits++;
    }
    first_digit = a / (pow(10, digits - 1)); // get first digit
    a = a - first_digit * pow(10, digits - 1); // remove first digit
    a = a + last_digit * pow(10, digits - 1); // add last digit at first position
    a = a - last_digit; // remove last digit
    a = a + first_digit; // add first digit at last position
    printf("Number after swapping first and last digit: %d", a);
    return 0;
}