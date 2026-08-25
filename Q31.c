/*Q31: Write a program to take a number as input and print its equivalent binary representation.*/
#include<stdio.h>
int main()
{
    int a, binary[32], i = 0;
    printf("Enter a number:");
    scanf("%d", &a);
    while(a > 0)
    {
        binary[i] = a % 2;
        a = a / 2;
        i++;
    }
    printf("Binary representation:");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    return 0;
}