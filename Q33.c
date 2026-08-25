/*Q33: Write a program to check if a number is an Armstrong number.*/
#include<stdio.h>
int main()
{
    int a, b, c, sum = 0, temp;
    printf("Enter a number:");
    scanf("%d", &a);
    temp = a;
    while (temp != 0)
    {
        b = temp % 10;
        sum = sum + (b*b*b);
        temp = temp / 10;
    }
    if (sum == a)
    printf("%d is an Armstrong number.", a);
    else
    printf("%d is not an Armstrong number.", a);
    return 0;
}