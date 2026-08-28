/*Q38: Write a program to find the sum of digits of a number.*/
#include<stdio.h>
int main()
{
    int num, sum = 0, digit;
    printf("Enter a number:");
    scanf("%d", &num);
    while(num != 0)
    {
        digit = num % 10; // extract the last digit
        sum += digit; // add the digit to sum
        num /= 10; // remove the last digit from number
        printf("Current sum of digits: %d\n", sum); // print the current sum
    }
    printf("The sum of digits is: %d\n", sum); // print the final sum
    return 0;
}