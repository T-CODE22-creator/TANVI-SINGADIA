/*Q39: Write a program to find the product of odd digits of a number.*/
#include<stdio.h>
int main()
{
    int a, product = 1, digit;
    printf("Enter a number:");
    scanf("%d", &a);
    while(a > 0)
    {
        digit = a % 10;
        if(digit % 2 != 0)
        {
            product *= digit;
        }
        a /= 10;
    }
    printf("Product of odd digits: %d", product);
    return 0;
}
