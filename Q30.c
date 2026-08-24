/*Q30: Write a program to reverse a given number.*/
#include<stdio.h>
int main()
{
    int a, rev=0, rem;
    printf("Enter a number:");
    scanf("%d", &a);
    while (a!=0)
    {
        rem = a % 10;
        rev = rev * 10 + rem;
        a = a / 10;
    }
    printf("Reversed number is: %d", rev);
    return 0;
}