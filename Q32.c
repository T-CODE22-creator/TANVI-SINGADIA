/*Q32: Write a program to check if a number is a palindrome.*/
#include<stdio.h>
int main()
{
    int a, b, rev = 0, temp;
    printf("Enter a number:");
    scanf("%d", &a);
    temp = a;
    while (temp != 0)
    {
        b = temp % 10;
        rev = rev * 10 + b;
        temp = temp / 10;
    }
    if (rev == a)
    printf("%d is a palindrome number.", a);
    else
    printf("%d is not a palindrome number.", a);
    return 0;
}